/*
 * XREFs of sub_1800CBF98 @ 0x1800CBF98
 * Callers:
 *     sub_18001FDAC @ 0x18001FDAC (sub_18001FDAC.c)
 * Callees:
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_180063F90 @ 0x180063F90 (sub_180063F90.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800CBF98(_QWORD *a1)
{
  sub_180063F90(a1, 9, 4u);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderState::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[16] = sub_180041D90();
  return a1;
}
