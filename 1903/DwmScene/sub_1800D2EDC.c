/*
 * XREFs of sub_1800D2EDC @ 0x1800D2EDC
 * Callers:
 *     sub_1800F4718 @ 0x1800F4718 (sub_1800F4718.c)
 * Callees:
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800D2EDC(_QWORD *a1)
{
  sub_180063E80(a1, 6, 7u);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[14] = sub_180041C80();
  return a1;
}
