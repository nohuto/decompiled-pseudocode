/*
 * XREFs of sub_1800FBF88 @ 0x1800FBF88
 * Callers:
 *     sub_1800FC0C4 @ 0x1800FC0C4 (sub_1800FC0C4.c)
 * Callees:
 *     sub_180015CD4 @ 0x180015CD4 (sub_180015CD4.c)
 *     sub_180096DF0 @ 0x180096DF0 (sub_180096DF0.c)
 *     sub_180096E00 @ 0x180096E00 (sub_180096E00.c)
 *     sub_180097330 @ 0x180097330 (sub_180097330.c)
 *     sub_180097474 @ 0x180097474 (sub_180097474.c)
 *     sub_18009777C @ 0x18009777C (sub_18009777C.c)
 *     sub_1800977FC @ 0x1800977FC (sub_1800977FC.c)
 *     sub_180097A64 @ 0x180097A64 (sub_180097A64.c)
 *     sub_1800FBAB0 @ 0x1800FBAB0 (sub_1800FBAB0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800FBF88(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v13; // r9

  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180015CD4(a2, a1, 1u);
  if ( a8 )
  {
    sub_180096DF0(*a1, (a5[1] - *a5) >> 1);
    sub_180096E00(*a1, *a5);
  }
  else
  {
    sub_1800FBAB0((unsigned __int64)a5, a4, a6, a7, a10);
  }
  sub_18009777C(*a1, a3);
  sub_180097A64(*a1, (a4[1] - *a4) / 12);
  sub_180097474(*a1, *a4);
  if ( a10 )
    sub_180097330(*a1, *a6, 0, v13);
  if ( a9 )
    sub_1800977FC(*a1, *a7);
  return a1;
}
