/*
 * XREFs of sub_18006BCC8 @ 0x18006BCC8
 * Callers:
 *     sub_18006BD30 @ 0x18006BD30 (sub_18006BD30.c)
 * Callees:
 *     sub_18006DEEC @ 0x18006DEEC (sub_18006DEEC.c)
 *     sub_18011E188 @ 0x18011E188 (sub_18011E188.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006BCC8(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::RenderDevice::QueryPool::`vftable';
  sub_18011E188(a1 + 1);
  a1[2] = a2;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[3] = sub_18006DEEC(a1 + 3);
  return a1;
}
