/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive @ 0x140164AB4
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140050530 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14031BA50 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x1401652B0 (ExAcquireFastResourceExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166344 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireExclusive(ULONG_PTR BugCheckParameter2)
{
  void *OwnerEntryForLegacyShim; // rsi
  char v3; // bl

  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(BugCheckParameter2);
  v3 = ExAcquireFastResourceExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v3 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v3;
}
