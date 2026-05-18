/*
 * XREFs of sub_18009EF0C @ 0x18009EF0C
 * Callers:
 *     sub_180017074 @ 0x180017074 (sub_180017074.c)
 * Callees:
 *     sub_1800396A8 @ 0x1800396A8 (sub_1800396A8.c)
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18009EF0C(_QWORD *a1)
{
  sub_180063E80(a1, 4, 0xBu);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_1800396A8(a1 + 14);
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[16] = sub_180041C80();
  return a1;
}
