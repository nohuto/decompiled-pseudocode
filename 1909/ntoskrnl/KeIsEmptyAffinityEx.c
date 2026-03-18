/*
 * XREFs of KeIsEmptyAffinityEx @ 0x14009E170
 * Callers:
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     MmOutSwapProcess @ 0x1400746E0 (MmOutSwapProcess.c)
 *     KiIpiSendRequest @ 0x140099C40 (KiIpiSendRequest.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14009CE30 (KiGetNextTimerExpirationDueTime.c)
 *     PpmParkSteerInterrupts @ 0x14009DA20 (PpmParkSteerInterrupts.c)
 *     KeRemoveQueueDpcEx @ 0x1400FD550 (KeRemoveQueueDpcEx.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140194D64 (PpmHeteroUpdateHgsConfiguration.c)
 *     HvlParkedVirtualProcessors @ 0x14028AC28 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x1402AC860 (KiStopProfileTarget.c)
 *     PoExecuteIdleCheck @ 0x1402EDC2C (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x1402EDDC0 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x1402F03C4 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x14068A6D4 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14072EA34 (PspSetProcessAffinityUpdateMode.c)
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PpmCheckReInit @ 0x140776E5C (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x140777080 (PpmParkParkingAvailable.c)
 *     PopInitializeHeteroProcessors @ 0x140777198 (PopInitializeHeteroProcessors.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1408C8900 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F7BF8 (EtwpLoadMicroarchitecturalProfileGroup.c)
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
