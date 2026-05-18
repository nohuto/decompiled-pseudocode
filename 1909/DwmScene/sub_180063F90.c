/*
 * XREFs of sub_180063F90 @ 0x180063F90
 * Callers:
 *     sub_1800647D8 @ 0x1800647D8 (sub_1800647D8.c)
 *     sub_18008F8D8 @ 0x18008F8D8 (sub_18008F8D8.c)
 *     sub_180095218 @ 0x180095218 (sub_180095218.c)
 *     sub_18009D228 @ 0x18009D228 (sub_18009D228.c)
 *     sub_18009F01C @ 0x18009F01C (sub_18009F01C.c)
 *     sub_1800CBF98 @ 0x1800CBF98 (sub_1800CBF98.c)
 *     sub_1800CDB88 @ 0x1800CDB88 (sub_1800CDB88.c)
 *     sub_1800CFAE8 @ 0x1800CFAE8 (sub_1800CFAE8.c)
 *     sub_1800D166C @ 0x1800D166C (sub_1800D166C.c)
 *     sub_1800D2330 @ 0x1800D2330 (sub_1800D2330.c)
 *     sub_1800D2FEC @ 0x1800D2FEC (sub_1800D2FEC.c)
 * Callees:
 *     sub_18002565C @ 0x18002565C (sub_18002565C.c)
 *     sub_180063EE8 @ 0x180063EE8 (sub_180063EE8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180063F90(_QWORD *a1, int a2, unsigned int a3)
{
  sub_180063EE8((__int64)a1, a2, a3);
  *a1 = &Spectre::Engine::SharedResource::`vftable';
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[10] = sub_18002565C();
  return a1;
}
