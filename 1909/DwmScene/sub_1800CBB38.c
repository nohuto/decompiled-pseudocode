/*
 * XREFs of sub_1800CBB38 @ 0x1800CBB38
 * Callers:
 *     sub_180044364 @ 0x180044364 (sub_180044364.c)
 * Callees:
 *     sub_180063EB8 @ 0x180063EB8 (sub_180063EB8.c)
 */

_QWORD *__fastcall sub_1800CBB38(_QWORD *a1)
{
  sub_180063EB8((__int64)a1);
  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  return a1;
}
