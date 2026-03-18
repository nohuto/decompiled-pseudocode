/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0178BB0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C006D700 (-Read@CBaseInput@@QEAAJXZ.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01789C0 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(CBaseInput *this)
{
  CBaseInput *v1; // rsi
  __int64 v2; // rcx
  char v3; // r15
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v6; // rax
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // rdx
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
  __int64 *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *v31; // rdi
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // ebx
  int v43; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+34h] [rbp-CCh] BYREF
  int v45; // [rsp+38h] [rbp-C8h] BYREF
  CBaseInput *v46; // [rsp+40h] [rbp-C0h]
  LPCWSTR *v47; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v49; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR v54; // [rsp+A0h] [rbp-60h] BYREF
  int *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v57; // [rsp+D0h] [rbp-30h] BYREF
  int *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]

  v1 = this;
  v46 = this;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v47, L"OnReadNotification", 0LL);
  if ( *((int *)v1 + 8) >= 0 && (*(unsigned __int8 (__fastcall **)(CBaseInput *))(*(_QWORD *)v1 + 48LL))(v1) )
  {
    v3 = 1;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v49 = 1;
      v6 = PsGetCurrentThreadWin32Thread(v4);
      v48 = v6;
      if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v48 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v43 = v49;
            v52 = &v43;
            v53 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v48 = 0LL;
    }
    v7 = 0LL;
    while ( 1 )
    {
      v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v8 )
        v7 = *v8;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v7 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v48 && (*(_DWORD *)(v48 + 48) || *(int *)(v48 + 24) > 0) )
    {
      *(_DWORD *)(v48 + 44) = 1;
      *(GUID *)(v48 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v44 = v49;
          v55 = &v44;
          v56 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v54);
          v14 = dword_1C020FB50;
        }
        if ( v14 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v45 = v49;
          v58 = &v45;
          v59 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v57);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v7;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v15, v16);
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
        v1 = v46;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( *((int *)v1 + 8) >= 0 )
  {
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v1 + 56LL))(
      v1,
      *((_QWORD *)v1 + 8),
      *((unsigned int *)v1 + 6),
      *((unsigned int *)v1 + 10),
      *((_QWORD *)v1 + 6));
    GetDomainLockRef(13LL, v33, v34);
    if ( dword_1C0215800 == 1 )
      CBaseInput::OnInputSuppressed((void **)v1, v35, v36);
    else
      (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v1 + 64LL))(
        v1,
        *((_QWORD *)v1 + 8),
        *((unsigned int *)v1 + 6),
        *((unsigned int *)v1 + 10),
        *((_QWORD *)v1 + 6));
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v1 + 72LL))(
      v1,
      *((_QWORD *)v1 + 8),
      *((unsigned int *)v1 + 6),
      *((unsigned int *)v1 + 10),
      *((_QWORD *)v1 + 6));
    v37 = *((_QWORD *)v1 + 8);
    v38 = *((_QWORD *)v1 + 9);
    if ( v37 != v38 )
    {
      if ( (CBaseInput *)v38 != (CBaseInput *)((char *)v1 + 80) )
      {
        Win32FreePool(v38);
        v37 = *((_QWORD *)v1 + 8);
      }
      *((_DWORD *)v1 + 14) = *((_DWORD *)v1 + 10);
      *((_QWORD *)v1 + 9) = v37;
    }
  }
  v41 = CBaseInput::Read(v1);
  if ( v3 )
    UserSessionSwitchLeaveCrit(v40, v39);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v47);
  return v41;
}
