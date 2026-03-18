/*
 * XREFs of KiIsThreadRankNonZero @ 0x140014B90
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1400100B0 (KiUpdateThreadPriority.c)
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140011F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThread @ 0x1400132D4 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1400138D0 (KiSelectNextThread.c)
 *     KiRemoveBoostThread @ 0x140014690 (KiRemoveBoostThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400152E0 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140015500 (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140015770 (KiTransitionSchedulingGroupGeneration.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KiSwapThread @ 0x140040B40 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041830 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BC80 (KiDirectSwitchThread.c)
 *     KiSchedulerApc @ 0x140081AF0 (KiSchedulerApc.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x1400DB908 (KeQueryEffectiveBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E9970 (KiApplyForegroundBoostThread.c)
 *     KeYieldExecution @ 0x140108D60 (KeYieldExecution.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1401145A8 (KeUpdateThreadSchedulingProperties.c)
 *     KiCheckForEffectivePriorityChange @ 0x14011561C (KiCheckForEffectivePriorityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F1E0 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeQueryEffectivePriorityThread @ 0x140181C30 (KeQueryEffectivePriorityThread.c)
 *     KeTransitionProcessorParkState @ 0x1402B54CC (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x14059F060 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x140014C20 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
