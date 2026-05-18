/*
 * XREFs of sub_180124458 @ 0x180124458
 * Callers:
 *     sub_1801244CC @ 0x1801244CC (sub_1801244CC.c)
 * Callees:
 *     sub_180122EC0 @ 0x180122EC0 (sub_180122EC0.c)
 *     sub_18012317C @ 0x18012317C (sub_18012317C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180124458(_QWORD *a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = sub_180122EC0((__int64)(a1 + 1), 0LL, 0LL);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18012317C(a1, 8uLL);
  return a1;
}
