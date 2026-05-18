/*
 * XREFs of sub_1800EA274 @ 0x1800EA274
 * Callers:
 *     sub_1800EA2A0 @ 0x1800EA2A0 (sub_1800EA2A0.c)
 * Callees:
 *     sub_1800EA1A8 @ 0x1800EA1A8 (sub_1800EA1A8.c)
 */

__int64 __fastcall sub_1800EA274(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  sub_1800EA1A8((__int64)(a1 + 14), a2);
  return sub_1800A7BF8(a1);
}
