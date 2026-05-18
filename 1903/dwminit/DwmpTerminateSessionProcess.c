/*
 * XREFs of DwmpTerminateSessionProcess @ 0x180003390
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001090 (_TlgWrite.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x1800012BC (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001410 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?IsRunningInWininit@@YA_NXZ @ 0x1800014F4 (-IsRunningInWininit@@YA_NXZ.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001CF4 (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800022F8 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800038E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     DwmpRequestProcessShutdown @ 0x180003E4C (DwmpRequestProcessShutdown.c)
 *     __security_check_cookie @ 0x180005060 (__security_check_cookie.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180005F44 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 */

__int64 __fastcall DwmpTerminateSessionProcess(int a1)
{
  int v1; // eax
  int v2; // eax
  bool v3; // al
  TraceLoggingHProvider v4; // rcx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 v7; // rdx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v8; // rcx
  __int64 v9; // r8
  const GUID *v10; // r9
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-61h]
  bool v13; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-55h] BYREF
  DWORD ExitCode; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-49h] BYREF
  GUID *v17; // [rsp+60h] [rbp-29h]
  int v18; // [rsp+68h] [rbp-21h]
  int v19; // [rsp+6Ch] [rbp-1Dh]
  unsigned int *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  int *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  bool *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]
  GUID *v29; // [rsp+A0h] [rbp+17h]
  int v30; // [rsp+A8h] [rbp+1Fh]
  int v31; // [rsp+ACh] [rbp+23h]
  unsigned __int16 *v32; // [rsp+B0h] [rbp+27h]
  int v33; // [rsp+B8h] [rbp+2Fh]
  int v34; // [rsp+BCh] [rbp+33h]
  unsigned __int16 *v35; // [rsp+C0h] [rbp+37h]
  int v36; // [rsp+C8h] [rbp+3Fh]
  int v37; // [rsp+CCh] [rbp+43h]
  int v38; // [rsp+F0h] [rbp+67h] BYREF

  v38 = a1;
  ExitCode = 0;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18000B768 = GetCurrentThreadId();
  if ( ghDwmProcess )
  {
    v1 = DwmpRequestProcessShutdown();
    v14 = v1;
    if ( v1 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180008014, 1u, v1, 0x692u, pData);
    WaitForDwmExit(&ExitCode, 0LL);
  }
  v2 = UnmapDwmVirtualAccount();
  v14 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180008014, 1u, v2, 0x697u, pData);
  }
  else if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
  {
    DwmMonitorExtCleanup();
  }
  dword_18000B768 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( (unsigned int)dword_18000B000 > 5
    && (qword_18000B010 & 0x400000000000LL) != 0
    && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &gDwmInitTelemetryActivityId;
    v20 = &v14;
    v23 = &v38;
    v18 = 16;
    v21 = 4;
    v24 = 4;
    v3 = IsRunningInWininit();
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v13 = v3;
    v26 = &v13;
    v29 = &gDwmInitTargetAppSessionGuid;
    v32 = &gBootId;
    v35 = &gSessionId;
    v27 = 1;
    v30 = 16;
    v33 = 2;
    v36 = 2;
    TlgWrite(v4, &unk_180008783, v5, v6, 9u, &v16);
  }
  TraceLoggingWriteEtw((const struct _TlgProvider_t *)9, v14, 0LL);
  _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v8, v7, v9, v10);
  return v14;
}
