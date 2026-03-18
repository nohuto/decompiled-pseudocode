/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14033A514
 * Callers:
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400D8B90 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14016ABA0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14016BAC8 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireSharedStarveExclusive(ULONG_PTR BugCheckParameter2, char a2)
{
  _BYTE *OwnerEntryForLegacyShim; // rsi
  char v5; // bl

  OwnerEntryForLegacyShim = ExpAllocateOwnerEntryForLegacyShim();
  v5 = ExAcquireFastResourceSharedStarveExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim, a2);
  if ( !v5 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v5;
}
