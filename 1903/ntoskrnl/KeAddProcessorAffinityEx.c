/*
 * XREFs of KeAddProcessorAffinityEx @ 0x1400BE1E0
 * Callers:
 *     PoGetIdleTimes @ 0x140004908 (PoGetIdleTimes.c)
 *     KeQueryTotalCycleTimeThread @ 0x140012BB0 (KeQueryTotalCycleTimeThread.c)
 *     PoIdle @ 0x140031020 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x140032CF0 (PpmIdlePrepare.c)
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     KiCheckKeepAlive @ 0x1400BACE0 (KiCheckKeepAlive.c)
 *     PpmParkSteerInterrupts @ 0x1400BDBA0 (PpmParkSteerInterrupts.c)
 *     KeFlushQueuedDpcs @ 0x1400F7B40 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x1400F814C (ExpUpdateTimerConfiguration.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1400FDCA4 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KiSendClockInterruptToClockOwner @ 0x140112808 (KiSendClockInterruptToClockOwner.c)
 *     KeDisableTimer2 @ 0x140113F5C (KeDisableTimer2.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131B00 (PoGetPerfStateAndParkingInfo.c)
 *     KeUpdateThreadTag @ 0x140142860 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x140189C30 (PpmIdleSelectStates.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140194584 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x140194B00 (PpmInstallNewIdleStates.c)
 *     KiSynchronizeStibpPairing @ 0x1402AC04C (KiSynchronizeStibpPairing.c)
 *     KiStopProfileTarget @ 0x1402ACB00 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x1402AE914 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402B19AC (KeGetAffinitizedInterruptsInfo.c)
 *     PoExecuteIdleCheck @ 0x1402EDECC (PoExecuteIdleCheck.c)
 *     PpmRemoveIdleStates @ 0x1402EFEB0 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x1402F039C (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x1402F0664 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402F0BA0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402F0DE0 (PpmUpdateProcessorIdleVeto.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402FE6AC (PopDiagTraceIdleWakeSource.c)
 *     PpmCapturePerformanceDistribution @ 0x1402FFB94 (PpmCapturePerformanceDistribution.c)
 *     KiUpdateProcessorCount @ 0x14059F558 (KiUpdateProcessorCount.c)
 *     KiInitializeBootStructures @ 0x14059FFC0 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x1405A1240 (KiInitializeKernel.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1405AB150 (KiInitializeDynamicProcessorDpc.c)
 *     PpmUpdateIdleStates @ 0x14075A720 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     KeConfigureHeteroProcessors @ 0x14087E4E8 (KeConfigureHeteroProcessors.c)
 *     KiIntSteerInit @ 0x1409FE344 (KiIntSteerInit.c)
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
