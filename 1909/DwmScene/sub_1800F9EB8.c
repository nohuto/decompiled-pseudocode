/*
 * XREFs of sub_1800F9EB8 @ 0x1800F9EB8
 * Callers:
 *     sub_1800B5C40 @ 0x1800B5C40 (sub_1800B5C40.c)
 * Callees:
 *     sub_18009EFD0 @ 0x18009EFD0 (sub_18009EFD0.c)
 */

_QWORD *__fastcall sub_1800F9EB8(_QWORD *a1)
{
  sub_18009EFD0(a1);
  *a1 = &Spectre::Engine::SamplerGeneric::`vftable';
  return a1;
}
