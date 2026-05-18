/*
 * XREFs of sub_180063D84 @ 0x180063D84
 * Callers:
 *     sub_180038D1C @ 0x180038D1C (sub_180038D1C.c)
 *     sub_18006468C @ 0x18006468C (sub_18006468C.c)
 *     sub_18009D0A4 @ 0x18009D0A4 (sub_18009D0A4.c)
 *     sub_1800CE948 @ 0x1800CE948 (sub_1800CE948.c)
 *     sub_1800CFB60 @ 0x1800CFB60 (sub_1800CFB60.c)
 *     sub_1800F9B98 @ 0x1800F9B98 (sub_1800F9B98.c)
 * Callees:
 *     sub_180063DA8 @ 0x180063DA8 (sub_180063DA8.c)
 */

_QWORD *__fastcall sub_180063D84(_QWORD *a1, __int64 a2, __int64 a3)
{
  sub_180063DA8(a1, a2, a3);
  *a1 = &Spectre::Engine::DeviceBuffer::`vftable';
  return a1;
}
