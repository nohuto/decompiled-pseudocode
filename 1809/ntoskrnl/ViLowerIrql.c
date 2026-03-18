/*
 * XREFs of ViLowerIrql @ 0x14030B40C
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
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
