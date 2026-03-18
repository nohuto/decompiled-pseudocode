/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140063A40
 * Callers:
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140016548 (KiIntRedirectQueueRequestOnProcessor.c)
 *     PoIdle @ 0x14005D6B0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     PpmParkSteerInterrupts @ 0x140063570 (PpmParkSteerInterrupts.c)
 *     PoGetIdleTimes @ 0x1400A7300 (PoGetIdleTimes.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400D1D60 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushQueuedDpcs @ 0x1400DBE30 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x1400E1FE8 (ExpUpdateTimerConfiguration.c)
 *     KiCheckKeepAlive @ 0x1400ED9C8 (KiCheckKeepAlive.c)
 *     KeDisableTimer2 @ 0x1400FB134 (KeDisableTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400FD148 (KiSendClockInterruptToClockOwner.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131C84 (PoGetPerfStateAndParkingInfo.c)
 *     KeUpdateThreadTag @ 0x14013E7D0 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x140180070 (PpmIdleSelectStates.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14018A244 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x14018B310 (PpmInstallNewIdleStates.c)
 *     KiSynchronizeStibpPairing @ 0x140295694 (KiSynchronizeStibpPairing.c)
 *     KiStopProfileTarget @ 0x140296220 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x140297974 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14029A5AC (KeGetAffinitizedInterruptsInfo.c)
 *     PoExecuteIdleCheck @ 0x1402D3730 (PoExecuteIdleCheck.c)
 *     PpmRemoveIdleStates @ 0x1402D5700 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x1402D5BC8 (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x1402D5E90 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402D63E0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402D6610 (PpmUpdateProcessorIdleVeto.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402E14AC (PopDiagTraceIdleWakeSource.c)
 *     PpmCapturePerformanceDistribution @ 0x1402E2D8C (PpmCapturePerformanceDistribution.c)
 *     KiInitializeBootStructures @ 0x14056FE10 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x140571310 (KiInitializeKernel.c)
 *     KiUpdateProcessorCount @ 0x1405728EC (KiUpdateProcessorCount.c)
 *     KiInitializeDynamicProcessorDpc @ 0x14057B260 (KiInitializeDynamicProcessorDpc.c)
 *     PpmUpdateIdleStates @ 0x140729650 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x14074E4DC (PpmRegisterPerfStates.c)
 *     KeConfigureHeteroProcessors @ 0x140842AC8 (KeConfigureHeteroProcessors.c)
 *     KiIntSteerInit @ 0x1409C5AB0 (KiIntSteerInit.c)
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
