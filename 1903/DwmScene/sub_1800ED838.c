/*
 * XREFs of sub_1800ED838 @ 0x1800ED838
 * Callers:
 *     sub_1800ED8F0 @ 0x1800ED8F0 (sub_1800ED8F0.c)
 * Callees:
 *     sub_1800EA098 @ 0x1800EA098 (sub_1800EA098.c)
 */

__int64 __fastcall sub_1800ED838(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  sub_1800EA098((__int64)(a1 + 19), a2);
  return sub_18010DC70(a1);
}
