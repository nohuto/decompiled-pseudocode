/*
 * XREFs of sub_1800CEF70 @ 0x1800CEF70
 * Callers:
 *     sub_180094EFC @ 0x180094EFC (sub_180094EFC.c)
 * Callees:
 *     sub_1800D2220 @ 0x1800D2220 (sub_1800D2220.c)
 */

_QWORD *__fastcall sub_1800CEF70(_QWORD *a1)
{
  sub_1800D2220(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::IndexBuffer::`vftable';
  return a1;
}
