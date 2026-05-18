/*
 * XREFs of sub_1800CF3E8 @ 0x1800CF3E8
 * Callers:
 *     sub_18001FED4 @ 0x18001FED4 (sub_18001FED4.c)
 *     sub_1800B5C34 @ 0x1800B5C34 (sub_1800B5C34.c)
 * Callees:
 *     sub_1800CE948 @ 0x1800CE948 (sub_1800CE948.c)
 */

_QWORD *__fastcall sub_1800CF3E8(_QWORD *a1)
{
  sub_1800CE948(a1, 11LL, 5LL);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return a1;
}
