/*
 * XREFs of sub_1800890CC @ 0x1800890CC
 * Callers:
 *     sub_180089140 @ 0x180089140 (sub_180089140.c)
 *     sub_18008923C @ 0x18008923C (sub_18008923C.c)
 * Callees:
 *     sub_18008D2B4 @ 0x18008D2B4 (sub_18008D2B4.c)
 *     sub_18008D4D8 @ 0x18008D4D8 (sub_18008D4D8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800890CC(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = sub_18008D2B4(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18008D4D8(a1, 8LL);
  return a1;
}
