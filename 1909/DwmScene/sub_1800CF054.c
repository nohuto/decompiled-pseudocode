/*
 * XREFs of sub_1800CF054 @ 0x1800CF054
 * Callers:
 *     sub_18001FA24 @ 0x18001FA24 (sub_18001FA24.c)
 *     sub_1800B5B3C @ 0x1800B5B3C (sub_1800B5B3C.c)
 * Callees:
 *     sub_1800CEA58 @ 0x1800CEA58 (sub_1800CEA58.c)
 */

_QWORD *__fastcall sub_1800CF054(_QWORD *a1)
{
  sub_1800CEA58(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::DeviceIndexBuffer::`vftable';
  return a1;
}
