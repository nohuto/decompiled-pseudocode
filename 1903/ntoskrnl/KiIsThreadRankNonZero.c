/*
 * XREFs of KiIsThreadRankNonZero @ 0x140015570
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x14000FB30 (KiUpdateThreadPriority.c)
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140011CF4 (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThread @ 0x1400130A4 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1400136A0 (KiSelectNextThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140014610 (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140014880 (KiTransitionSchedulingGroupGeneration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400151B0 (KiDeferGroupSchedulingPreemption.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041AF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiRemoveBoostThread @ 0x140043940 (KiRemoveBoostThread.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BA10 (KiDirectSwitchThread.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
 *     KiApplyForegroundBoostThread @ 0x1400E49D0 (KiApplyForegroundBoostThread.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400E89A4 (KiCheckForEffectivePriorityChange.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400E9720 (KeUpdateThreadSchedulingProperties.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x1400F33C8 (KeQueryEffectiveBasePriorityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400F9424 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeYieldExecution @ 0x140109BD0 (KeYieldExecution.c)
 *     KeQueryEffectivePriorityThread @ 0x140181540 (KeQueryEffectivePriorityThread.c)
 *     KeTransitionProcessorParkState @ 0x1402B576C (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x14059F080 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x140015600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall KiIsThreadRankNonZero(__int64 a1, struct _KPRCB *a2)
{
  int ThreadEffectiveRankNonZero; // ebx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // rdx
  struct _KPRCB *v8; // rcx

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return 0;
  ThreadEffectiveRankNonZero = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    v6 += CurrentPrcb->ScbOffset;
    if ( v6 )
    {
      if ( a2 )
      {
        ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a1, v6, 0, 0, 0LL);
      }
      else
      {
        do
        {
          ThreadEffectiveRankNonZero = (*(unsigned __int8 *)(v6 + 112) >> 3) & 1;
          if ( ThreadEffectiveRankNonZero )
            break;
          v6 = *(_QWORD *)(v6 + 408);
        }
        while ( v6 );
      }
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v8 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v8, v6);
    }
    __writecr8(CurrentIrql);
  }
  return ThreadEffectiveRankNonZero != 0;
}
