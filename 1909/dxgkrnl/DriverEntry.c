/*
 * XREFs of DriverEntry @ 0x1C02D5158
 * Callers:
 *     GsDriverEntry @ 0x1C02D5010 (GsDriverEntry.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C001EED4 (-DxgkInitializeTelemetry@@YAXXZ.c)
 *     McGenEventRegister @ 0x1C00232D4 (McGenEventRegister.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     MonitorCleanupGlobal @ 0x1C0056230 (MonitorCleanupGlobal.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C015D820 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C015DE20 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     DxgkInitialPower @ 0x1C015E320 (DxgkInitialPower.c)
 *     DxgkInitIoMmu @ 0x1C015E378 (DxgkInitIoMmu.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C015E3B0 (-DxgDbgInit@@YAXXZ.c)
 *     ?TdrInit@@YAXXZ @ 0x1C015ECF0 (-TdrInit@@YAXXZ.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0160F50 (WdmlibIoCreateDeviceSecure.c)
 *     MonitorInitializeGlobal @ 0x1C0172FC4 (MonitorInitializeGlobal.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C02422E8 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkCleanupPower @ 0x1C029E518 (DxgkCleanupPower.c)
 *     ?LPMDisplayInitializeGlobal@@YAJXZ @ 0x1C02D5078 (-LPMDisplayInitializeGlobal@@YAJXZ.c)
 *     DpiInitializeGlobalState @ 0x1C02D5654 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS ProcessNotifyRoutine; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int8 v9; // al
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  ETWENABLECALLBACK *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v25; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rcx
  int v29; // eax
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  NTSTATUS v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  PVOID v49; // rcx
  __int64 v50; // rcx
  const GUID *v51; // r8
  int DeviceCharacteristics; // [rsp+28h] [rbp-E0h]
  BOOLEAN Exclusive; // [rsp+30h] [rbp-D8h]
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A8h]
  __int64 v56; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING DefaultSDDLString; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v59[3]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-60h] BYREF
  int v61; // [rsp+B0h] [rbp-58h]
  const wchar_t *v62; // [rsp+B8h] [rbp-50h]
  unsigned __int8 *v63; // [rsp+C0h] [rbp-48h]
  int v64; // [rsp+C8h] [rbp-40h]
  unsigned __int8 *v65; // [rsp+D0h] [rbp-38h]
  int v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  int v68; // [rsp+E8h] [rbp-20h]
  _BYTE v69[40]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 SystemInformation; // [rsp+138h] [rbp+30h] BYREF

  g_pDriverObject = DriverObject;
  ProcessNotifyRoutine = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 0);
  v7 = ProcessNotifyRoutine;
  if ( ProcessNotifyRoutine < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v9 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v9 = 0;
  }
  g_OSTestSigningEnabled = v9;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_DxgkrnlPrereleaseDiagnostic__private_propertyCache,
    9011807LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006BDC0,
    0,
    DeviceCharacteristics);
  v60 = 0LL;
  v61 = 288;
  v62 = L"IsInternalRelease";
  v64 = 67108868;
  v63 = &g_IsInternalRelease;
  v65 = &g_IsInternalRelease;
  v66 = 4;
  v67 = 0LL;
  v68 = 0;
  memset(v69, 0, sizeof(v69));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v60, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  g_bSkuSupportMultipleUsers = (RtlGetSuiteMask() & 0x110) == 16;
  WdInitialize();
  result = DpiInitializeGlobalState();
  if ( result >= 0 )
  {
    result = DXGGLOBAL::CreateGlobal(v12, v11);
    if ( result >= 0 )
    {
      result = CCD_BTL::CreateGlobal(v14, v13);
      if ( result >= 0 )
      {
        DxgkInitializeTelemetry();
        v15 = ExSubscribeWnfStateChange(
                &gScreenStudyEventSubscription,
                &WNF_SRUM_SCREENONSTUDY_SESSION,
                1LL,
                0LL,
                WnfScreenOnCallback,
                0LL);
        v19 = v15;
        if ( v15 < 0 )
        {
          v20 = WdLogNewEntry5_WdError(v17, v16, v18);
          *(_QWORD *)(v20 + 24) = v19;
          WdLogEvent5_WdError(v20);
          gScreenStudyEventSubscription = 0LL;
        }
        bTracingEnabled = 0;
        McGenEventRegister(&DxgkControlGuid, v16, &DxgkControlGuid_Context, &DxgkControlGuid_Context);
        LODWORD(v54) = -1;
        v55 = 0LL;
        if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
        {
          LOBYTE(v56) = 1;
          LODWORD(v54) = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v22, &EventProfilerEnter, v23, 0);
        }
        else
        {
          LOBYTE(v56) = 0;
        }
        if ( KeGetCurrentIrql() < 2u )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v25 = WdLogNewEntry5_WdAssertion(v22, v21);
            *(_QWORD *)(v25 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v25);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v21);
          if ( CurrentProcessSessionId
            && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
            && !IsThreadCrossSessionAttached()
            && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
            && *(_QWORD *)ThreadWin32Thread )
          {
            v28 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
          }
          else
          {
            v28 = 0LL;
          }
          v55 = v28;
          if ( v28 )
          {
            v29 = *(_DWORD *)(v28 + 140);
            if ( !v29 )
            {
              *(_DWORD *)(v28 + 144) = 0;
              v29 = 0;
            }
            *(_DWORD *)(v28 + 140) = v29 + 1;
          }
        }
        v59[0] = &DxgkControlGuid;
        v59[1] = &Dxgk_WDI_NotifyUser;
        WdDiagInit(v59);
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
        DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
        DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)DxgkDeviceIoctl;
        DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
        *(_QWORD *)&DefaultSDDLString.Length = 0LL;
        DefaultSDDLString.Buffer = 0LL;
        RtlInitUnicodeString(
          &DefaultSDDLString,
          L"D:P(A;;GRGW;;;S-1-5-83-0)(A;;GRGW;;;S-1-15-3-1024-2268835264-3721307629-241982045-173645152-1490879176-1046434"
           "41-2915960892-1612460704)");
        v30 = WdmlibIoCreateDeviceSecure(
                DriverObject,
                0,
                &DestinationString,
                0x22u,
                0x100u,
                Exclusive,
                &DefaultSDDLString,
                &GUID_SD_DXGKRNL_DRIVER_OBJECT,
                (PDEVICE_OBJECT *)&g_pDeviceObject);
        v34 = v30;
        if ( v30 < 0
          || (v36 = DxgkInitialPower(), v34 = v36, v36 < 0)
          || (v37 = MonitorInitializeGlobal(v32, v31), v34 = v37, v37 < 0)
          || (v38 = LPMDisplayInitializeGlobal(), v34 = v38, v38 < 0) )
        {
          v35 = WdLogNewEntry5_WdWarning(v32, v31, v33);
          *(_QWORD *)(v35 + 24) = v34;
          WdLogEvent5_WdWarning(v35);
        }
        else
        {
          DxgkInitIoMmu();
          DxgDbgInit(v40, v39);
          TdrInit();
          v41 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
          v34 = v41;
          if ( v41 >= 0 )
          {
            LODWORD(v34) = 0;
LABEL_40:
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v42);
            if ( (_BYTE)v56 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v50, &EventProfilerExit, v51, v54);
            }
            return v34;
          }
          v45 = WdLogNewEntry5_WdError(v43, v42, v44);
          *(_QWORD *)(v45 + 24) = v34;
          WdLogEvent5_WdError(v45);
        }
        DxgkCleanupPower();
        MonitorCleanupGlobal(v47, v46);
        v49 = g_pDeviceObject;
        if ( g_pDeviceObject )
        {
          IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
          g_pDeviceObject = 0LL;
        }
        DXGGLOBAL::DestroyGlobal((__int64)v49, v48);
        goto LABEL_40;
      }
    }
  }
  return result;
}
