/*
 * XREFs of sub_18008376C @ 0x18008376C
 * Callers:
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 */

_QWORD *__fastcall sub_18008376C(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18000F444(a2, a1 + 400);
  return a2;
}
