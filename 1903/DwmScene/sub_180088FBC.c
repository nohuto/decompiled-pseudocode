/*
 * XREFs of sub_180088FBC @ 0x180088FBC
 * Callers:
 *     sub_180089030 @ 0x180089030 (sub_180089030.c)
 *     sub_18008912C @ 0x18008912C (sub_18008912C.c)
 * Callees:
 *     sub_18008D1A4 @ 0x18008D1A4 (sub_18008D1A4.c)
 *     sub_18008D3C8 @ 0x18008D3C8 (sub_18008D3C8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180088FBC(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = sub_18008D1A4(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18008D3C8(a1, 8LL);
  return a1;
}
