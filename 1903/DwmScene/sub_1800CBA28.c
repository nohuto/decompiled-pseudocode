/*
 * XREFs of sub_1800CBA28 @ 0x1800CBA28
 * Callers:
 *     sub_180044254 @ 0x180044254 (sub_180044254.c)
 * Callees:
 *     sub_180063DA8 @ 0x180063DA8 (sub_180063DA8.c)
 */

_QWORD *__fastcall sub_1800CBA28(_QWORD *a1)
{
  sub_180063DA8((__int64)a1);
  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  return a1;
}
