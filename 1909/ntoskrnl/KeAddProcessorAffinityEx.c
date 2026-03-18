/*
 * XREFs of KeAddProcessorAffinityEx @ 0x14009E060
 * Callers:
 *     PoGetIdleTimes @ 0x140004998 (PoGetIdleTimes.c)
 *     KeQueryTotalCycleTimeThread @ 0x140012DE0 (KeQueryTotalCycleTimeThread.c)
 *     PoIdle @ 0x140031410 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140031920 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1400330E0 (PpmIdlePrepare.c)
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     KiCheckKeepAlive @ 0x14009AB50 (KiCheckKeepAlive.c)
 *     PpmParkSteerInterrupts @ 0x14009DA20 (PpmParkSteerInterrupts.c)
 *     KeFlushQueuedDpcs @ 0x1400FB5E0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x1400FBBEC (ExpUpdateTimerConfiguration.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1400FFE34 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KiSendClockInterruptToClockOwner @ 0x140111DF8 (KiSendClockInterruptToClockOwner.c)
 *     KeDisableTimer2 @ 0x1401137EC (KeDisableTimer2.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140132310 (PoGetPerfStateAndParkingInfo.c)
 *     KeUpdateThreadTag @ 0x140142DA0 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x14018A5C0 (PpmIdleSelectStates.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140194D64 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x1401952E0 (PpmInstallNewIdleStates.c)
 *     KiSynchronizeStibpPairing @ 0x1402ABDAC (KiSynchronizeStibpPairing.c)
 *     KiStopProfileTarget @ 0x1402AC860 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x1402AE674 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402B170C (KeGetAffinitizedInterruptsInfo.c)
 *     PoExecuteIdleCheck @ 0x1402EDC2C (PoExecuteIdleCheck.c)
 *     PpmRemoveIdleStates @ 0x1402EFC10 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x1402F00FC (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x1402F03C4 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402F0900 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402F0B40 (PpmUpdateProcessorIdleVeto.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402FE15C (PopDiagTraceIdleWakeSource.c)
 *     PpmCapturePerformanceDistribution @ 0x1402FF644 (PpmCapturePerformanceDistribution.c)
 *     KiUpdateProcessorCount @ 0x14059F538 (KiUpdateProcessorCount.c)
 *     KiInitializeBootStructures @ 0x14059FFA0 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1405AB130 (KiInitializeDynamicProcessorDpc.c)
 *     PpmUpdateIdleStates @ 0x14075EFB0 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     KeConfigureHeteroProcessors @ 0x14087DBE8 (KeConfigureHeteroProcessors.c)
 *     KiIntSteerInit @ 0x1409FE860 (KiIntSteerInit.c)
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
