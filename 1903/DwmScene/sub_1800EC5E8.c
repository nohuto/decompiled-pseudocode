/*
 * XREFs of sub_1800EC5E8 @ 0x1800EC5E8
 * Callers:
 *     sub_180073270 @ 0x180073270 (sub_180073270.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800A7570 @ 0x1800A7570 (sub_1800A7570.c)
 */

__int64 __fastcall sub_1800EC5E8(__int64 a1)
{
  __int64 result; // rax
  __int64 v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_18000F3F4(v3, (__int64)&qword_18025D1E8);
  sub_1800A7570(a1, v3);
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
