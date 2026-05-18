/*
 * XREFs of sub_1800CF4F8 @ 0x1800CF4F8
 * Callers:
 *     sub_18001FFE4 @ 0x18001FFE4 (sub_18001FFE4.c)
 *     sub_1800B5D44 @ 0x1800B5D44 (sub_1800B5D44.c)
 * Callees:
 *     sub_1800CEA58 @ 0x1800CEA58 (sub_1800CEA58.c)
 */

_QWORD *__fastcall sub_1800CF4F8(_QWORD *a1)
{
  sub_1800CEA58(a1, 11LL, 5LL);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return a1;
}
