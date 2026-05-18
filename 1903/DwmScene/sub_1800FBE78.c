/*
 * XREFs of sub_1800FBE78 @ 0x1800FBE78
 * Callers:
 *     sub_1800FBFB4 @ 0x1800FBFB4 (sub_1800FBFB4.c)
 * Callees:
 *     sub_180015C64 @ 0x180015C64 (sub_180015C64.c)
 *     sub_180096CE0 @ 0x180096CE0 (sub_180096CE0.c)
 *     sub_180096CF0 @ 0x180096CF0 (sub_180096CF0.c)
 *     sub_180097220 @ 0x180097220 (sub_180097220.c)
 *     sub_180097364 @ 0x180097364 (sub_180097364.c)
 *     sub_18009766C @ 0x18009766C (sub_18009766C.c)
 *     sub_1800976EC @ 0x1800976EC (sub_1800976EC.c)
 *     sub_180097954 @ 0x180097954 (sub_180097954.c)
 *     sub_1800FB9A0 @ 0x1800FB9A0 (sub_1800FB9A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800FBE78(
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
  sub_180015C64(a2, a1, 1u);
  if ( a8 )
  {
    sub_180096CE0(*a1, (a5[1] - *a5) >> 1);
    sub_180096CF0(*a1, *a5);
  }
  else
  {
    sub_1800FB9A0((unsigned __int64)a5, a4, a6, a7, a10);
  }
  sub_18009766C(*a1, a3);
  sub_180097954(*a1, (a4[1] - *a4) / 12);
  sub_180097364(*a1, *a4);
  if ( a10 )
    sub_180097220(*a1, *a6, 0, v13);
  if ( a9 )
    sub_1800976EC(*a1, *a7);
  return a1;
}
