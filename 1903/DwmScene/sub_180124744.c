/*
 * XREFs of sub_180124744 @ 0x180124744
 * Callers:
 *     sub_1801245B8 @ 0x1801245B8 (sub_1801245B8.c)
 * Callees:
 *     sub_180031D3C @ 0x180031D3C (sub_180031D3C.c)
 *     sub_1800AB8E8 @ 0x1800AB8E8 (sub_1800AB8E8.c)
 */

__int64 __fastcall sub_180124744(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  char *v5; // rsi

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v5 = (char *)sub_180031D3C(a1, a2);
  sub_1800AB8E8(*(_QWORD **)a1, *(_QWORD **)(a1 + 8), v5);
  return sub_1800B2924(a1, (__int64)v5, v4, a2);
}
