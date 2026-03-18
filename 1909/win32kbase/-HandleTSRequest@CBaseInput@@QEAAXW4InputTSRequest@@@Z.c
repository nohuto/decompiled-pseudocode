/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0055610
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0055BA0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0058AFC (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
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
  __int64 v31; // rax
  unsigned int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  __int64 v37; // r8
  int v38; // [rsp+30h] [rbp-99h] BYREF
  int v39; // [rsp+34h] [rbp-95h] BYREF
  int v40; // [rsp+38h] [rbp-91h] BYREF
  int v41; // [rsp+3Ch] [rbp-8Dh]
  __int64 v42; // [rsp+40h] [rbp-89h]
  unsigned __int8 v43; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  int *v46; // [rsp+80h] [rbp-49h]
  int v47; // [rsp+88h] [rbp-41h]
  int v48; // [rsp+8Ch] [rbp-3Dh]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+90h] [rbp-39h] BYREF
  int *v50; // [rsp+B0h] [rbp-19h]
  int v51; // [rsp+B8h] [rbp-11h]
  int v52; // [rsp+BCh] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+C0h] [rbp-9h] BYREF
  int *v54; // [rsp+E0h] [rbp+17h]
  int v55; // [rsp+E8h] [rbp+1Fh]
  int v56; // [rsp+ECh] [rbp+23h]

  v3 = (unsigned int)a2;
  v41 = a2;
  if ( (unsigned int)a2 < 4 )
  {
    if ( *((_DWORD *)&unk_1C01CB190 + 6 * (unsigned int)a2) != (_DWORD)a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( *((_DWORD *)&unk_1C01CB190 + 6 * v3 + 4) >= 0x10u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
    {
      (*((void (__fastcall **)(CBaseInput *))&unk_1C01CB190 + 3 * v3 + 1))(a1);
    }
    else
    {
      UserSessionSwitchLeaveCrit(v6, v5);
      CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_1C01CB190 + 6 * v3 + 4));
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&ActivityId.Data1 = 0LL;
      *(_QWORD *)ActivityId.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v43 = 1;
        v31 = PsGetCurrentThreadWin32Thread(v8);
        v42 = v31;
        if ( v31 && (*(int *)(v31 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v48 = 0;
              v38 = v43;
              v46 = &v38;
              v47 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
            }
          }
        }
      }
      else
      {
        v42 = 0LL;
      }
      v10 = 0LL;
      while ( 1 )
      {
        v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v11 )
          v10 = *v11;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v10 == gptiRit )
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
        *(GUID *)(v42 + 28) = ActivityId;
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v52 = 0;
            v39 = v43;
            v50 = &v39;
            v51 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v49);
            v32 = dword_1C020CB50;
          }
          if ( v32 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v56 = 0;
            v40 = v43;
            v54 = &v40;
            v55 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v53);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v10;
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
            v33 = *v29;
            v29[2] = 0LL;
            if ( !*(_DWORD *)(v33 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
            v36 = (PERESOURCE *)GetDomainLockRef(12LL, v26, v28);
            if ( v36 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37);
            ExReleaseResourceAndLeaveCriticalRegion(*v36);
            HMUnlockObject(*v29);
            tagDomLock::LockExclusive(v36);
            v29 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          LODWORD(v3) = v41;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v3);
}
