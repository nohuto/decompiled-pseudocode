/*
 * XREFs of sub_18010DD80 @ 0x18010DD80
 * Callers:
 *     sub_1800ED948 @ 0x1800ED948 (sub_1800ED948.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_18010DDB0 @ 0x18010DDB0 (sub_18010DDB0.c)
 * Callees:
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 */

__int64 __fastcall sub_18010DD80(_QWORD *a1)
{
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  sub_1800113D8(a1 + 16);
  return sub_1800A7BF8(a1);
}
