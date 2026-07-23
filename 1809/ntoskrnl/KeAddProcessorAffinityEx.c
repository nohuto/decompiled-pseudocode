/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140063A30
 * Callers:
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140016548 (KiIntRedirectQueueRequestOnProcessor.c)
 *     PoIdle @ 0x14005D6B0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     PpmParkSteerInterrupts @ 0x140063560 (PpmParkSteerInterrupts.c)
 *     PoGetIdleTimes @ 0x1400A7260 (PoGetIdleTimes.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400D1E00 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushQueuedDpcs @ 0x1400DBED0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x1400E2088 (ExpUpdateTimerConfiguration.c)
 *     KiCheckKeepAlive @ 0x1400EDA68 (KiCheckKeepAlive.c)
 *     KeDisableTimer2 @ 0x1400FB1D4 (KeDisableTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400FD1E8 (KiSendClockInterruptToClockOwner.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131D74 (PoGetPerfStateAndParkingInfo.c)
 *     KeUpdateThreadTag @ 0x14013E8F0 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x1401801D0 (PpmIdleSelectStates.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14018A3A4 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x14018B470 (PpmInstallNewIdleStates.c)
 *     KiSynchronizeStibpPairing @ 0x140295984 (KiSynchronizeStibpPairing.c)
 *     KiStopProfileTarget @ 0x140296510 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x140297C64 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14029A89C (KeGetAffinitizedInterruptsInfo.c)
 *     PoExecuteIdleCheck @ 0x1402D3A20 (PoExecuteIdleCheck.c)
 *     PpmRemoveIdleStates @ 0x1402D59F0 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x1402D5EB8 (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x1402D6180 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402D66D0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402D6900 (PpmUpdateProcessorIdleVeto.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402E179C (PopDiagTraceIdleWakeSource.c)
 *     PpmCapturePerformanceDistribution @ 0x1402E307C (PpmCapturePerformanceDistribution.c)
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 *     KiUpdateProcessorCount @ 0x1405738EC (KiUpdateProcessorCount.c)
 *     KiInitializeDynamicProcessorDpc @ 0x14057C260 (KiInitializeDynamicProcessorDpc.c)
 *     PpmUpdateIdleStates @ 0x14072A820 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     KeConfigureHeteroProcessors @ 0x140843D08 (KeConfigureHeteroProcessors.c)
 *     KiIntSteerInit @ 0x1409C6AB0 (KiIntSteerInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(_WORD *a1, int a2)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2] & 0x3F;
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6;
  if ( (unsigned __int16)*a1 <= (unsigned int)v4 )
    *a1 = v4 + 1;
  v5 = (unsigned int)v4;
  v6 = *(_QWORD *)&a1[4 * v4 + 4];
  result = v3;
  _bittestandset64(&v6, v3);
  *(_QWORD *)&a1[4 * v5 + 4] = v6;
  return result;
}
