/*
 * XREFs of DriverEntry @ 0x1C0028F14
 * Callers:
 *     GsDriverEntry @ 0x1C0078010 (GsDriverEntry.c)
 * Callees:
 *     USBHUB_InitBugCheck @ 0x1C0029124 (USBHUB_InitBugCheck.c)
 *     UsbhInitializeHighResTimer @ 0x1C00291A4 (UsbhInitializeHighResTimer.c)
 *     UsbhInitGlobal @ 0x1C0029294 (UsbhInitGlobal.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhModuleDispatch @ 0x1C004FF7C (UsbhModuleDispatch.c)
 *     WppInitKm @ 0x1C00771EC (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C007728C (WppLoadTracingSupport.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned int v4; // ebx
  int v5; // edx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  NTSTATUS v8; // edi
  char *v9; // rcx
  __int64 (__fastcall *v10)(_LIST_ENTRY *, PUNICODE_STRING); // rax
  NTSTATUS result; // eax
  struct _OSVERSIONINFOW VersionInformation; // [rsp+30h] [rbp-158h] BYREF

  VersionInformation.dwOSVersionInfoSize = 276;
  v4 = 1;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = NonPagedPoolNx;
    ExDefaultMdlProtection = 0x40000000;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_usbhub;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  UsbhInitGlobal();
  WPP_MAIN_CB.Queue.ListEntry.Blink = (_LIST_ENTRY *)DriverObject;
  if ( (unsigned __int8)UsbhInitializeHighResTimer() )
    dword_1C006E694 = 1;
  v6 = 0;
  DriverObject->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  v7 = 0;
  DriverObject->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))UsbhDriverUnload;
  DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))UsbhAddDevice;
  DriverObject->MajorFunction[16] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))&UsbhDeviceShutdown;
  do
  {
    v8 = 0;
    v9 = (char *)&HubModule + 56 * v7;
    if ( v9 )
    {
      v10 = (__int64 (__fastcall *)(_LIST_ENTRY *, PUNICODE_STRING))*((_QWORD *)v9 + 3);
      if ( v10 )
      {
        v8 = v10(WPP_MAIN_CB.Queue.ListEntry.Blink, RegistryPath);
        if ( v8 < 0 )
          break;
      }
    }
    ++v6;
    ++v7;
  }
  while ( v6 < 0xA );
  if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong > 1 )
  {
    do
    {
      if ( v4 > 0x10 )
        break;
      v4 *= 2;
    }
    while ( v4 < WPP_MAIN_CB.Dpc.TargetInfoAsUlong );
  }
  WPP_MAIN_CB.Dpc.TargetInfoAsUlong = v4;
  if ( (v8 & 0xC0000000) == 0xC0000000 )
    UsbhModuleDispatch(0, v5, 0, 4, 0LL, 0LL);
  USBHUB_BugCheckPortArray = (PVOID)USBHUB_InitBugCheck(USBHUB_BugCheckSavePortArrayData);
  USBHUB_BugCheckHubExt = (PVOID)USBHUB_InitBugCheck(USBHUB_BugCheckSaveHubExtData);
  result = v8;
  WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
  return result;
}
