/*
 * XREFs of sub_1800F00B8 @ 0x1800F00B8
 * Callers:
 *     sub_180073628 @ 0x180073628 (sub_180073628.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18010DB98 @ 0x18010DB98 (sub_18010DB98.c)
 */

_QWORD *__fastcall sub_1800F00B8(_QWORD *a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_18000F444(v3, (__int64)&qword_18025E618);
  sub_18010DB98(a1, v3);
  *a1 = &Spectre::Engine::UnlitShaderExtension::`vftable';
  return a1;
}
