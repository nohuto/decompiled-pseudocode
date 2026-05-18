/*
 * XREFs of sub_1800F99A0 @ 0x1800F99A0
 * Callers:
 *     sub_1800B5BD0 @ 0x1800B5BD0 (sub_1800B5BD0.c)
 * Callees:
 *     sub_180063EB8 @ 0x180063EB8 (sub_180063EB8.c)
 */

_QWORD *__fastcall sub_1800F99A0(_QWORD *a1)
{
  sub_180063EB8((__int64)a1);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderStateGeneric::`vftable';
  return a1;
}
