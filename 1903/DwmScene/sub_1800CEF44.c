/*
 * XREFs of sub_1800CEF44 @ 0x1800CEF44
 * Callers:
 *     sub_18001F914 @ 0x18001F914 (sub_18001F914.c)
 *     sub_1800B5A2C @ 0x1800B5A2C (sub_1800B5A2C.c)
 * Callees:
 *     sub_1800CE948 @ 0x1800CE948 (sub_1800CE948.c)
 */

_QWORD *__fastcall sub_1800CEF44(_QWORD *a1)
{
  sub_1800CE948(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::DeviceIndexBuffer::`vftable';
  return a1;
}
