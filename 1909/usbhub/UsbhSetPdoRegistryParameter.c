/*
 * XREFs of UsbhSetPdoRegistryParameter @ 0x1C0029C90
 * Callers:
 *     UsbhPdoCreateSymbolicLink @ 0x1C0020F3C (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0029B80 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C0044BF0 (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhSetHubOvercurrentDetectedKey @ 0x1C0052890 (UsbhSetHubOvercurrentDetectedKey.c)
 *     UsbhSetHubSelectiveSuspend @ 0x1C00528D0 (UsbhSetHubSelectiveSuspend.c)
 *     UsbhSetPdoSelectiveSuspendedKey @ 0x1C0052920 (UsbhSetPdoSelectiveSuspendedKey.c)
 *     UsbhUpdateRegHubHardResetCount @ 0x1C0052960 (UsbhUpdateRegHubHardResetCount.c)
 *     UsbhSetWmiDataBlock @ 0x1C0055310 (UsbhSetWmiDataBlock.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C005BFC8 (UsbhPdo_ReportPnPFailureProblem.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhSetPdoRegistryParameter(
        PDEVICE_OBJECT DeviceObject,
        PCWSTR SourceString,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS v9; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)SourceString,
        1,
        89,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        (char)DeviceObject);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)SourceString,
        Type,
        90,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        (__int64)SourceString);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v9 = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x1F0000u, &DeviceRegKey);
  if ( v9 >= 0 )
  {
    v9 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, Type, Data, DataSize);
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v9;
}
