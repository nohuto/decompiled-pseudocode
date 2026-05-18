/*
 * XREFs of sub_180111CE8 @ 0x180111CE8
 * Callers:
 *     sub_180133552 @ 0x180133552 (sub_180133552.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 */

__int64 __fastcall sub_180111CE8(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  sub_1800676B8((__int64 *)(a2 + 16), 0);
  return j_j__o_free(a2);
}
