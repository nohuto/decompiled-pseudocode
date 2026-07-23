/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140062160
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140061FF0 (KiGetNextTimerExpirationDueTime.c)
 *     PpmParkSteerInterrupts @ 0x140063560 (PpmParkSteerInterrupts.c)
 *     KiIpiSendRequest @ 0x1400ED3F0 (KiIpiSendRequest.c)
 *     KiOutSwapProcesses @ 0x14010B4D0 (KiOutSwapProcesses.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14018A3A4 (PpmHeteroUpdateHgsConfiguration.c)
 *     HvlParkedVirtualProcessors @ 0x140276E5C (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x140296510 (KiStopProfileTarget.c)
 *     PoExecuteIdleCheck @ 0x1402D3A20 (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x1402D3B90 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x1402D6180 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1406BAC04 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140706788 (PspSetProcessAffinityUpdateMode.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x140750304 (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x14075050C (PpmParkParkingAvailable.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1407510BC (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BC920 (EtwpLoadMicroarchitecturalProfileGroup.c)
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
