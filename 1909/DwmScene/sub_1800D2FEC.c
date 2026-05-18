/*
 * XREFs of sub_1800D2FEC @ 0x1800D2FEC
 * Callers:
 *     sub_1800F4828 @ 0x1800F4828 (sub_1800F4828.c)
 * Callees:
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_180063F90 @ 0x180063F90 (sub_180063F90.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800D2FEC(_QWORD *a1)
{
  sub_180063F90(a1, 6, 7u);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[14] = sub_180041D90();
  return a1;
}
