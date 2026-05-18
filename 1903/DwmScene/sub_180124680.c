/*
 * XREFs of sub_180124680 @ 0x180124680
 * Callers:
 *     sub_18011F458 @ 0x18011F458 (sub_18011F458.c)
 *     sub_180120040 @ 0x180120040 (sub_180120040.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 */

_QWORD *__fastcall sub_180124680(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001110C(a2, a1 + 8);
  return a2;
}
