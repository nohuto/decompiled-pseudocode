/*
 * XREFs of HvlPhase2Initialize @ 0x14019DD6C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExNotifyWithProcessing @ 0x1400F2CF8 (ExNotifyWithProcessing.c)
 *     ExRegisterCallback @ 0x14017F130 (ExRegisterCallback.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1401BE9C0 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpRegisterPowerPolicyCallbacks @ 0x14028B3E0 (HvlpRegisterPowerPolicyCallbacks.c)
 *     HvlpInitializeSvmIommuSupport @ 0x14028C094 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpCheckTscSync @ 0x14028C250 (HvlpCheckTscSync.c)
 *     HvlpEtwRegister @ 0x14028C3A4 (HvlpEtwRegister.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14028C3EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x14028C608 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x14028C67C (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuInitStatus @ 0x14028C7E0 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x14028C9A4 (HvlpLogProcessorStartupFailure.c)
 *     HvlpWriteEventLog @ 0x14028CA6C (HvlpWriteEventLog.c)
 *     ExCreateCallback @ 0x1406EAE20 (ExCreateCallback.c)
 *     EtwUnregister @ 0x140749F60 (EtwUnregister.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x1408508B4 (HvlpLogMicrocodeUpdateStatus.c)
 *     HvlpDiscoverTopologyComplete @ 0x140A3936C (HvlpDiscoverTopologyComplete.c)
 */

NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rcx
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  __int128 v23; // [rsp+30h] [rbp-39h]
  __int128 v24; // [rsp+40h] [rbp-29h]
  __int64 v25; // [rsp+50h] [rbp-19h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  _OWORD v27[2]; // [rsp+90h] [rbp+27h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+47h]
  PCALLBACK_OBJECT CallbackObject; // [rsp+D0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v2 = *(_QWORD *)(v1 + 2512);
  *((_QWORD *)&v23 + 1) = *(_QWORD *)(v1 + 2520);
  v24 = *(_OWORD *)(v1 + 2528);
  v25 = *(_QWORD *)(v1 + 2544);
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&v23 = v2;
  if ( v2 )
  {
    HvlpEtwRegister(v2, v1);
    v27[0] = v23;
    v28 = v25;
    v27[1] = v24;
    HvlpLogHypervisorLaunchError(v27);
    EtwUnregister(HvlGlobalSystemEventsHandle);
    HvlGlobalSystemEventsHandle = 0LL;
  }
  if ( !HvlHypervisorConnected )
    return 0;
  if ( (HvlpFlags & 2) == 0 )
    goto LABEL_10;
  HvlpDiscoverTopologyComplete(v2, v1);
  HvlpSchedulerType = HvlpQueryHypervisorSchedulerType(v4, v3);
  if ( HvlpSchedulerType == 4 )
    HvlpRootSchedulerEnabled = 1;
  if ( !HvlpRootSchedulerEnabled
    || (result = HvlpInitializeSvmIommuSupport(v6, v5), (int)(result + 0x80000000) < 0)
    || result == -1073741637 )
  {
LABEL_10:
    IoAddTriageDumpDataBlock((ULONG)&HvlpFlags, (PVOID)4);
    IoAddTriageDumpDataBlock((ULONG)&HvlpRootFlags, (PVOID)4);
    IoAddTriageDumpDataBlock((ULONG)&HvlpEnlightenments, (PVOID)4);
    if ( (HvlpRootFlags & 1) == 0 )
    {
LABEL_17:
      v21 = ExCbEnlightenmentState;
      if ( ExCbEnlightenmentState )
        ExNotifyWithProcessing(ExCbEnlightenmentState, 0LL, 0LL, 0LL);
      HvlpRegisterPowerPolicyCallbacks(v21, v8);
      return 0;
    }
    HvlpEtwRegister(v9, v8);
    HvlpWriteEventLog(&HV_EVENTLOG_START_SUCCEEDED, 0, 0LL);
    HvlpLogHypervisorSchedulerType(v11, v10);
    HvlpCheckTscSync(v13, v12);
    HvlpLogIommuInitStatus(v15, v14);
    HvlpLogGuestStateScrubbingStatus(v17, v16);
    if ( (unsigned int)HvlpLogicalProcessorCount < 0x200 )
    {
      v19 = &HvlpLogicalProcessorRegions[30 * (unsigned int)HvlpLogicalProcessorCount];
      if ( !*v19 )
      {
        v20 = *((_WORD *)v19 + 28);
        if ( v20 )
          HvlpLogProcessorStartupFailure((unsigned int)v19[2], v20);
      }
    }
    HvlpLogMicrocodeUpdateStatus(v19, v18);
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
