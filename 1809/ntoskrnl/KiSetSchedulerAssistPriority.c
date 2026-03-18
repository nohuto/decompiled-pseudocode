/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x14029952C
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5210 (KiDirectSwitchThread.c)
 *     KeSetPriorityBoost @ 0x1400CEEC0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF620 (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1400D0000 (KiQuantumEnd.c)
 *     KiUpdateThreadPriority @ 0x1400D0D20 (KiUpdateThreadPriority.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2C80 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D308C (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400D3260 (KiTransitionSchedulingGroupGeneration.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400F4810 (KeUpdateThreadSchedulingProperties.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114D84 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiCheckForEffectivePriorityChange @ 0x140116874 (KiCheckForEffectivePriorityChange.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4B7C (KiUpdatePriorityMatrixThreadState.c)
 *     KeTransitionProcessorParkState @ 0x14029CC9C (KeTransitionProcessorParkState.c)
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
