/*
 * XREFs of TtmpPowerRequestEntryComparator @ 0x14088215C
 * Callers:
 *     TtmpFindPowerRequestEntryById @ 0x140881BDC (TtmpFindPowerRequestEntryById.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TtmpPowerRequestEntryComparator(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 16) == a2;
}
