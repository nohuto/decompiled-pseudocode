/*
 * XREFs of sub_18006479C @ 0x18006479C
 * Callers:
 *     sub_18002C1C8 @ 0x18002C1C8 (sub_18002C1C8.c)
 * Callees:
 *     sub_180063E94 @ 0x180063E94 (sub_180063E94.c)
 */

_QWORD *__fastcall sub_18006479C(_QWORD *a1)
{
  sub_180063E94(a1, 10LL, 3LL);
  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  return a1;
}
