/*
 * XREFs of sub_180111FA8 @ 0x180111FA8
 * Callers:
 *     sub_180009B30 @ 0x180009B30 (sub_180009B30.c)
 * Callees:
 *     sub_18008D4D8 @ 0x18008D4D8 (sub_18008D4D8.c)
 *     sub_180111BEC @ 0x180111BEC (sub_180111BEC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180111FA8(_QWORD *a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = sub_180111BEC((__int64)(a1 + 1), 0LL, 0LL);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18008D4D8(a1, 8LL);
  return a1;
}
