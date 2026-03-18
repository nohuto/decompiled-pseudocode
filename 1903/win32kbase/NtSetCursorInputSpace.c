/*
 * XREFs of NtSetCursorInputSpace @ 0x1C0116010
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
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?CheckCapability@@YAJPEBG@Z @ 0x1C0112F44 (-CheckCapability@@YAJPEBG@Z.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C0187C74 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtSetCursorInputSpace(struct _LUID a1)
{
  struct _LUID v1; // rsi
  __int64 v2; // r14
  __int64 v3; // rcx
  LARGE_INTEGER *v4; // rbx
  __int64 CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *v31; // rdi
  __int64 v32; // r8
  PVOID v33; // rax
  CInputConfig *v34; // rcx
  NTSTATUS v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v42; // [rsp+38h] [rbp-89h] BYREF
  int v43; // [rsp+3Ch] [rbp-85h] BYREF
  int v44; // [rsp+40h] [rbp-81h] BYREF
  struct _LUID v45; // [rsp+48h] [rbp-79h]
  __int64 v46; // [rsp+50h] [rbp-71h]
  unsigned __int8 v47; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  int *v50; // [rsp+90h] [rbp-31h]
  __int64 v51; // [rsp+98h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR v52; // [rsp+A0h] [rbp-21h] BYREF
  int *v53; // [rsp+C0h] [rbp-1h]
  __int64 v54; // [rsp+C8h] [rbp+7h]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+D0h] [rbp+Fh] BYREF
  int *v56; // [rsp+F0h] [rbp+2Fh]
  __int64 v57; // [rsp+F8h] [rbp+37h]

  v1 = a1;
  v45 = a1;
  v2 = 0LL;
  v4 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD))PsGetCurrentThreadWin32Thread)(a1);
  if ( v4 )
    v4[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v47 = 1;
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3);
    v46 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v46 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v42 = v47;
          v50 = &v42;
          v51 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v46 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v46 && (*(_DWORD *)(v46 + 48) || *(int *)(v46 + 24) > 0) )
  {
    *(_DWORD *)(v46 + 44) = 1;
    *(GUID *)(v46 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v43 = v47;
        v53 = &v43;
        v54 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v52);
        v13 = dword_1C020FB50;
      }
      if ( v13 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v44 = v47;
        v56 = &v44;
        v57 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v55);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v14, v16);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v27 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v27[2];
        v28 = *v27;
        v27[2] = 0LL;
        if ( !*(_DWORD *)(v28 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
        v31 = (PERESOURCE *)GetDomainLockRef(12LL, v24, v26);
        if ( v31 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32);
        ExReleaseResourceAndLeaveCriticalRegion(*v31);
        HMUnlockObject(*v27);
        tagDomLock::LockExclusive(v31);
        v27 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v45;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v33 = (PVOID)PsGetCurrentProcess(v15, v14);
  if ( v33 && v33 == g_pepDwm )
  {
LABEL_51:
    v35 = CInputConfig::BindMouse(v34, v1);
    if ( v35 >= 0 )
    {
      v2 = 1LL;
      goto LABEL_53;
    }
    goto LABEL_47;
  }
  v35 = CheckCapability((const unsigned __int16 *)v34);
  if ( v35 >= 0 )
  {
    v34 = (CInputConfig *)*(unsigned int *)(PsGetCurrentProcessWin32Process(v36) + 812);
    if ( ((unsigned __int8)v34 & 0x30) == 0 )
    {
      v38 = 5LL;
      goto LABEL_48;
    }
    goto LABEL_51;
  }
LABEL_47:
  v38 = RtlNtStatusToDosError(v35);
LABEL_48:
  UserSetLastError(v38, v37);
LABEL_53:
  UserSessionSwitchLeaveCrit(v40, v39);
  return v2;
}
