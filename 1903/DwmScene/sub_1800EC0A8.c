/*
 * XREFs of sub_1800EC0A8 @ 0x1800EC0A8
 * Callers:
 *     sub_1800731F8 @ 0x1800731F8 (sub_1800731F8.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800A7570 @ 0x1800A7570 (sub_1800A7570.c)
 */

_QWORD *__fastcall sub_1800EC0A8(_QWORD *a1)
{
  __int64 v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_18000F3F4(v3, (__int64)&qword_18025D180);
  sub_1800A7570((__int64)a1, v3);
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  return a1;
}
