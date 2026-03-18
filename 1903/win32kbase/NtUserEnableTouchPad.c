/*
 * XREFs of NtUserEnableTouchPad @ 0x1C01173E0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     CheckAccessEx @ 0x1C002C1F4 (CheckAccessEx.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002EACC (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002EB20 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     EtwTraceUIPISystemError @ 0x1C00722D0 (EtwTraceUIPISystemError.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     EnablePTPDevices @ 0x1C0109E50 (EnablePTPDevices.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnableTouchPad(__int64 a1)
{
  int v1; // r15d
  int v2; // esi
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *v30; // rdi
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v36; // [rsp+38h] [rbp-D0h] BYREF
  int v37; // [rsp+3Ch] [rbp-CCh] BYREF
  int v38; // [rsp+40h] [rbp-C8h] BYREF
  int v39; // [rsp+44h] [rbp-C4h]
  int v40[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *v46; // [rsp+98h] [rbp-70h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR v48; // [rsp+A8h] [rbp-60h] BYREF
  int *v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+D8h] [rbp-30h] BYREF
  int *v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]

  v1 = a1;
  v39 = a1;
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId_8.Data1 = 0LL;
  *(_QWORD *)ActivityId_8.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v42 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v36 = ActivityId_4;
          v46 = &v36;
          v47 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId_8, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v42 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v42 && (*(_DWORD *)(v42 + 48) || *(int *)(v42 + 24) > 0) )
  {
    *(_DWORD *)(v42 + 44) = 1;
    *(GUID *)(v42 + 28) = ActivityId_8;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v37 = ActivityId_4;
        v49 = &v37;
        v50 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId_8, 0LL, 3u, &v48);
        v13 = dword_1C020FB50;
      }
      if ( v13 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v38 = ActivityId_4;
        v52 = &v38;
        v53 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId_8, 0LL, 3u, &v51);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v14, v15);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v26 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v26[2];
        v27 = *v26;
        v26[2] = 0LL;
        if ( !*(_DWORD *)(v27 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
        v30 = (PERESOURCE *)GetDomainLockRef(12LL, v23, v25);
        if ( v30 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31);
        ExReleaseResourceAndLeaveCriticalRegion(*v30);
        HMUnlockObject(*v26);
        tagDomLock::LockExclusive(v30);
        v26 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v39;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v41);
  v40[1] = -1;
  v40[0] = 12288;
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v40, 0) )
  {
    LOBYTE(v2) = v1 != 0;
    v2 = EnablePTPDevices(v2);
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 52), 0LL);
    UserSetLastError(5LL, v32);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v41);
  UserSessionSwitchLeaveCrit(v34, v33);
  return v2;
}
