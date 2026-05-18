/*
 * XREFs of sub_1800F9DA8 @ 0x1800F9DA8
 * Callers:
 *     sub_1800B5B30 @ 0x1800B5B30 (sub_1800B5B30.c)
 * Callees:
 *     sub_18009EEC0 @ 0x18009EEC0 (sub_18009EEC0.c)
 */

_QWORD *__fastcall sub_1800F9DA8(_QWORD *a1)
{
  sub_18009EEC0(a1);
  *a1 = &Spectre::Engine::SamplerGeneric::`vftable';
  return a1;
}
