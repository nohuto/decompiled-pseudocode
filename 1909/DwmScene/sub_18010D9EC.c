/*
 * XREFs of sub_18010D9EC @ 0x18010D9EC
 * Callers:
 *     sub_18010D948 @ 0x18010D948 (sub_18010D948.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180017258 @ 0x180017258 (sub_180017258.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010D9EC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 0LL;
    sub_18000F444((_QWORD *)a3, i);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(i + 32);
    sub_180017258((__int64 *)(a3 + 40), i + 40);
    a3 += 64LL;
  }
  return a3;
}
