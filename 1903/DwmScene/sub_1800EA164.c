/*
 * XREFs of sub_1800EA164 @ 0x1800EA164
 * Callers:
 *     sub_1800EA190 @ 0x1800EA190 (sub_1800EA190.c)
 * Callees:
 *     sub_1800EA098 @ 0x1800EA098 (sub_1800EA098.c)
 */

__int64 __fastcall sub_1800EA164(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  sub_1800EA098((__int64)(a1 + 14), a2);
  return sub_1800A7AE8(a1);
}
