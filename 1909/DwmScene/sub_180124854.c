/*
 * XREFs of sub_180124854 @ 0x180124854
 * Callers:
 *     sub_1801246C8 @ 0x1801246C8 (sub_1801246C8.c)
 * Callees:
 *     sub_180031E4C @ 0x180031E4C (sub_180031E4C.c)
 *     sub_1800AB9F8 @ 0x1800AB9F8 (sub_1800AB9F8.c)
 */

__int64 __fastcall sub_180124854(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  char *v5; // rsi

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v5 = (char *)sub_180031E4C(a1, a2);
  sub_1800AB9F8(*(_QWORD **)a1, *(_QWORD **)(a1 + 8), v5);
  return sub_1800B2A34(a1, (__int64)v5, v4, a2);
}
