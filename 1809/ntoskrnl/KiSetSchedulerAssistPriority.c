/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x14029962C
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 *     KiDeferredReadyThread @ 0x1400C3390 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5230 (KiDirectSwitchThread.c)
 *     KeSetPriorityBoost @ 0x1400CEEE0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF640 (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1400D0020 (KiQuantumEnd.c)
 *     KiUpdateThreadPriority @ 0x1400D0D40 (KiUpdateThreadPriority.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2CA0 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D30AC (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400D3280 (KiTransitionSchedulingGroupGeneration.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400F4830 (KeUpdateThreadSchedulingProperties.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114DA4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiCheckForEffectivePriorityChange @ 0x140116894 (KiCheckForEffectivePriorityChange.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4B9C (KiUpdatePriorityMatrixThreadState.c)
 *     KeTransitionProcessorParkState @ 0x14029CD9C (KeTransitionProcessorParkState.c)
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
