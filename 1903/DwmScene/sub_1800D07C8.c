/*
 * XREFs of sub_1800D07C8 @ 0x1800D07C8
 * Callers:
 *     sub_1800CFDC8 @ 0x1800CFDC8 (sub_1800CFDC8.c)
 * Callees:
 *     sub_180015D84 @ 0x180015D84 (sub_180015D84.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_18009F5B0 @ 0x18009F5B0 (sub_18009F5B0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD **__fastcall sub_1800D07C8(_QWORD **a1, _QWORD *a2, _DWORD *a3)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180015D84(a2, a1, 1u);
  sub_180064574((__int64)*a1, 1, 0);
  sub_180064574((__int64)*a1, 2, 0);
  sub_180064574((__int64)*a1, 4, 0);
  sub_18009F5B0(*a1, a3, 0LL);
  return a1;
}
