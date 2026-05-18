/*
 * XREFs of sub_180124568 @ 0x180124568
 * Callers:
 *     sub_1801245DC @ 0x1801245DC (sub_1801245DC.c)
 * Callees:
 *     sub_180122FD0 @ 0x180122FD0 (sub_180122FD0.c)
 *     sub_18012328C @ 0x18012328C (sub_18012328C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180124568(_QWORD *a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = sub_180122FD0((__int64)(a1 + 1), 0LL, 0LL);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18012328C(a1, 8uLL);
  return a1;
}
