/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C00682C0
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
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C0068548 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C006856C (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0068620 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  __int64 v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  void (*v9)(void); // rax
  __int64 v11; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  struct tagTHREADINFO **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *i; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  PERESOURCE *v40; // rdi
  __int64 v41; // r8
  int v42; // [rsp+48h] [rbp-C0h] BYREF
  int v43; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v44; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *v49; // [rsp+98h] [rbp-70h]
  int v50; // [rsp+A0h] [rbp-68h]
  int v51; // [rsp+A4h] [rbp-64h]
  EVENT_DATA_DESCRIPTOR v52; // [rsp+A8h] [rbp-60h] BYREF
  int *v53; // [rsp+C8h] [rbp-40h]
  int v54; // [rsp+D0h] [rbp-38h]
  int v55; // [rsp+D4h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR v56; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v57; // [rsp+F8h] [rbp-10h]
  int v58; // [rsp+100h] [rbp-8h]
  int v59; // [rsp+104h] [rbp-4h]

  while ( 1 )
  {
    if ( NeedsUpdateKeyboardLEDs() )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&ActivityId_8.Data1 = 0LL;
      *(_QWORD *)ActivityId_8.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        ActivityId_4 = 1;
        v35 = PsGetCurrentThreadWin32Thread(v11);
        v45 = v35;
        if ( v35 && (*(int *)(v35 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId_8);
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v51 = 0;
              v42 = ActivityId_4;
              v49 = &v42;
              v50 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId_8, 0LL, 3u, &pData);
            }
          }
        }
      }
      else
      {
        v45 = 0LL;
      }
      v13 = 0LL;
      while ( 1 )
      {
        v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v14 )
          v13 = *v14;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v16, v15);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v19, v18) == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v13 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v45 && (*(_DWORD *)(v45 + 48) || *(int *)(v45 + 24) > 0) )
      {
        *(_DWORD *)(v45 + 44) = 1;
        *(GUID *)(v45 + 28) = ActivityId_8;
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v55 = 0;
            v43 = ActivityId_4;
            v53 = &v43;
            v54 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId_8, 0LL, 3u, &v52);
            v36 = dword_1C020FB50;
          }
          if ( v36 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v59 = 0;
            LODWORD(v44) = ActivityId_4;
            v57 = &v44;
            v58 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId_8, 0LL, 3u, &v56);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v13;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v20, v21);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
          v37 = *i;
          i[2] = 0LL;
          if ( !*(_DWORD *)(v37 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
          v40 = (PERESOURCE *)GetDomainLockRef(12LL, v29, v31);
          if ( v40 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v41);
          ExReleaseResourceAndLeaveCriticalRegion(*v40);
          HMUnlockObject(*i);
          tagDomLock::LockExclusive(v40);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
      if ( NeedsUpdateKeyboardLEDs() )
        CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
      UserSessionSwitchLeaveCrit(v34, v33);
    }
    v3 = KeWaitForMultipleObjects(
           *((_DWORD *)this + 13),
           *((PVOID **)this + 1),
           WaitAny,
           WrUserRequest,
           *((_BYTE *)this + 56),
           *((_BYTE *)this + 57),
           0LL,
           *((PKWAIT_BLOCK *)this + 3));
    v5 = (unsigned int)v3;
    if ( v3 < 0 )
      return (unsigned int)v5;
    v6 = *((unsigned int *)this + 13);
    if ( v3 >= (unsigned int)v6 )
      goto LABEL_63;
    v7 = *((unsigned int *)this + 10);
    v8 = v7;
    if ( (unsigned int)v7 >= (unsigned int)v6 && (_DWORD)v7 != 64 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v4);
      v8 = *((_DWORD *)this + 10);
    }
    if ( (unsigned int)v5 < v8 || v8 == 64 )
    {
LABEL_63:
      if ( (unsigned int)v5 >= *((_DWORD *)this + 10) )
        return (unsigned int)v5;
      v9 = *(void (**)(void))(*((_QWORD *)this + 4) + 16 * v5);
      if ( !v9 )
        return (unsigned int)v5;
      v9();
    }
    else
    {
      LegacyInputDispatcher::Dispatch(this, v5);
    }
  }
}
