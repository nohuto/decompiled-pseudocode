/*
 * XREFs of ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B10
 * Callers:
 *     DwmpCreateSessionProcess @ 0x180002F80 (DwmpCreateSessionProcess.c)
 * Callees:
 *     _TlgWrite @ 0x180001090 (_TlgWrite.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x1800012CC (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001420 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?WaitForLsa@@YAJXZ @ 0x1800018D4 (-WaitForLsa@@YAJXZ.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001A78 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001DA4 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002714 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x18000375C (-DoStackCapture@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x180003F40 (DwmpSignalSessionShutdown.c)
 *     __security_check_cookie @ 0x1800050C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180005A56 (memset_0.c)
 *     IsWaitForInputIdlePresent @ 0x180005C78 (IsWaitForInputIdlePresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180005E38 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180005FA4 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 */

__int64 __fastcall DwmpCreateSessionProcessWorker(PVOID Parameter)
{
  unsigned int v1; // edi
  HANDLE v2; // rbx
  int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  signed int LastError; // eax
  signed int v7; // ecx
  __int64 v8; // rdx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // eax
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+68h] [rbp-98h] BYREF
  HANDLE hToken; // [rsp+80h] [rbp-80h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  GUID *v19; // [rsp+120h] [rbp+20h]
  __int64 v20; // [rsp+128h] [rbp+28h]
  int *v21; // [rsp+130h] [rbp+30h]
  __int64 v22; // [rsp+138h] [rbp+38h]
  GUID *v23; // [rsp+140h] [rbp+40h]
  __int64 v24; // [rsp+148h] [rbp+48h]
  unsigned __int16 *v25; // [rsp+150h] [rbp+50h]
  __int64 v26; // [rsp+158h] [rbp+58h]
  unsigned __int16 *v27; // [rsp+160h] [rbp+60h]
  __int64 v28; // [rsp+168h] [rbp+68h]

  v1 = (unsigned int)Parameter;
  v14 = 0;
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  memset_0(&StartupInfo, 0, sizeof(StartupInfo));
  StartupInfo.cb = 104;
  v2 = 0LL;
  StartupInfo.lpDesktop = L"Winsta0\\Default";
  hToken = 0LL;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18000B770 = GetCurrentThreadId();
  if ( v1 && (!ghDwmProcess || GetProcessId(ghDwmProcess) != v1) )
  {
    v14 = 1;
    goto LABEL_34;
  }
  if ( ghDwmProcess )
  {
    v3 = CleanupOldDwmProcess();
    v14 = v3;
    if ( v3 < 0 )
    {
      v4 = 1220;
LABEL_32:
      v7 = v3;
LABEL_33:
      DoStackCapture(v7, v4);
      goto LABEL_34;
    }
  }
  if ( gDwmFirstLaunch )
  {
    v3 = WaitForLsa();
    v14 = v3;
    if ( v3 < 0 )
    {
      v4 = 1235;
      goto LABEL_32;
    }
    if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
      DwmMonitorExtInitialize();
  }
  if ( (unsigned __int8)IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(1LL);
  v3 = MapDwmVirtualAccountAndAdjustPrivileges();
  v14 = v3;
  if ( v3 < 0 )
  {
    v4 = 1253;
    goto LABEL_32;
  }
  v5 = LogonDwmAccountAndSetTokenIntegrityLevel(&hToken);
  v14 = v5;
  if ( v5 < 0 )
  {
    DoStackCapture(v5, 0x4E8u);
    v2 = hToken;
    goto LABEL_34;
  }
  SetLastError(0);
  v2 = hToken;
  if ( !CreateProcessAsUserW(
          hToken,
          L"dwm.exe",
          0LL,
          0LL,
          0LL,
          0,
          0x4000420u,
          0LL,
          0LL,
          &StartupInfo,
          &ProcessInformation) )
  {
    LastError = GetLastError();
    v4 = 1276;
    v7 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v7 = LastError;
    if ( v7 >= 0 )
      v7 = -2003304445;
    v14 = v7;
    goto LABEL_33;
  }
  if ( ProcessInformation.hProcess )
  {
    if ( (unsigned __int8)IsWaitForInputIdlePresent() )
      WaitForInputIdle(ProcessInformation.hProcess, 0xFFFFFFFF);
    if ( WaitForSingleObject(ProcessInformation.hProcess, 0) )
    {
      ghDwmProcess = ProcessInformation.hProcess;
      ProcessInformation.hProcess = 0LL;
      if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
        DwmMonitorExtDwmProcessCreated(ghDwmProcess);
    }
    else
    {
      v14 = -2147467259;
      TraceLoggingWriteEtw((const struct _TlgProvider_t *)4, -2147467259, 0LL);
      DwmpSignalSessionShutdown();
    }
  }
LABEL_34:
  gDwmFirstLaunch = 0;
  if ( ProcessInformation.hProcess )
  {
    CloseHandle(ProcessInformation.hProcess);
    ProcessInformation.hProcess = 0LL;
  }
  if ( ProcessInformation.hThread )
  {
    CloseHandle(ProcessInformation.hThread);
    ProcessInformation.hThread = 0LL;
  }
  if ( v2 )
    CloseHandle(v2);
  if ( (unsigned __int8)IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(0LL);
  if ( v14 < 0 )
  {
    ++dword_18000B75C;
    if ( ++dword_18000B760 > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v9, v8, (__int64)v10, v11);
      dword_18000B760 = 0;
    }
    if ( (unsigned int)dword_18000B000 > 5 )
    {
      v8 = 0x400000000000LL;
      if ( (qword_18000B010 & 0x400000000000LL) != 0 && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
      {
        v20 = 16LL;
        v19 = &gDwmInitTelemetryActivityId;
        v21 = &v14;
        v23 = &gDwmInitTargetAppSessionGuid;
        v25 = &gBootId;
        v27 = &gSessionId;
        v22 = 4LL;
        v24 = 16LL;
        v26 = 2LL;
        v28 = 2LL;
        TlgWrite(v9, &unk_180008658, v10, v11, 7u, &pData);
      }
    }
    _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v9, v8, (__int64)v10, v11);
    TraceLoggingWriteEtw((const struct _TlgProvider_t *)2, v14, 0LL);
  }
  dword_18000B770 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  v12 = v14;
  if ( v14 < 0 )
  {
    DwmpSignalSessionShutdown();
    v12 = v14;
    if ( v14 < 0 )
    {
      DoStackCapture(v14, 0x58Du);
      v12 = v14;
    }
  }
  TraceLoggingWriteEtw((const struct _TlgProvider_t *)0xA, v12, (const GUID *)v1);
  return 0LL;
}
