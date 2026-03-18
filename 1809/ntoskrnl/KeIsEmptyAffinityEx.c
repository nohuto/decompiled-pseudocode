/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140062160
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140061FF0 (KiGetNextTimerExpirationDueTime.c)
 *     PpmParkSteerInterrupts @ 0x140063570 (PpmParkSteerInterrupts.c)
 *     KiIpiSendRequest @ 0x1400ED350 (KiIpiSendRequest.c)
 *     KiOutSwapProcesses @ 0x14010B430 (KiOutSwapProcesses.c)
 *     KeRemoveQueueDpcEx @ 0x1401329E0 (KeRemoveQueueDpcEx.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14018A244 (PpmHeteroUpdateHgsConfiguration.c)
 *     HvlParkedVirtualProcessors @ 0x140276B6C (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x140296220 (KiStopProfileTarget.c)
 *     PoExecuteIdleCheck @ 0x1402D3730 (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x1402D38A0 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x1402D5E90 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1406B9984 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140705508 (PspSetProcessAffinityUpdateMode.c)
 *     PpmRegisterPerfStates @ 0x14074E4DC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE58 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x14074F134 (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x14074F33C (PpmParkParkingAvailable.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14074FEEC (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x1408337A0 (PnpReplacePartitionUnit.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BB680 (EtwpLoadMicroarchitecturalProfileGroup.c)
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
