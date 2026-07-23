/*
 * XREFs of ViDeadlockDetectionLock @ 0x14093E1AC
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14030B46C (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14030B5CC (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x14093C514 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x14093CBEC (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x14093CC58 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x14093D0E0 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14093D260 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x14093E15C (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x14093E214 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14093EE44 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
