/*
 * XREFs of DriverEntry @ 0x1C0064410
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0007CB4 (FxDriverEntryWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0008084 (InitializeTelemetryAssertsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     McGenEventRegister @ 0x1C0016C28 (McGenEventRegister.c)
 *     WppCleanupKm @ 0x1C00647F0 (WppCleanupKm.c)
 *     WppInitKm @ 0x1C00648A0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C006497C (WppLoadTracingSupport.c)
 *     Counter_Register @ 0x1C006A854 (Counter_Register.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  _QWORD *v4; // rax
  int v5; // edi
  PETWENABLECALLBACK v6; // rdx
  LPCGUID v7; // rcx
  __int64 SystemInformation; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ReturnLength; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v14[4]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v15[4]; // [rsp+90h] [rbp-70h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+D0h] [rbp-30h] BYREF

  SystemInformation = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10 = 0LL;
  memset(v15, 0, 0x38uLL);
  memset(v14, 0, sizeof(v14));
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = DriverObject;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
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
  BYTE4(v10) = 0;
  LODWORD(v10) = 8;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v10);
  *(_QWORD *)&v15[3] = off_1C0056220;
  *((_QWORD *)&v15[0] + 1) = DriverCleanup;
  *(_QWORD *)&v15[0] = 56LL;
  v14[1] = Controller_WdfEvtDeviceAdd;
  *(_QWORD *)&v15[1] = 0LL;
  v15[2] = 0LL;
  *((_QWORD *)&v15[1] + 1) = 0x100000001LL;
  v14[0] = 32LL;
  v14[2] = 0LL;
  v14[3] = 0x5743485800000000LL;
  if ( (*(int (__fastcall **)(unsigned __int64, _DRIVER_OBJECT *, PUNICODE_STRING, _OWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 928))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         DriverObject,
         RegistryPath,
         v15,
         v14,
         &v13) < 0 )
    WppCleanupKm(DriverObject);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   v13,
                   off_1C0056220);
  *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = v4;
  v4[1] = v4;
  *v4 = v4;
  KeInitializeSpinLock(v4 + 2);
  *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 24LL) = 0;
  SystemInformation = 8LL;
  v5 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
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
  dword_1C00564B8 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  qword_1C00564BC = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  dword_1C00564C4 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
  dword_1C00564C8 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  qword_1C00564E0 = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 3448))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  InitializeTelemetryAssertsKM((const void **)RegistryPath);
  McGenEventRegister(v7, v6, &MS_USBXHCI_ETW_PROVIDER_Context, &MS_USBXHCI_ETW_PROVIDER_Context);
  SleepstudyHelper_Initialize(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 32LL, DriverObject);
  EtwSetInformation(
    MS_USBXHCI_ETW_PROVIDER_Context,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  Counter_Register();
  return v5;
}
