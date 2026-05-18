/*
 * XREFs of sub_1800D0968 @ 0x1800D0968
 * Callers:
 *     sub_1800CFED8 @ 0x1800CFED8 (sub_1800CFED8.c)
 *     sub_1800D0458 @ 0x1800D0458 (sub_1800D0458.c)
 * Callees:
 *     sub_180015F14 @ 0x180015F14 (sub_180015F14.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D0968(__int64 *a1, _QWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  size_t v11; // [rsp+40h] [rbp-28h]

  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180015F14(a2, a1, 1u);
  sub_180064684(*a1, 1, 0);
  sub_180064684(*a1, 2, 0);
  sub_180064684(*a1, 4, 0);
  LODWORD(v11) = 0;
  sub_18009E070(*a1, a3, a4, 0, a5, a6, a7, 0LL, v11, 0LL);
  return a1;
}
