/*
 * XREFs of sub_1800EC1B8 @ 0x1800EC1B8
 * Callers:
 *     sub_180073308 @ 0x180073308 (sub_180073308.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800A7680 @ 0x1800A7680 (sub_1800A7680.c)
 */

_QWORD *__fastcall sub_1800EC1B8(_QWORD *a1)
{
  __int64 v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_18000F444(v3, (__int64)&qword_18025E180);
  sub_1800A7680((__int64)a1, v3);
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  return a1;
}
