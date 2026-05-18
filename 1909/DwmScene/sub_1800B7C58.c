/*
 * XREFs of sub_1800B7C58 @ 0x1800B7C58
 * Callers:
 *     sub_1801049A4 @ 0x1801049A4 (sub_1801049A4.c)
 *     sub_180104CCC @ 0x180104CCC (sub_180104CCC.c)
 *     sub_18010522C @ 0x18010522C (sub_18010522C.c)
 * Callees:
 *     sub_1800B7D00 @ 0x1800B7D00 (sub_1800B7D00.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B7C58(__int64 a1, __int64 a2, int a3, int a4)
{
  if ( a4 )
  {
    *(_QWORD *)a1 = &unk_1801F5738;
    std::ios::ios(a1 + 144);
  }
  std::istream::istream(a1, a1 + 16, 0LL, 0LL, -2LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::istringstream::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  sub_1800B7D00(a1 + 16, a2, a3 | 1u);
  return a1;
}
