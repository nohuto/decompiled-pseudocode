/*
 * XREFs of sub_1800D2220 @ 0x1800D2220
 * Callers:
 *     sub_1800CEF70 @ 0x1800CEF70 (sub_1800CEF70.c)
 *     sub_1800CF414 @ 0x1800CF414 (sub_1800CF414.c)
 * Callees:
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800D2220(_QWORD *a1, int a2, unsigned int a3)
{
  sub_180063E80(a1, a2, a3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[15] = sub_180041C80();
  a1[17] = 0LL;
  a1[18] = 0LL;
  return a1;
}
