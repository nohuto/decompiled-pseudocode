/*
 * XREFs of TtmpPowerRequestEntryComparator @ 0x1408BE564
 * Callers:
 *     TtmpFindPowerRequestEntryById @ 0x1408BE064 (TtmpFindPowerRequestEntryById.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TtmpPowerRequestEntryComparator(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 16) == a2;
}
