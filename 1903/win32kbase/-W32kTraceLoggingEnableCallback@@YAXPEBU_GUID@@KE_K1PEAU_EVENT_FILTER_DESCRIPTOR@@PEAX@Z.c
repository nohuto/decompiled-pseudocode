/*
 * XREFs of ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00A9760
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01C8544 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall W32kTraceLoggingEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // [rsp+30h] [rbp-A1h] BYREF
  int v38; // [rsp+34h] [rbp-9Dh] BYREF
  int v39; // [rsp+38h] [rbp-99h] BYREF
  ULONGLONG v40; // [rsp+40h] [rbp-91h]
  __int64 v41; // [rsp+48h] [rbp-89h]
  unsigned __int8 v42; // [rsp+50h] [rbp-81h]
  GUID ActivityId; // [rsp+54h] [rbp-7Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-69h] BYREF
  int *v45; // [rsp+88h] [rbp-49h]
  int v46; // [rsp+90h] [rbp-41h]
  int v47; // [rsp+94h] [rbp-3Dh]
  EVENT_DATA_DESCRIPTOR v48; // [rsp+98h] [rbp-39h] BYREF
  int *v49; // [rsp+B8h] [rbp-19h]
  int v50; // [rsp+C0h] [rbp-11h]
  int v51; // [rsp+C4h] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR v52; // [rsp+C8h] [rbp-9h] BYREF
  int *v53; // [rsp+E8h] [rbp+17h]
  int v54; // [rsp+F0h] [rbp+1Fh]
  int v55; // [rsp+F4h] [rbp+23h]

  if ( ControlCode == 2 )
  {
    v4 = MatchAnyKeyword;
    v40 = MatchAnyKeyword;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(SourceId);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v42 = 1;
      v8 = PsGetCurrentThreadWin32Thread(v6);
      v41 = v8;
      if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v47 = 0;
            v37 = v42;
            v45 = &v37;
            v46 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v41 = 0LL;
    }
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v9 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v9 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v41 && (*(_DWORD *)(v41 + 48) || *(int *)(v41 + 24) > 0) )
    {
      *(_DWORD *)(v41 + 44) = 1;
      *(GUID *)(v41 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v51 = 0;
          v38 = v42;
          v49 = &v38;
          v50 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v48);
          v16 = dword_1C020FB50;
        }
        if ( v16 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v55 = 0;
          v39 = v42;
          v53 = &v39;
          v54 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v52);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v17, v18);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v29 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v29[2];
          v30 = *v29;
          v29[2] = 0LL;
          if ( !*(_DWORD *)(v30 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
          v33 = (PERESOURCE *)GetDomainLockRef(12LL, v26, v28);
          if ( v33 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34);
          ExReleaseResourceAndLeaveCriticalRegion(*v33);
          HMUnlockObject(*v29);
          tagDomLock::LockExclusive(v33);
          v29 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v4 = v40;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    CitEtwEnableCallback(SourceId, 2u, v4);
    UserSessionSwitchLeaveCrit(v36, v35);
  }
}
