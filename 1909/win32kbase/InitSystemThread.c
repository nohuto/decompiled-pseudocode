/*
 * XREFs of InitSystemThread @ 0x1C00A2BA0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0106BA0 (VideoPortCalloutThread.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     InitClientInfo @ 0x1C002E9DC (InitClientInfo.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ClearAppStarting @ 0x1C00375B0 (ClearAppStarting.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  const void **v1; // r15
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // r14
  __int64 ThreadWin32Thread; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v35; // rax
  unsigned int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  PERESOURCE *v40; // rdi
  __int64 v41; // r8
  int v42; // [rsp+38h] [rbp-89h] BYREF
  int v43; // [rsp+3Ch] [rbp-85h] BYREF
  int v44; // [rsp+40h] [rbp-81h] BYREF
  const void **v45; // [rsp+48h] [rbp-79h]
  _BYTE ActivityId[28]; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  int *v48; // [rsp+90h] [rbp-31h]
  __int64 v49; // [rsp+98h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+A0h] [rbp-21h] BYREF
  int *v51; // [rsp+C0h] [rbp-1h]
  __int64 v52; // [rsp+C8h] [rbp+7h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+D0h] [rbp+Fh] BYREF
  int *v54; // [rsp+F0h] [rbp+2Fh]
  __int64 v55; // [rsp+F8h] [rbp+37h]

  v1 = a1;
  v45 = a1;
  PsGetThreadProcess(KeGetCurrentThread());
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId[12] = 0LL;
  *(_QWORD *)&ActivityId[20] = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId[8] = 1;
    v35 = PsGetCurrentThreadWin32Thread(v4);
    *(_QWORD *)ActivityId = v35;
    if ( v35 && (*(int *)(v35 + 24) > 0 || *(_DWORD *)(*(_QWORD *)ActivityId + 48LL)) )
    {
      EtwActivityIdControl(3u, (LPGUID)&ActivityId[12]);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v42 = ActivityId[8];
          v48 = &v42;
          v49 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, (LPCGUID)&ActivityId[12], 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    *(_QWORD *)ActivityId = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
    && *(_QWORD *)ActivityId
    && (*(_DWORD *)(*(_QWORD *)ActivityId + 48LL) || *(int *)(*(_QWORD *)ActivityId + 24LL) > 0) )
  {
    *(_DWORD *)(*(_QWORD *)ActivityId + 44LL) = 1;
    *(_OWORD *)(*(_QWORD *)ActivityId + 28LL) = *(_OWORD *)&ActivityId[12];
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v43 = ActivityId[8];
        v51 = &v43;
        v52 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, (LPCGUID)&ActivityId[12], 0LL, 3u, &v50);
        v36 = dword_1C020CB50;
      }
      if ( v36 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v44 = ActivityId[8];
        v54 = &v44;
        v55 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, (LPCGUID)&ActivityId[12], 0LL, 3u, &v53);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v13, v14);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v25 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v25[2];
        v37 = *v25;
        v25[2] = 0LL;
        if ( !*(_DWORD *)(v37 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
        v40 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
        if ( v40 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v41);
        ExReleaseResourceAndLeaveCriticalRegion(*v40);
        HMUnlockObject(*v25);
        tagDomLock::LockExclusive(v40);
        v25 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v45;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v27 = Win32AllocPoolWithQuota(264LL, 0x69637355u);
  *(_QWORD *)(ThreadWin32Thread + 472) = v27;
  if ( v27 )
  {
    v30 = *(_OWORD *)(ThreadWin32Thread + 384);
    v31 = *(_QWORD *)(ThreadWin32Thread + 400);
    *(_DWORD *)(ThreadWin32Thread + 480) = *(_DWORD *)(ThreadWin32Thread + 480) & 0xFFFFFFF3 | 4;
    *(_OWORD *)ActivityId = v30;
    *(_QWORD *)&ActivityId[16] = v31;
    if ( (unsigned int)InitClientInfo(ThreadWin32Thread) )
    {
      if ( v1 )
      {
        v32 = *(_QWORD *)(ThreadWin32Thread + 488);
        if ( v32 )
          Win32FreePool(v32);
        v33 = Win32AllocPoolWithQuota(*(unsigned __int16 *)v1 + 18LL, 0x78747355u);
        *(_QWORD *)(ThreadWin32Thread + 488) = v33;
        if ( v33 )
        {
          *(_QWORD *)(v33 + 8) = v33 + 16;
          memmove(*(void **)(*(_QWORD *)(ThreadWin32Thread + 488) + 8LL), v1[1], *(unsigned __int16 *)v1);
          v28 = (unsigned __int64)*(unsigned __int16 *)v1 >> 1;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 488) + 8LL) + 2 * v28) = 0;
          *(_WORD *)(*(_QWORD *)(ThreadWin32Thread + 488) + 2LL) = *(_WORD *)v1 + 2;
          **(_WORD **)(ThreadWin32Thread + 488) = *(_WORD *)v1;
        }
      }
      v29 = *(_QWORD *)(ThreadWin32Thread + 416);
      if ( v29 )
      {
        v28 = *(unsigned int *)(v29 + 12);
        if ( (v28 & 0x40) != 0 )
          ClearAppStarting(v29);
      }
    }
    else
    {
      v3 = -1073741823;
    }
  }
  else
  {
    v3 = -1073741801;
  }
  UserSessionSwitchLeaveCrit(v29, v28);
  return v3;
}
