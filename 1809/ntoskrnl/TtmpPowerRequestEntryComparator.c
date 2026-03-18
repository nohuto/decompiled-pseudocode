/*
 * XREFs of TtmpPowerRequestEntryComparator @ 0x140880F1C
 * Callers:
 *     TtmpFindPowerRequestEntryById @ 0x14088099C (TtmpFindPowerRequestEntryById.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TtmpPowerRequestEntryComparator(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 16) == a2;
}
