/*
 * XREFs of ViRaiseIrqlToDpcLevel @ 0x140329220
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140328F38 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140329094 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x14097B014 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x14097B080 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x14097B508 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14097B688 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x14097C5A8 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x14097C660 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14097D288 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     <none>
 */

__int64 ViRaiseIrqlToDpcLevel()
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // dl

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
  }
  return result;
}
