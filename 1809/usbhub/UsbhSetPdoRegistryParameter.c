/*
 * XREFs of UsbhSetPdoRegistryParameter @ 0x1C0028CE0
 * Callers:
 *     UsbhPdoCreateSymbolicLink @ 0x1C00201C8 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0028BD0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C004356C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhSetHubOvercurrentDetectedKey @ 0x1C0050AB0 (UsbhSetHubOvercurrentDetectedKey.c)
 *     UsbhSetHubSelectiveSuspend @ 0x1C0050AF0 (UsbhSetHubSelectiveSuspend.c)
 *     UsbhSetPdoSelectiveSuspendedKey @ 0x1C0050B40 (UsbhSetPdoSelectiveSuspendedKey.c)
 *     UsbhUpdateRegHubHardResetCount @ 0x1C0050B80 (UsbhUpdateRegHubHardResetCount.c)
 *     UsbhSetWmiDataBlock @ 0x1C0053220 (UsbhSetWmiDataBlock.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0059BF8 (UsbhPdo_ReportPnPFailureProblem.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004051C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
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

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)SourceString,
      1,
      89,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      (char)DeviceObject);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)SourceString,
      Type,
      90,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      (__int64)SourceString);
  RtlInitUnicodeString(&DestinationString, SourceString);
  v9 = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x1F0000u, &DeviceRegKey);
  if ( v9 >= 0 )
  {
    v9 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, Type, Data, DataSize);
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v9;
}
