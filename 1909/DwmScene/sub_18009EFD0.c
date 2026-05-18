/*
 * XREFs of sub_18009EFD0 @ 0x18009EFD0
 * Callers:
 *     sub_180041DDC @ 0x180041DDC (sub_180041DDC.c)
 *     sub_1800F9EB8 @ 0x1800F9EB8 (sub_1800F9EB8.c)
 * Callees:
 *     sub_1800397B8 @ 0x1800397B8 (sub_1800397B8.c)
 *     sub_180063EB8 @ 0x180063EB8 (sub_180063EB8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18009EFD0(_QWORD *a1)
{
  sub_180063EB8((__int64)a1);
  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  sub_1800397B8(a1 + 12);
  a1[14] = 0LL;
  a1[15] = 0LL;
  return a1;
}
