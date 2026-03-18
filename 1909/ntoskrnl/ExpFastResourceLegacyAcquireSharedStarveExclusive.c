/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140339F74
 * Callers:
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400B8A10 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14016B290 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14016C1B8 (ExpAllocateOwnerEntryForLegacyShim.c)
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
