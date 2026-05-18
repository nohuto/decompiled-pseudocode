/*
 * XREFs of sub_1800F02AC @ 0x1800F02AC
 * Callers:
 *     sub_1800734A0 @ 0x1800734A0 (sub_1800734A0.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800A7570 @ 0x1800A7570 (sub_1800A7570.c)
 */

__int64 __fastcall sub_1800F02AC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_18000F3F4(v3, (__int64)&qword_18025D660);
  sub_1800A7570(a1, v3);
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::SymbolShaderExtension::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
