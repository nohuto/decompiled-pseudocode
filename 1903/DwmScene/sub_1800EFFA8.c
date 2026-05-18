/*
 * XREFs of sub_1800EFFA8 @ 0x1800EFFA8
 * Callers:
 *     sub_180073518 @ 0x180073518 (sub_180073518.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18010DA88 @ 0x18010DA88 (sub_18010DA88.c)
 */

_QWORD *__fastcall sub_1800EFFA8(_QWORD *a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_18000F3F4(v3, (__int64)&qword_18025D618);
  sub_18010DA88(a1, v3);
  *a1 = &Spectre::Engine::UnlitShaderExtension::`vftable';
  return a1;
}
