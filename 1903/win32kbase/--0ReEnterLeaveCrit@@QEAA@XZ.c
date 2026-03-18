/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C002C3B8
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C0018460 (GreCreateCompatibleDC.c)
 *     UserDeleteW32Thread @ 0x1C0036B60 (UserDeleteW32Thread.c)
 *     UserGetDesktopDC @ 0x1C003E02C (UserGetDesktopDC.c)
 *     UserDeleteW32Process @ 0x1C008BB60 (UserDeleteW32Process.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0098840 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C009DEA0 (ResetAccessibilityCountersOnMouseInput.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  ReEnterLeaveCrit *v1; // r14
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rsi
  __int64 v25; // rax
  unsigned int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *v30; // rdi
  __int64 v31; // r8
  int v32; // [rsp+30h] [rbp-89h] BYREF
  int v33; // [rsp+34h] [rbp-85h] BYREF
  int v34; // [rsp+38h] [rbp-81h] BYREF
  ReEnterLeaveCrit *v35; // [rsp+40h] [rbp-79h]
  __int64 v36; // [rsp+48h] [rbp-71h]
  unsigned __int8 v37; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-51h] BYREF
  int *v40; // [rsp+88h] [rbp-31h]
  int v41; // [rsp+90h] [rbp-29h]
  int v42; // [rsp+94h] [rbp-25h]
  EVENT_DATA_DESCRIPTOR v43; // [rsp+98h] [rbp-21h] BYREF
  int *v44; // [rsp+B8h] [rbp-1h]
  int v45; // [rsp+C0h] [rbp+7h]
  int v46; // [rsp+C4h] [rbp+Bh]
  EVENT_DATA_DESCRIPTOR v47; // [rsp+C8h] [rbp+Fh] BYREF
  int *v48; // [rsp+E8h] [rbp+2Fh]
  int v49; // [rsp+F0h] [rbp+37h]
  int v50; // [rsp+F4h] [rbp+3Bh]

  v1 = this;
  v35 = this;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)v1 = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v37 = 1;
      v25 = PsGetCurrentThreadWin32Thread();
      v36 = v25;
      if ( v25 && (*(int *)(v25 + 24) > 0 || *(_DWORD *)(v36 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v42 = 0;
            v32 = v37;
            v40 = &v32;
            v41 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v36 = 0LL;
    }
    v4 = 0LL;
    while ( 1 )
    {
      v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v5 )
        v4 = *v5;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v4 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v36 && (*(_DWORD *)(v36 + 48) || *(int *)(v36 + 24) > 0) )
    {
      *(_DWORD *)(v36 + 44) = 1;
      *(GUID *)(v36 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v46 = 0;
          v33 = v37;
          v44 = &v33;
          v45 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v43);
          v26 = dword_1C020FB50;
        }
        if ( v26 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v50 = 0;
          v34 = v37;
          v48 = &v34;
          v49 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v47);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v4;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v11, v12);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v16);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v23 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v23[2];
          v27 = *v23;
          v23[2] = 0LL;
          if ( !*(_DWORD *)(v27 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
          v30 = (PERESOURCE *)GetDomainLockRef(12LL, v20, v22);
          if ( v30 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31);
          ExReleaseResourceAndLeaveCriticalRegion(*v30);
          HMUnlockObject(*v23);
          tagDomLock::LockExclusive(v30);
          v23 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v35;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v1;
}
