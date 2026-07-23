/*
 * XREFs of HvlpWriteEventLog @ 0x140278C28
 * Callers:
 *     HvlPhase2Initialize @ 0x140193444 (HvlPhase2Initialize.c)
 *     HvlpLogHypervisorProcessorConfigurationWarning @ 0x1401B3D54 (HvlpLogHypervisorProcessorConfigurationWarning.c)
 *     HvlpCheckTscSync @ 0x140278478 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1402785F0 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x1402787E4 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x140278858 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x1402788B4 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1402789BC (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x140278B60 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
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
