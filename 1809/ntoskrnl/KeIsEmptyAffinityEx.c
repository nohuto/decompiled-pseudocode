/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140062160
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140061FF0 (KiGetNextTimerExpirationDueTime.c)
 *     PpmParkSteerInterrupts @ 0x140063570 (PpmParkSteerInterrupts.c)
 *     KiIpiSendRequest @ 0x1400ED370 (KiIpiSendRequest.c)
 *     KiOutSwapProcesses @ 0x14010B450 (KiOutSwapProcesses.c)
 *     KeRemoveQueueDpcEx @ 0x140132A00 (KeRemoveQueueDpcEx.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14018A264 (PpmHeteroUpdateHgsConfiguration.c)
 *     HvlParkedVirtualProcessors @ 0x140276C6C (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x140291190 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x140296320 (KiStopProfileTarget.c)
 *     PoExecuteIdleCheck @ 0x1402D3830 (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x1402D39A0 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x1402D5F90 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1406B9964 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407054E8 (PspSetProcessAffinityUpdateMode.c)
 *     PpmRegisterPerfStates @ 0x14074E4BC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE38 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x14074F114 (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x14074F31C (PpmParkParkingAvailable.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14074FECC (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x140833780 (PnpReplacePartitionUnit.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BB660 (EtwpLoadMicroarchitecturalProfileGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEmptyAffinityEx(_WORD *a1)
{
  unsigned __int16 v1; // ax

  v1 = 0;
  if ( !*a1 )
    return 1LL;
  while ( !*(_QWORD *)&a1[4 * v1 + 4] )
  {
    if ( ++v1 >= *a1 )
      return 1LL;
  }
  return 0LL;
}
