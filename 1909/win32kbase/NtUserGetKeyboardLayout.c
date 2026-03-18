/*
 * XREFs of NtUserGetKeyboardLayout @ 0x1C002DB30
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _GetKeyboardLayout @ 0x1C002DDE0 (_GetKeyboardLayout.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetKeyboardLayout(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rcx
  LARGE_INTEGER *v3; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 KeyboardLayout; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v17; // rsi
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  PERESOURCE *v43; // rdi
  __int64 v44; // r8
  int v45; // [rsp+38h] [rbp-D0h] BYREF
  int v46; // [rsp+3Ch] [rbp-CCh] BYREF
  int v47; // [rsp+40h] [rbp-C8h] BYREF
  int v48; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v49; // [rsp+48h] [rbp-C0h]
  unsigned __int8 pActivityId_4; // [rsp+50h] [rbp-B8h]
  GUID pActivityId_8; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v52; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v53; // [rsp+70h] [rbp-98h]
  GUID ActivityId; // [rsp+74h] [rbp-94h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  int *v56; // [rsp+A8h] [rbp-60h]
  __int64 v57; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v58; // [rsp+B8h] [rbp-50h] BYREF
  int *v59; // [rsp+D8h] [rbp-30h]
  __int64 v60; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v61; // [rsp+E8h] [rbp-20h] BYREF
  int *v62; // [rsp+108h] [rbp+0h]
  __int64 v63; // [rsp+110h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR v64; // [rsp+118h] [rbp+10h] BYREF
  int *v65; // [rsp+138h] [rbp+30h]
  __int64 v66; // [rsp+140h] [rbp+38h]

  v1 = a1;
  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&pActivityId_8.Data1 = 0LL;
    *(_QWORD *)pActivityId_8.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      pActivityId_4 = 1;
      v38 = PsGetCurrentThreadWin32Thread(v15);
      v49 = v38;
      if ( v38 && (*(int *)(v38 + 24) > 0 || *(_DWORD *)(v49 + 48)) )
      {
        EtwActivityIdControl(3u, &pActivityId_8);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v46 = pActivityId_4;
            v59 = &v46;
            v60 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &pActivityId_8, 0LL, 3u, &v58);
          }
        }
      }
    }
    else
    {
      v49 = 0LL;
    }
    v17 = 0LL;
    while ( 1 )
    {
      v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v18 )
        v17 = *v18;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v20, v19);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v23, v22) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v17 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v49 && (*(_DWORD *)(v49 + 48) || *(int *)(v49 + 24) > 0) )
    {
      *(_DWORD *)(v49 + 44) = 1;
      *(GUID *)(v49 + 28) = pActivityId_8;
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v47 = pActivityId_4;
          v62 = &v47;
          v63 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &pActivityId_8, 0LL, 3u, &v61);
          v39 = dword_1C020CB50;
        }
        if ( v39 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v48 = pActivityId_4;
          v65 = &v48;
          v66 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &pActivityId_8, 0LL, 3u, &v64);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v17;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v24, v25);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v29);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v36 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v40 = *v36;
        v36[2] = 0LL;
        if ( !*(_DWORD *)(v40 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
        v43 = (PERESOURCE *)GetDomainLockRef(12LL, v33, v35);
        if ( v43 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v44);
        ExReleaseResourceAndLeaveCriticalRegion(*v43);
        HMUnlockObject(*v36);
        tagDomLock::LockExclusive(v43);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  else
  {
    v3 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v3 )
      v3[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v53 = 0;
      v37 = PsGetCurrentThreadWin32Thread(v2);
      v52 = v37;
      if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(v52 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v45 = v53;
            v56 = &v45;
            v57 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v52 = 0LL;
    }
    v4 = 0LL;
    while ( 1 )
    {
      v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v5 )
        v4 = *v5;
      v8 = (PVOID)PsGetCurrentProcess(v7, v6);
      if ( v8 )
      {
        if ( v8 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v4 == gptiRit )
      {
        break;
      }
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v52);
    EtwTraceAcquiredSharedUserCrit();
  }
  KeyboardLayout = GetKeyboardLayout(v1);
  UserSessionSwitchLeaveCrit(v13, v12);
  return KeyboardLayout;
}
