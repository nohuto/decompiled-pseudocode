/*
 * XREFs of sub_1800CBE88 @ 0x1800CBE88
 * Callers:
 *     sub_18001FC9C @ 0x18001FC9C (sub_18001FC9C.c)
 * Callees:
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800CBE88(_QWORD *a1)
{
  sub_180063E80(a1, 9, 4u);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderState::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[16] = sub_180041C80();
  return a1;
}
