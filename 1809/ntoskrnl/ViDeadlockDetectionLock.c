/*
 * XREFs of ViDeadlockDetectionLock @ 0x14093D1AC
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14030B17C (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14030B2DC (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x14093B514 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x14093BBEC (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x14093BC58 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x14093C0E0 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14093C260 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x14093D15C (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x14093D214 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14093DE44 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D150 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall ViDeadlockDetectionLock(int a1)
{
  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&ViDeadlockDatabaseLock);
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(&ViDeadlockDatabaseLock);
  }
}
