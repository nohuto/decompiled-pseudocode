/*
 * XREFs of sub_1800B7B48 @ 0x1800B7B48
 * Callers:
 *     sub_180104894 @ 0x180104894 (sub_180104894.c)
 *     sub_180104BBC @ 0x180104BBC (sub_180104BBC.c)
 *     sub_18010511C @ 0x18010511C (sub_18010511C.c)
 * Callees:
 *     sub_1800B7BF0 @ 0x1800B7BF0 (sub_1800B7BF0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B7B48(__int64 a1, __int64 a2, int a3, int a4)
{
  if ( a4 )
  {
    *(_QWORD *)a1 = &unk_1801F4738;
    std::ios::ios(a1 + 144);
  }
  std::istream::istream(a1, a1 + 16, 0LL, 0LL, -2LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::istringstream::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  sub_1800B7BF0(a1 + 16, a2, a3 | 1u);
  return a1;
}
