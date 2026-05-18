/*
 * XREFs of sub_1800D2330 @ 0x1800D2330
 * Callers:
 *     sub_1800CF080 @ 0x1800CF080 (sub_1800CF080.c)
 *     sub_1800CF524 @ 0x1800CF524 (sub_1800CF524.c)
 * Callees:
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_180063F90 @ 0x180063F90 (sub_180063F90.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800D2330(_QWORD *a1, int a2, unsigned int a3)
{
  sub_180063F90(a1, a2, a3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[15] = sub_180041D90();
  a1[17] = 0LL;
  a1[18] = 0LL;
  return a1;
}
