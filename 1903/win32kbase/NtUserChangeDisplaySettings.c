/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C004AD90
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
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     DrvLogDiagDisplayChange @ 0x1C004ACE0 (DrvLogDiagDisplayChange.c)
 *     xxxUserChangeDisplaySettings @ 0x1C004B020 (xxxUserChangeDisplaySettings.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rsi
  struct tagTHREADINFO *v32; // rdx
  int v33; // eax
  unsigned int v34; // ebx
  __int64 v36; // rax
  unsigned int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  PERESOURCE *v41; // rdi
  __int64 v42; // r8
  __int64 v43; // rcx
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h]
  __int64 v49; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v50; // [rsp+68h] [rbp-98h]
  GUID pActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  _QWORD v52[10]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v56; // [rsp+100h] [rbp+0h] BYREF
  int *v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR v59; // [rsp+130h] [rbp+30h] BYREF
  int *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]

  v48 = a4;
  v7 = a4;
  memset(v52, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v52[1]);
  v47[1] = -1;
  v52[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v52[3]) = 26;
  LOBYTE(v52[6]) = -1;
  v47[0] = 0x2000;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&pActivityId.Data1 = 0LL;
  *(_QWORD *)pActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v50 = 1;
    v36 = PsGetCurrentThreadWin32Thread(v9);
    v49 = v36;
    if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v49 + 48)) )
    {
      EtwActivityIdControl(3u, &pActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v44 = v50;
          v54 = &v44;
          v55 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &pActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v49 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
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
    *(GUID *)(v49 + 28) = pActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v45 = v50;
        v57 = &v45;
        v58 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &pActivityId, 0LL, 3u, &v56);
        v37 = dword_1C020FB50;
      }
      if ( v37 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v46 = v50;
        v60 = &v46;
        v61 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &pActivityId, 0LL, 3u, &v59);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v18, v20);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v31 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v31[2];
        v38 = *v31;
        v31[2] = 0LL;
        if ( !*(_DWORD *)(v38 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
        v41 = (PERESOURCE *)GetDomainLockRef(12LL, v28, v30);
        if ( v41 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v42);
        ExReleaseResourceAndLeaveCriticalRegion(*v41);
        HMUnlockObject(*v31);
        tagDomLock::LockExclusive(v41);
        v31 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v7 = v48;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  if ( gbVideoInitialized )
  {
    v32 = gptiCurrent;
    if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
      v33 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL) + 24LL) & 0x10;
    else
      v33 = 0;
    if ( (v33 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v47, 0)) && a3 != 34 )
    {
      v43 = 5LL;
LABEL_58:
      v34 = -1;
      UserSetLastError(v43, (__int64)v32);
      goto LABEL_27;
    }
    if ( (a3 & 0x8000000) != 0 )
    {
      v43 = 87LL;
      goto LABEL_58;
    }
    DrvLogDiagDisplayChange(0LL, 8);
    v34 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, v7, 1, v52);
  }
  else
  {
    v34 = -1;
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v19, v18);
  return v34;
}
