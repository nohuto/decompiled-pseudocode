/*
 * XREFs of sub_1800F9C18 @ 0x1800F9C18
 * Callers:
 *     sub_1800B5ACC @ 0x1800B5ACC (sub_1800B5ACC.c)
 * Callees:
 *     sub_1800CFC70 @ 0x1800CFC70 (sub_1800CFC70.c)
 */

_QWORD *__fastcall sub_1800F9C18(_QWORD *a1)
{
  sub_1800CFC70(a1);
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return a1;
}
