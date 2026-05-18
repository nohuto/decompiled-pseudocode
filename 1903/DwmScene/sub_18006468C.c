/*
 * XREFs of sub_18006468C @ 0x18006468C
 * Callers:
 *     sub_18002C0B8 @ 0x18002C0B8 (sub_18002C0B8.c)
 * Callees:
 *     sub_180063D84 @ 0x180063D84 (sub_180063D84.c)
 */

_QWORD *__fastcall sub_18006468C(_QWORD *a1)
{
  sub_180063D84(a1, 10LL, 3LL);
  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  return a1;
}
