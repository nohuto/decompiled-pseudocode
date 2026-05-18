/*
 * XREFs of sub_1800D0858 @ 0x1800D0858
 * Callers:
 *     sub_1800CFDC8 @ 0x1800CFDC8 (sub_1800CFDC8.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 * Callees:
 *     sub_180015EA4 @ 0x180015EA4 (sub_180015EA4.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D0858(__int64 *a1, _QWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  size_t v11; // [rsp+40h] [rbp-28h]

  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180015EA4(a2, a1, 1u);
  sub_180064574(*a1, 1, 0);
  sub_180064574(*a1, 2, 0);
  sub_180064574(*a1, 4, 0);
  LODWORD(v11) = 0;
  sub_18009DF60(*a1, a3, a4, 0, a5, a6, a7, 0LL, v11, 0LL);
  return a1;
}
