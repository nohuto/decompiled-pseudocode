/*
 * XREFs of sub_18010D8DC @ 0x18010D8DC
 * Callers:
 *     sub_18010D838 @ 0x18010D838 (sub_18010D838.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800171E8 @ 0x1800171E8 (sub_1800171E8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010D8DC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 0LL;
    sub_18000F3F4((_QWORD *)a3, i);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(i + 32);
    sub_1800171E8((__int64 *)(a3 + 40), i + 40);
    a3 += 64LL;
  }
  return a3;
}
