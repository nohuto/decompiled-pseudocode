/*
 * XREFs of DriverEntry @ 0x1C005CAF8
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0005F14 (FxDriverEntryWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     InitializeTelemetryAssertsKM @ 0x1C00062E4 (InitializeTelemetryAssertsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     McGenEventRegister @ 0x1C0014030 (McGenEventRegister.c)
 *     WppCleanupKm @ 0x1C005CE7C (WppCleanupKm.c)
 *     WppInitKm @ 0x1C005CF20 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C005CFE8 (WppLoadTracingSupport.c)
 *     Counter_Register @ 0x1C0062668 (Counter_Register.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  _QWORD *v4; // rax
  int v5; // ebx
  ETWENABLECALLBACK *v6; // rdx
  void *v7; // r8
  PETWENABLECALLBACK v8; // rdx
  LPCGUID v9; // rcx
  __int64 SystemInformation; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  char v13; // [rsp+4Ch] [rbp-B4h]
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v18[8]; // [rsp+90h] [rbp-70h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+D0h] [rbp-30h] BYREF

  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = DriverObject;
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    *(&WPP_MAIN_CB.AlignmentRequirement + 1) = 512;
    WPP_MAIN_CB.AlignmentRequirement = 0x40000000;
  }
  RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"IoTryQueueWorkItem");
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = MmGetSystemRoutineAddress(&DestinationString);
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBXHCI;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  v12 = 8;
  v13 = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v12);
  memset(v18, 0, 0x38uLL);
  v18[6] = off_1C004F1F8;
  LODWORD(v18[0]) = 56;
  v18[3] = 0x100000001LL;
  v18[1] = DriverCleanup;
  memset(v17, 0, sizeof(v17));
  LODWORD(v17[0]) = 32;
  v17[1] = Controller_WdfEvtDeviceAdd;
  HIDWORD(v17[3]) = 1464027224;
  if ( (*(int (__fastcall **)(unsigned __int64, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 928))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         DriverObject,
         RegistryPath,
         v18,
         v17,
         &v15) < 0 )
    WppCleanupKm(DriverObject);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   v15,
                   off_1C004F1F8);
  *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = v4;
  v4[1] = v4;
  *v4 = v4;
  KeInitializeSpinLock(v4 + 2);
  *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 24LL) = 0;
  SystemInformation = 8LL;
  v5 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength);
  if ( v5 >= 0 && (SystemInformation & 0x200000000LL) != 0 )
  {
    *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) = 1;
  }
  else
  {
    v5 = 0;
    *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) = 0;
  }
  imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  dword_1C004F498 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  qword_1C004F49C = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  dword_1C004F4A4 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
  dword_1C004F4A8 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  qword_1C004F4C0 = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 3448))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  InitializeTelemetryAssertsKM((const void **)RegistryPath, v6, v7);
  McGenEventRegister(v9, v8, &MS_USBXHCI_ETW_PROVIDER_Context, &MS_USBXHCI_ETW_PROVIDER_Context);
  EtwSetInformation(
    MS_USBXHCI_ETW_PROVIDER_Context,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  Counter_Register();
  return v5;
}
