/*
 * XREFs of sub_1800CFB60 @ 0x1800CFB60
 * Callers:
 *     sub_180039758 @ 0x180039758 (sub_180039758.c)
 *     sub_1800F9B08 @ 0x1800F9B08 (sub_1800F9B08.c)
 * Callees:
 *     sub_180063D84 @ 0x180063D84 (sub_180063D84.c)
 */

_QWORD *__fastcall sub_1800CFB60(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180063D84(a1, 7LL, 3LL);
  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
