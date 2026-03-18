/*
 * XREFs of ViDeadlockDetectionTryConvertSharedToExclusive @ 0x140328F08
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140328F38 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140329094 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockBeforeCallDriver @ 0x14097B080 (VfDeadlockBeforeCallDriver.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x14015CA60 (ExTryConvertSharedSpinLockExclusive.c)
 */

LOGICAL ViDeadlockDetectionTryConvertSharedToExclusive()
{
  LOGICAL result; // eax

  result = ExTryConvertSharedSpinLockExclusive(&ViDeadlockDatabaseLock);
  if ( result )
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  return result;
}
