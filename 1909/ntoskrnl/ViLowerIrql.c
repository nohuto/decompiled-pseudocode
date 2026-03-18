/*
 * XREFs of ViLowerIrql @ 0x140328C14
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140328988 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140328AE4 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x14097B014 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x14097B080 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x14097B508 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14097B688 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x14097C5A8 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x14097C660 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14097D288 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ViLowerIrql(unsigned __int8 a1)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  result = KeGetCurrentIrql();
  if ( a1 < (unsigned __int8)result )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a1 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = a1;
    __writecr8(a1);
  }
  return result;
}
