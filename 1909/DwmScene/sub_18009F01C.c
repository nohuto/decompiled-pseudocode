/*
 * XREFs of sub_18009F01C @ 0x18009F01C
 * Callers:
 *     sub_1800170E4 @ 0x1800170E4 (sub_1800170E4.c)
 * Callees:
 *     sub_1800397B8 @ 0x1800397B8 (sub_1800397B8.c)
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_180063F90 @ 0x180063F90 (sub_180063F90.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18009F01C(_QWORD *a1)
{
  sub_180063F90(a1, 4, 0xBu);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_1800397B8(a1 + 14);
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[16] = sub_180041D90();
  return a1;
}
