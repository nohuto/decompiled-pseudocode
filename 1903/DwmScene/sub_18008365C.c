/*
 * XREFs of sub_18008365C @ 0x18008365C
 * Callers:
 *     sub_18009A9F0 @ 0x18009A9F0 (sub_18009A9F0.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 */

_QWORD *__fastcall sub_18008365C(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18000F3F4(a2, a1 + 400);
  return a2;
}
