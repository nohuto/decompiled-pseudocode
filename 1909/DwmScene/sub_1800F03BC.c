/*
 * XREFs of sub_1800F03BC @ 0x1800F03BC
 * Callers:
 *     sub_1800735B0 @ 0x1800735B0 (sub_1800735B0.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800A7680 @ 0x1800A7680 (sub_1800A7680.c)
 */

__int64 __fastcall sub_1800F03BC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_18000F444(v3, (__int64)&qword_18025E660);
  sub_1800A7680(a1, v3);
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::SymbolShaderExtension::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
