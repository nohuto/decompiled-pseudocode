/*
 * XREFs of sub_1800D08D8 @ 0x1800D08D8
 * Callers:
 *     sub_1800CFED8 @ 0x1800CFED8 (sub_1800CFED8.c)
 * Callees:
 *     sub_180015DF4 @ 0x180015DF4 (sub_180015DF4.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD **__fastcall sub_1800D08D8(_QWORD **a1, _QWORD *a2, _DWORD *a3)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180015DF4(a2, a1, 1u);
  sub_180064684((__int64)*a1, 1, 0);
  sub_180064684((__int64)*a1, 2, 0);
  sub_180064684((__int64)*a1, 4, 0);
  sub_18009F6C0(*a1, a3, 0LL);
  return a1;
}
