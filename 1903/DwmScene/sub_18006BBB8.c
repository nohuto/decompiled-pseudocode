/*
 * XREFs of sub_18006BBB8 @ 0x18006BBB8
 * Callers:
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 * Callees:
 *     sub_18006DDDC @ 0x18006DDDC (sub_18006DDDC.c)
 *     sub_18011E078 @ 0x18011E078 (sub_18011E078.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006BBB8(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::RenderDevice::QueryPool::`vftable';
  sub_18011E078(a1 + 1);
  a1[2] = a2;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[3] = sub_18006DDDC(a1 + 3);
  return a1;
}
