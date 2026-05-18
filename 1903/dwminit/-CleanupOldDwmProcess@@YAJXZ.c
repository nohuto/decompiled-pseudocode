/*
 * XREFs of ?CleanupOldDwmProcess@@YAJXZ @ 0x1800026E8
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002AE0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001090 (_TlgWrite.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001170 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x1800012BC (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001410 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z @ 0x180002298 (-GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800022F8 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000261C (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x180003790 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x180003ED4 (DwmpSignalSessionShutdown.c)
 *     __security_check_cookie @ 0x180005060 (__security_check_cookie.c)
 *     memset_0 @ 0x1800059F6 (memset_0.c)
 */

__int64 CleanupOldDwmProcess(void)
{
  char restarted; // bl
  int v1; // eax
  __int64 v2; // rdx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v3; // rcx
  HANDLE v4; // rdi
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // eax
  wchar_t *v8; // rcx
  int v9; // eax
  wchar_t *v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rdx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  DWORD ExitCode[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _FILETIME ExitTime; // [rsp+60h] [rbp-A8h] BYREF
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3B8h] [rbp+2B0h] BYREF
  GUID *v21; // [rsp+3D8h] [rbp+2D0h]
  __int64 v22; // [rsp+3E0h] [rbp+2D8h]
  DWORD *v23; // [rsp+3E8h] [rbp+2E0h]
  __int64 v24; // [rsp+3F0h] [rbp+2E8h]
  int *v25; // [rsp+3F8h] [rbp+2F0h]
  __int64 v26; // [rsp+400h] [rbp+2F8h]
  GUID *v27; // [rsp+408h] [rbp+300h]
  __int64 v28; // [rsp+410h] [rbp+308h]
  unsigned __int16 *v29; // [rsp+418h] [rbp+310h]
  __int64 v30; // [rsp+420h] [rbp+318h]
  unsigned __int16 *v31; // [rsp+428h] [rbp+320h]
  __int64 v32; // [rsp+430h] [rbp+328h]
  LPCWSTR Strings[3]; // [rsp+438h] [rbp+330h] BYREF
  wchar_t Buffer[12]; // [rsp+450h] [rbp+348h] BYREF
  wchar_t v35[12]; // [rsp+468h] [rbp+360h] BYREF

  ExitCode[0] = 0;
  ExitTime = 0LL;
  restarted = 1;
  v1 = WaitForDwmExit(ExitCode, &ExitTime);
  ExitCode[1] = v1;
  if ( v1 < 0 )
  {
    DoStackCaptureDirect(v1, 0x438u);
  }
  else
  {
    restarted = ShouldRestartSession(ExitTime);
    v4 = RegisterEventSourceW(0LL, L"Dwminit");
    if ( v4 )
    {
      memset_0(&DisplayDevice, 0, sizeof(DisplayDevice));
      v7 = StringCchPrintfW(Buffer, 11LL, L"0x%08x", ExitCode[0]);
      v8 = Buffer;
      if ( v7 < 0 )
        v8 = 0LL;
      Strings[0] = v8;
      v9 = StringCchPrintfW(v35, 12LL, L"%i", (unsigned int)gDwmNumRetriesSoFar);
      v10 = v35;
      if ( v9 < 0 )
        v10 = 0LL;
      Strings[1] = v10;
      Strings[2] = (LPCWSTR)((unsigned __int64)DisplayDevice.DeviceString & -(__int64)(GetPrimaryDisplayDeviceInfo(&DisplayDevice) != 0));
      ReportEventW(v4, 2u, 0, 0x80020000, 0LL, 3u, 0, Strings, 0LL);
      DeregisterEventSource(v4);
    }
    ++gDwmInitTelemetryAggregator;
    if ( ++dword_18000B758 > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v3, v2, (__int64)v5, v6);
      dword_18000B758 = 0;
    }
    if ( (unsigned int)dword_18000B000 > 5
      && (qword_18000B010 & 0x400000000000LL) != 0
      && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
    {
      v21 = &gDwmInitTelemetryActivityId;
      v23 = ExitCode;
      v25 = &gDwmNumRetriesSoFar;
      v27 = &gDwmInitTargetAppSessionGuid;
      v29 = &gBootId;
      v31 = &gSessionId;
      v22 = 16LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 16LL;
      v30 = 2LL;
      v32 = 2LL;
      TlgWrite(v3, &unk_180008649, v5, v6, 8u, &pData);
    }
    v11 = LOWORD(ExitCode[0]) | 0x80070000;
    if ( (int)ExitCode[0] <= 0 )
      v11 = ExitCode[0];
    TraceLoggingWriteEtw(0LL, v11, (const GUID *)(unsigned int)gDwmNumRetriesSoFar);
  }
  if ( restarted )
  {
    DwmpSignalSessionShutdown();
    ++dword_18000B750;
    ExitCode[1] = -2147467259;
    if ( ++dword_18000B758 > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v13, v12, (__int64)v14, v15);
      dword_18000B758 = 0;
    }
    if ( (unsigned int)dword_18000B000 > 5
      && (qword_18000B010 & 0x400000000000LL) != 0
      && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
    {
      v21 = &gDwmInitTelemetryActivityId;
      v23 = &ExitCode[1];
      v25 = &gDwmNumRetriesSoFar;
      v27 = &gDwmInitTargetAppSessionGuid;
      v29 = &gBootId;
      v31 = &gSessionId;
      v22 = 16LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 16LL;
      v30 = 2LL;
      v32 = 2LL;
      TlgWrite(v13, &unk_180008904, v14, v15, 8u, &pData);
    }
    _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v13, v12, (__int64)v14, v15);
    TraceLoggingWriteEtw((const struct _TlgProvider_t *)3, ExitCode[1], (const GUID *)(unsigned int)gDwmNumRetriesSoFar);
  }
  return ExitCode[1];
}
