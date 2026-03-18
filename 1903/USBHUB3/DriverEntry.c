/*
 * XREFs of DriverEntry @ 0x1C0085008
 * Callers:
 *     FxDriverEntryWorker @ 0x1C003D504 (FxDriverEntryWorker.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 *     McGenEventRegister @ 0x1C00012B4 (McGenEventRegister.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBREG_QueryGlobalUsbLtmSettings @ 0x1C0031230 (HUBREG_QueryGlobalUsbLtmSettings.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     WppLoadTracingSupport @ 0x1C006F008 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C006F3A4 (WppInitKm.c)
 *     WppCleanupKm @ 0x1C006F480 (WppCleanupKm.c)
 *     HUBREG_QueryGlobalHubValues @ 0x1C007B8E4 (HUBREG_QueryGlobalHubValues.c)
 *     HUBREG_QueryGlobalUsb20HardwareLpmSettings @ 0x1C007CF40 (HUBREG_QueryGlobalUsb20HardwareLpmSettings.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rbx
  NTSTATUS v5; // edi
  __int64 v6; // rax
  ETWENABLECALLBACK *v7; // rdx
  const GUID *v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[56]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v17[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v18[6]; // [rsp+C0h] [rbp-40h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+F0h] [rbp-10h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v12 = 0LL;
  memset(v18, 0, sizeof(v18));
  g_Usbhub3DriverObject = (__int64)DriverObject;
  v4 = 0LL;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = NonPagedPoolNx;
    ExDefaultMdlProtection = 0x40000000;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBHUB3;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  LODWORD(v12) = 8;
  BYTE4(v12) = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v12);
  v17[0] = 32LL;
  v17[1] = HUBFDO_EvtDeviceAdd;
  *(_QWORD *)&v16[48] = off_1C0064130;
  *(_QWORD *)&v16[8] = DriverCleanup;
  v17[2] = 0LL;
  v17[3] = 0x7733485500000000LL;
  *(_QWORD *)v16 = 56LL;
  *(_QWORD *)&v16[16] = 0LL;
  *(_OWORD *)&v16[32] = 0LL;
  *(_DWORD *)&v16[24] = 1;
  *(_DWORD *)&v16[28] = 1;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _BYTE *, _QWORD *, __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         v16,
         v17,
         &v14);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v14,
           off_1C0064130);
    v18[0] = 48LL;
    HIDWORD(v18[3]) = 16;
    LOBYTE(v18[4]) = 0;
    v4 = v6;
    v18[2] = 0LL;
    LOBYTE(v18[3]) = 0;
    v18[1] = 0x20000000400LL;
    RtlStringCchPrintfA((NTSTRSAFE_PSTR)&v18[4], 0x10uLL, "hub driver");
    v5 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v18, v4 + 64);
    if ( v5 < 0 )
      return v5;
    memset(v16, 0, sizeof(v16));
    *(_QWORD *)&v16[32] = v14;
    *(_DWORD *)v16 = 56;
    *(_DWORD *)&v16[24] = 1;
    *(_DWORD *)&v16[28] = 1;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _BYTE *, __int64))(WdfFunctions_01015 + 2496))(
           WdfDriverGlobals,
           v16,
           v4 + 32);
    if ( v5 < 0 )
      return v5;
    *(_QWORD *)(v4 + 24) = v4 + 16;
    *(_QWORD *)(v4 + 16) = v4 + 16;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _BYTE *, __int64))(WdfFunctions_01015 + 2496))(
           WdfDriverGlobals,
           v16,
           v4 + 56);
    if ( v5 < 0 )
      return v5;
    *(_QWORD *)(v4 + 48) = v4 + 40;
    *(_QWORD *)(v4 + 40) = v4 + 40;
    McGenEventRegister(v8, v7, &MS_USBHUB3_ETW_PROVIDER_Context, &MS_USBHUB3_ETW_PROVIDER_Context);
    v9 = SleepstudyHelper_Initialize(v4 + 96, DriverObject);
    if ( v9 < 0 )
    {
      *(_BYTE *)(v4 + 92) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v11) = v9;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 64),
          4u,
          2u,
          0xAu,
          (__int64)&WPP_0d48d1e41a983d70c381c92807212fd3_Traceguids,
          v11);
      }
    }
    else
    {
      *(_BYTE *)(v4 + 92) = 1;
    }
    EtwSetInformation(
      MS_USBHUB3_ETW_PROVIDER_Context,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    HUBREG_QueryGlobalHubValues(v4);
    HUBREG_QueryGlobalUsb20HardwareLpmSettings(v4);
    HUBREG_QueryGlobalUsbLtmSettings(v4);
    RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
    WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoSetActivityIdIrp");
    g_IoSetActivityIdIrp = (__int64 (__fastcall *)(_QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
    v15 = 0LL;
    if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
    {
      ((void (__fastcall *)(const wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        L"USBHUB:GLOBAL_FLAGS",
        L"USBHUB",
        &v15);
      if ( (v15 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v4 + 4), 0x20000u);
    }
    imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    qword_1C00675D0 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
    dword_1C00675A0 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    qword_1C00675A4 = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    dword_1C00675AC = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
    dword_1C00675B0 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  }
  else
  {
    WppCleanupKm((__int64)DriverObject);
  }
  if ( v5 >= 0 && v4 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = *(_DWORD *)(v4 + 4);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 64),
      4u,
      2u,
      0xBu,
      (__int64)&WPP_0d48d1e41a983d70c381c92807212fd3_Traceguids,
      v11);
  }
  return v5;
}
