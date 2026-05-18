/*
 * XREFs of sub_18010DC70 @ 0x18010DC70
 * Callers:
 *     sub_1800ED838 @ 0x1800ED838 (sub_1800ED838.c)
 *     sub_1800EFFF0 @ 0x1800EFFF0 (sub_1800EFFF0.c)
 *     sub_18010DCA0 @ 0x18010DCA0 (sub_18010DCA0.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 */

__int64 __fastcall sub_18010DC70(_QWORD *a1)
{
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  sub_180011388(a1 + 16);
  return sub_1800A7AE8(a1);
}
