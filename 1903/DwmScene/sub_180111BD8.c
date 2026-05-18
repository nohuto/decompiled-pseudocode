/*
 * XREFs of sub_180111BD8 @ 0x180111BD8
 * Callers:
 *     sub_180133442 @ 0x180133442 (sub_180133442.c)
 * Callees:
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 */

__int64 __fastcall sub_180111BD8(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  sub_1800675A8((__int64 *)(a2 + 16), 0);
  return j_j__o_free(a2);
}
