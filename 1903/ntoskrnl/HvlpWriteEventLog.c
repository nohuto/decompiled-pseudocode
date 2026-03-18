/*
 * XREFs of HvlpWriteEventLog @ 0x14028CD0C
 * Callers:
 *     HvlPhase2Initialize @ 0x14019D5EC (HvlPhase2Initialize.c)
 *     HvlpCheckTscSync @ 0x14028C4F0 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14028C68C (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x14028C8A8 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x14028C91C (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x14028C978 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x14028CA80 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x14028CC44 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 */

NTSTATUS __fastcall HvlpWriteEventLog(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = (int)EventDescriptor;
  if ( HvlGlobalSystemEventsHandle )
    return EtwWriteEx(HvlGlobalSystemEventsHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  return result;
}
