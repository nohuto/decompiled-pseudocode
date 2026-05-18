/*
 * XREFs of sub_180063E94 @ 0x180063E94
 * Callers:
 *     sub_180038E2C @ 0x180038E2C (sub_180038E2C.c)
 *     sub_18006479C @ 0x18006479C (sub_18006479C.c)
 *     sub_18009D1B4 @ 0x18009D1B4 (sub_18009D1B4.c)
 *     sub_1800CEA58 @ 0x1800CEA58 (sub_1800CEA58.c)
 *     sub_1800CFC70 @ 0x1800CFC70 (sub_1800CFC70.c)
 *     sub_1800F9CA8 @ 0x1800F9CA8 (sub_1800F9CA8.c)
 * Callees:
 *     sub_180063EB8 @ 0x180063EB8 (sub_180063EB8.c)
 */

_QWORD *__fastcall sub_180063E94(_QWORD *a1, __int64 a2, __int64 a3)
{
  sub_180063EB8(a1, a2, a3);
  *a1 = &Spectre::Engine::DeviceBuffer::`vftable';
  return a1;
}
