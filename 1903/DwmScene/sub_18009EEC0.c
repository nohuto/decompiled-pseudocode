/*
 * XREFs of sub_18009EEC0 @ 0x18009EEC0
 * Callers:
 *     sub_180041CCC @ 0x180041CCC (sub_180041CCC.c)
 *     sub_1800F9DA8 @ 0x1800F9DA8 (sub_1800F9DA8.c)
 * Callees:
 *     sub_1800396A8 @ 0x1800396A8 (sub_1800396A8.c)
 *     sub_180063DA8 @ 0x180063DA8 (sub_180063DA8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18009EEC0(_QWORD *a1)
{
  sub_180063DA8((__int64)a1);
  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  sub_1800396A8(a1 + 12);
  a1[14] = 0LL;
  a1[15] = 0LL;
  return a1;
}
