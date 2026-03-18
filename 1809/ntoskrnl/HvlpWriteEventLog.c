/*
 * XREFs of HvlpWriteEventLog @ 0x140278938
 * Callers:
 *     HvlPhase2Initialize @ 0x1401932E4 (HvlPhase2Initialize.c)
 *     HvlpLogHypervisorProcessorConfigurationWarning @ 0x1401B3E94 (HvlpLogHypervisorProcessorConfigurationWarning.c)
 *     HvlpCheckTscSync @ 0x140278188 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x140278300 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x1402784F4 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x140278568 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x1402785C4 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1402786CC (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x140278870 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAD40 (EtwWriteEx.c)
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
