/*
 * XREFs of HvlpWriteEventLog @ 0x14028CA6C
 * Callers:
 *     HvlPhase2Initialize @ 0x14019DD6C (HvlPhase2Initialize.c)
 *     HvlpCheckTscSync @ 0x14028C250 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14028C3EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x14028C608 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x14028C67C (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x14028C6D8 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x14028C7E0 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x14028C9A4 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
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
