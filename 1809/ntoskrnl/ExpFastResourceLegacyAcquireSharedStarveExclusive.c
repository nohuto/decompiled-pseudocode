/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14031B788
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1400AE080 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x1400AE2B0 (CcPinFileData.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140165910 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166344 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
