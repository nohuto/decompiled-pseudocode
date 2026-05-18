/*
 * XREFs of sub_1800ED948 @ 0x1800ED948
 * Callers:
 *     sub_1800EDA00 @ 0x1800EDA00 (sub_1800EDA00.c)
 * Callees:
 *     sub_1800EA1A8 @ 0x1800EA1A8 (sub_1800EA1A8.c)
 */

__int64 __fastcall sub_1800ED948(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  sub_1800EA1A8((__int64)(a1 + 19), a2);
  return sub_18010DD80(a1);
}
