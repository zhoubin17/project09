/*
练习3.24
要求：使用迭代器重做练习3.20
完成时间：2019.01.03
*/

#include <iostream>
#include <vector>

using namespace std;
/*
//第一部分功能：求相邻两数之和
int main()
{
    vector<int> vInt;
    int ival;

    cout << "请输入一组数字：" << endl;
    

    while (cin >> ival)
        vInt.push_back(ival);
    
    //判断是否为空
    if (vInt.size() == 0)
    //if (vInt.begin() == vInt.end())   //也可以进行判断
    {
        cout << "输入为空" << endl;
        return -1;
    }

    cout << "相邻两数的和为：" << endl;

    //这部分的功能利用迭代器来实现

    for (auto it = vInt.begin(); it != vInt.end(); it++)
    {
        cout << (*it + *(++it)) << " ";

        //自行规定每行输出五个数
        if ((it - vInt.begin() +1) % 10 == 0)   //元素的个数为偶数
            cout << endl;
    }
    //如果元素的个数为奇数
    if (vInt.size() / 2 != 0)
        cout << *(vInt.cend() -1) << endl;

    return 0;
}
*/


//第二个功能：求首尾元素和的程序
int main()
{
    vector<int> vInt;
    int ival;
    cout << "请输入一组数字：" << endl;
    while (cin >> ival)
        vInt.push_back(ival);
    if (vInt.begin() == vInt.end())
    {
        cout << "没有任何元素" << endl;
        return -1;
    }

    cout << "首尾两数的和分别为：" << endl;
    auto beg = vInt.begin(), end = vInt.end();

    for (auto it = beg; it != beg + (end - beg) / 2; it++)
    {
        cout << (*it + *(beg + (end - it) - 1)) << " ";

        if ((it - beg + 1) % 5 == 0)
            cout << endl;
    }

    //如果元素个数为奇数
    if (vInt.size() / 2 != 0)
        cout << *(beg + (end - beg) / 2);
    
    return 0;

}