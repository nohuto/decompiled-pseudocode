/*
 * XREFs of TtmpPowerRequestEntryComparator @ 0x140880EFC
 * Callers:
 *     TtmpFindPowerRequestEntryById @ 0x14088097C (TtmpFindPowerRequestEntryById.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TtmpPowerRequestEntryComparator(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 16) == a2;
}
