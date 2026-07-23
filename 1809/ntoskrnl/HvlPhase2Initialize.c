/*
 * XREFs of HvlPhase2Initialize @ 0x140193444
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14008E498 (ExNotifyWithProcessing.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14016C780 (ExRegisterCallback.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     HvlpLogHypervisorProcessorConfigurationWarning @ 0x1401B3D54 (HvlpLogHypervisorProcessorConfigurationWarning.c)
 *     HvlpRegisterPowerPolicyCallbacks @ 0x140277500 (HvlpRegisterPowerPolicyCallbacks.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x140277654 (HvlpDetectHypervisorSchedulerType.c)
 *     HvlpInitializeSvmIommuSupport @ 0x140278254 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpCheckTscSync @ 0x140278478 (HvlpCheckTscSync.c)
 *     HvlpEtwRegister @ 0x1402785A8 (HvlpEtwRegister.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1402785F0 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x1402787E4 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x140278858 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuInitStatus @ 0x1402789BC (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x140278B60 (HvlpLogProcessorStartupFailure.c)
 *     HvlpWriteEventLog @ 0x140278C28 (HvlpWriteEventLog.c)
 *     ExCreateCallback @ 0x1406CB620 (ExCreateCallback.c)
 *     EtwUnregister @ 0x140708610 (EtwUnregister.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x1408189A4 (HvlpLogMicrocodeUpdateStatus.c)
 *     HvlpDiscoverTopologyComplete @ 0x1409F5138 (HvlpDiscoverTopologyComplete.c)
 */

NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  NTSTATUS result; // eax
  int *v4; // rcx
  unsigned __int16 v5; // ax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-9h] BYREF
  _OWORD v8[2]; // [rsp+60h] [rbp+27h] BYREF
  PVOID SecurityDescriptor; // [rsp+80h] [rbp+47h]
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v2 = *(_QWORD *)(v1 + 2488);
  ObjectAttributes.RootDirectory = *(HANDLE *)(v1 + 2496);
  ObjectAttributes.ObjectName = *(PUNICODE_STRING *)(v1 + 2504);
  *(_QWORD *)&ObjectAttributes.Attributes = *(_QWORD *)(v1 + 2512);
  ObjectAttributes.SecurityDescriptor = *(PVOID *)(v1 + 2520);
  *(_QWORD *)&ObjectAttributes.Length = v2;
  if ( v2 )
  {
    HvlpEtwRegister();
    v8[0] = *(_OWORD *)&ObjectAttributes.Length;
    SecurityDescriptor = ObjectAttributes.SecurityDescriptor;
    v8[1] = *(_OWORD *)&ObjectAttributes.ObjectName;
    HvlpLogHypervisorLaunchError(v8);
    EtwUnregister(HvlGlobalSystemEventsHandle);
    HvlGlobalSystemEventsHandle = 0LL;
  }
  if ( !HvlHypervisorConnected )
    return 0;
  if ( (HvlpFlags & 2) == 0
    || (HvlpDiscoverTopologyComplete(), HvlpDetectHypervisorSchedulerType(), !HvlpRootSchedulerEnabled)
    || (result = HvlpInitializeSvmIommuSupport(), (int)(result + 0x80000000) < 0)
    || result == -1073741637 )
  {
    IoAddTriageDumpDataBlock((int)&HvlpFlags, 4);
    IoAddTriageDumpDataBlock((int)&HvlpRootFlags, 4);
    IoAddTriageDumpDataBlock((int)&HvlpEnlightenments, 4);
    if ( (HvlpRootFlags & 1) == 0 )
    {
LABEL_17:
      if ( ExCbEnlightenmentState )
        ExNotifyWithProcessing(ExCbEnlightenmentState, 0LL, 0LL, 0LL);
      HvlpRegisterPowerPolicyCallbacks();
      return 0;
    }
    HvlpEtwRegister();
    HvlpWriteEventLog(&HV_EVENTLOG_START_SUCCEEDED, 0, 0LL);
    HvlpLogHypervisorSchedulerType();
    HvlpCheckTscSync();
    HvlpLogIommuInitStatus();
    HvlpLogGuestStateScrubbingStatus();
    if ( (unsigned int)HvlpLogicalProcessorCount < 0x200 )
    {
      v4 = &HvlpLogicalProcessorRegions[30 * (unsigned int)HvlpLogicalProcessorCount];
      if ( !*v4 )
      {
        v5 = *((_WORD *)v4 + 28);
        if ( v5 )
          HvlpLogProcessorStartupFailure((unsigned int)v4[2], v5);
      }
    }
    HvlpLogMicrocodeUpdateStatus();
    if ( HvlpMinrootConfigurationError )
      HvlpLogHypervisorProcessorConfigurationWarning();
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    CallbackObject = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( result >= 0 )
    {
      ExRegisterCallback(CallbackObject, HvlpPowerStateCallback, 0LL);
      goto LABEL_17;
    }
  }
  return result;
}
