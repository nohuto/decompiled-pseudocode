/*
 * XREFs of sub_1800F9B08 @ 0x1800F9B08
 * Callers:
 *     sub_1800B59BC @ 0x1800B59BC (sub_1800B59BC.c)
 * Callees:
 *     sub_1800CFB60 @ 0x1800CFB60 (sub_1800CFB60.c)
 */

_QWORD *__fastcall sub_1800F9B08(_QWORD *a1)
{
  sub_1800CFB60(a1);
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return a1;
}
