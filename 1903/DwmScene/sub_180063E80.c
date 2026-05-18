/*
 * XREFs of sub_180063E80 @ 0x180063E80
 * Callers:
 *     sub_1800646C8 @ 0x1800646C8 (sub_1800646C8.c)
 *     sub_18008F7C8 @ 0x18008F7C8 (sub_18008F7C8.c)
 *     sub_180095108 @ 0x180095108 (sub_180095108.c)
 *     sub_18009D118 @ 0x18009D118 (sub_18009D118.c)
 *     sub_18009EF0C @ 0x18009EF0C (sub_18009EF0C.c)
 *     sub_1800CBE88 @ 0x1800CBE88 (sub_1800CBE88.c)
 *     sub_1800CDA78 @ 0x1800CDA78 (sub_1800CDA78.c)
 *     sub_1800CF9D8 @ 0x1800CF9D8 (sub_1800CF9D8.c)
 *     sub_1800D155C @ 0x1800D155C (sub_1800D155C.c)
 *     sub_1800D2220 @ 0x1800D2220 (sub_1800D2220.c)
 *     sub_1800D2EDC @ 0x1800D2EDC (sub_1800D2EDC.c)
 * Callees:
 *     sub_18002554C @ 0x18002554C (sub_18002554C.c)
 *     sub_180063DD8 @ 0x180063DD8 (sub_180063DD8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180063E80(_QWORD *a1, int a2, unsigned int a3)
{
  sub_180063DD8((__int64)a1, a2, a3);
  *a1 = &Spectre::Engine::SharedResource::`vftable';
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[10] = sub_18002554C();
  return a1;
}
