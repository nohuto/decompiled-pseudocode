/*
 * XREFs of sub_1800CFC70 @ 0x1800CFC70
 * Callers:
 *     sub_180039868 @ 0x180039868 (sub_180039868.c)
 *     sub_1800F9C18 @ 0x1800F9C18 (sub_1800F9C18.c)
 * Callees:
 *     sub_180063E94 @ 0x180063E94 (sub_180063E94.c)
 */

_QWORD *__fastcall sub_1800CFC70(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180063E94(a1, 7LL, 3LL);
  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
