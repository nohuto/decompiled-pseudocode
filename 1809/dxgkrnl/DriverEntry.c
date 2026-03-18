/*
 * XREFs of DriverEntry @ 0x1C02A1904
 * Callers:
 *     GsDriverEntry @ 0x1C02A1010 (GsDriverEntry.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C001F5FC (-DxgkInitializeTelemetry@@YAXXZ.c)
 *     McGenEventRegister @ 0x1C00206F4 (McGenEventRegister.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C00219F0 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     MonitorCleanupGlobal @ 0x1C004F08C (MonitorCleanupGlobal.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0147E64 (WdmlibIoCreateDeviceSecure.c)
 *     ?TdrInit@@YAXXZ @ 0x1C01560C0 (-TdrInit@@YAXXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C01564B0 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C0156BD8 (-DxgDbgInit@@YAXXZ.c)
 *     DxgkInitIoMmu @ 0x1C0156C50 (DxgkInitIoMmu.c)
 *     MonitorInitializeGlobal @ 0x1C0156C88 (MonitorInitializeGlobal.c)
 *     DxgkInitialPower @ 0x1C0156F78 (DxgkInitialPower.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C0157358 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C020E834 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkCleanupPower @ 0x1C026E6F8 (DxgkCleanupPower.c)
 *     DpiInitializeGlobalState @ 0x1C02A1078 (DpiInitializeGlobalState.c)
 *     ?LPMDisplayInitializeGlobal@@YAJXZ @ 0x1C02A1D60 (-LPMDisplayInitializeGlobal@@YAJXZ.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS ProcessNotifyRoutine; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int8 v7; // al
  NTSTATUS result; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  ETWENABLECALLBACK *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  PVOID v40; // rcx
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  int DeviceCharacteristics; // [rsp+28h] [rbp-E0h]
  BOOLEAN Exclusive; // [rsp+30h] [rbp-D8h]
  __int64 v47; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A8h]
  __int64 v49; // [rsp+68h] [rbp-A0h]
  _QWORD v50[2]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DefaultSDDLString; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-60h] BYREF
  int v54; // [rsp+B0h] [rbp-58h]
  const wchar_t *v55; // [rsp+B8h] [rbp-50h]
  unsigned __int8 *v56; // [rsp+C0h] [rbp-48h]
  int v57; // [rsp+C8h] [rbp-40h]
  unsigned __int8 *v58; // [rsp+D0h] [rbp-38h]
  int v59; // [rsp+D8h] [rbp-30h]
  __int64 v60; // [rsp+E0h] [rbp-28h]
  int v61; // [rsp+E8h] [rbp-20h]
  _BYTE v62[40]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 SystemInformation; // [rsp+128h] [rbp+20h] BYREF

  rbc_InitializeFeatureStaging();
  g_pDriverObject = DriverObject;
  ProcessNotifyRoutine = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 0);
  v5 = ProcessNotifyRoutine;
  if ( ProcessNotifyRoutine < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v7 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v7 = 0;
  }
  g_OSTestSigningEnabled = v7;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_DxgkrnlPrereleaseDiagnostic__private_propertyCache,
    9011807LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006732C,
    0,
    DeviceCharacteristics);
  v53 = 0LL;
  v54 = 288;
  v55 = L"IsInternalRelease";
  v57 = 67108868;
  v56 = &g_IsInternalRelease;
  v58 = &g_IsInternalRelease;
  v59 = 4;
  v60 = 0LL;
  v61 = 0;
  memset(v62, 0, sizeof(v62));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v53, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  WdInitialize();
  result = DpiInitializeGlobalState();
  if ( result >= 0 )
  {
    result = DXGGLOBAL::CreateGlobal(v10, v9, v11, v12);
    if ( result >= 0 )
    {
      result = CCD_BTL::CreateGlobal(v13);
      if ( result >= 0 )
      {
        DxgkInitializeTelemetry();
        v14 = ExSubscribeWnfStateChange(
                &gScreenStudyEventSubscription,
                &WNF_SRUM_SCREENONSTUDY_SESSION,
                1LL,
                0LL,
                WnfScreenOnCallback,
                0LL);
        v17 = v14;
        if ( v14 < 0 )
        {
          v18 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v18 + 24) = v17;
          WdLogEvent5_WdError(v18);
          gScreenStudyEventSubscription = 0LL;
        }
        bTracingEnabled = 0;
        McGenEventRegister(&DxgkControlGuid, v15, &DxgkControlGuid_Context, &DxgkControlGuid_Context);
        LODWORD(v47) = -1;
        v48 = 0LL;
        if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
        {
          LOBYTE(v49) = 1;
          LODWORD(v47) = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v19, &EventProfilerEnter, v20, 0);
        }
        else
        {
          LOBYTE(v49) = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 0);
        v50[0] = &DxgkControlGuid;
        v50[1] = &Dxgk_WDI_NotifyUser;
        WdDiagInit(v50);
        RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
        DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)DxgkDeviceIoctl;
        DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
        RtlInitUnicodeString(
          &DefaultSDDLString,
          L"D:P(A;;GRGW;;;S-1-5-83-0)(A;;GRGW;;;S-1-15-3-1024-2268835264-3721307629-241982045-173645152-1490879176-1046434"
           "41-2915960892-1612460704)");
        v21 = WdmlibIoCreateDeviceSecure(
                DriverObject,
                0,
                &DestinationString,
                0x22u,
                0x100u,
                Exclusive,
                &DefaultSDDLString,
                &GUID_SD_DXGKRNL_DRIVER_OBJECT,
                (PDEVICE_OBJECT *)&g_pDeviceObject);
        v25 = v21;
        if ( v21 < 0
          || (v27 = DxgkInitialPower(), v25 = v27, v27 < 0)
          || (v29 = MonitorInitializeGlobal(v23, v22, v24, v28), v25 = v29, v29 < 0)
          || (v30 = LPMDisplayInitializeGlobal(), v25 = v30, v30 < 0) )
        {
          v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
          *(_QWORD *)(v26 + 24) = v25;
          WdLogEvent5_WdWarning(v26);
        }
        else
        {
          DxgkInitIoMmu();
          DxgDbgInit(v31);
          TdrInit();
          v32 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
          v25 = v32;
          if ( v32 >= 0 )
          {
            LODWORD(v25) = 0;
LABEL_26:
            v41 = v48;
            if ( v48 )
            {
              v42 = *(_DWORD *)(v48 + 140);
              if ( !v42 )
              {
                v43 = WdLogNewEntry5_WdAssertion(v33);
                *(_QWORD *)(v43 + 24) = 232LL;
                WdLogEvent5_WdAssertion(v43);
                v42 = *(_DWORD *)(v41 + 140);
              }
              v44 = v42 - 1;
              *(_DWORD *)(v41 + 140) = v44;
              if ( !v44 )
                *(_DWORD *)(v41 + 144) = -1;
            }
            if ( (_BYTE)v49 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v33, &EventProfilerExit, v34, v47);
            }
            return v25;
          }
          v35 = WdLogNewEntry5_WdError(v33);
          *(_QWORD *)(v35 + 24) = v25;
          WdLogEvent5_WdError(v35);
        }
        DxgkCleanupPower();
        MonitorCleanupGlobal(v37, v36, v38, v39);
        v40 = g_pDeviceObject;
        if ( g_pDeviceObject )
        {
          IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
          g_pDeviceObject = 0LL;
        }
        DXGGLOBAL::DestroyGlobal((__int64)v40);
        goto LABEL_26;
      }
    }
  }
  return result;
}
