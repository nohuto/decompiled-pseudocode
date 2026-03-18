/*
 * XREFs of HvViewMapContainsLockedPages @ 0x1407336D0
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14009902C (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_BYTE *)(a1 + 32) & 4) != 0;
}
