/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x1402B0620
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
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400F9424 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeYieldExecution @ 0x140109BD0 (KeYieldExecution.c)
 *     KeTransitionProcessorParkState @ 0x1402B576C (KeTransitionProcessorParkState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSetSchedulerAssistPriority(volatile signed __int32 *a1, int a2, char a3)
{
  __int64 result; // rax
  char v5; // cl

  LODWORD(result) = *a1;
  if ( !a3 )
    LODWORD(result) = (unsigned int)result >> 8;
  result = (unsigned __int8)result;
  v5 = a3 == 0 ? 8 : 0;
  if ( a2 != (unsigned __int8)result )
  {
    if ( a2 <= (unsigned __int8)result )
      return (unsigned int)_InterlockedExchangeAdd(a1, -(((unsigned __int8)result - a2) << v5));
    else
      _InterlockedExchangeAdd(a1, (a2 - (unsigned __int8)result) << v5);
  }
  return result;
}
