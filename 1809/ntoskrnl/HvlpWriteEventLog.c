/*
 * XREFs of HvlpWriteEventLog @ 0x140278A38
 * Callers:
 *     HvlPhase2Initialize @ 0x140193304 (HvlPhase2Initialize.c)
 *     HvlpLogHypervisorProcessorConfigurationWarning @ 0x1401B3EB4 (HvlpLogHypervisorProcessorConfigurationWarning.c)
 *     HvlpCheckTscSync @ 0x140278288 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x140278400 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x1402785F4 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x140278668 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x1402786C4 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1402787CC (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x140278970 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAD60 (EtwWriteEx.c)
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
