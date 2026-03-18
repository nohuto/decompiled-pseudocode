/*
 * XREFs of KeIsEmptyAffinityEx @ 0x1400BE2F0
 * Callers:
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     MmOutSwapProcess @ 0x140074470 (MmOutSwapProcess.c)
 *     KiIpiSendRequest @ 0x1400B9DD0 (KiIpiSendRequest.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1400BCFB0 (KiGetNextTimerExpirationDueTime.c)
 *     PpmParkSteerInterrupts @ 0x1400BDBA0 (PpmParkSteerInterrupts.c)
 *     KeRemoveQueueDpcEx @ 0x140108E40 (KeRemoveQueueDpcEx.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140194584 (PpmHeteroUpdateHgsConfiguration.c)
 *     HvlParkedVirtualProcessors @ 0x14028AEC8 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x1402ACB00 (KiStopProfileTarget.c)
 *     PoExecuteIdleCheck @ 0x1402EDECC (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x1402EE060 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x1402F0664 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x140697164 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14072CB94 (PspSetProcessAffinityUpdateMode.c)
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     PpmCheckReInit @ 0x14077387C (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x140773AA0 (PpmParkParkingAvailable.c)
 *     PopInitializeHeteroProcessors @ 0x140773BB8 (PopInitializeHeteroProcessors.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1408C9020 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F8214 (EtwpLoadMicroarchitecturalProfileGroup.c)
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
