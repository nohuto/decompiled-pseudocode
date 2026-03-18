/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105B78
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0106BA0 (VideoPortCalloutThread.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C003E0F0 (UserRemoteConnectedSessionUsingWddm.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 *     McTemplateK0tt @ 0x1C010F4B0 (McTemplateK0tt.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v4; // r15
  char v5; // r14
  ULONG v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  PERESOURCE *v34; // rdi
  __int64 v35; // r8
  char v36; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v41; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  PVOID Object[3]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-78h] BYREF
  int *v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR v47; // [rsp+B8h] [rbp-48h] BYREF
  int *v48; // [rsp+D8h] [rbp-28h]
  __int64 v49; // [rsp+E0h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+E8h] [rbp-18h] BYREF
  int *v51; // [rsp+108h] [rbp+8h]
  __int64 v52; // [rsp+110h] [rbp+10h]

  v4 = a2;
  v36 = a2;
  v5 = a1;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0tt(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( gfSwitchInProgress && !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v6 = 1;
        Object[0] = gpevtVideoportCallout;
      }
      if ( gfMonitorPowerInProgress )
      {
        a1 = v6++;
        Object[a1] = gpevtMonitorPowerWaiter;
      }
      if ( v5 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
      {
        a1 = v6++;
        Object[a1] = (PVOID)gpevtRitReadyForCallOut;
      }
      if ( !v6 )
        break;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2);
      KeWaitForMultipleObjects(v6, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v5 = 0;
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&ActivityId.Data1 = 0LL;
      *(_QWORD *)ActivityId.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v41 = 1;
        v10 = PsGetCurrentThreadWin32Thread(v8);
        v40 = v10;
        if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v40 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v37 = v41;
              v45 = &v37;
              v46 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
            }
          }
        }
      }
      else
      {
        v40 = 0LL;
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
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v40 && (*(_DWORD *)(v40 + 48) || *(int *)(v40 + 24) > 0) )
      {
        *(_DWORD *)(v40 + 44) = 1;
        *(GUID *)(v40 + 28) = ActivityId;
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v38 = v41;
            v48 = &v38;
            v49 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v47);
            v18 = dword_1C020CB50;
          }
          if ( v18 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v39 = v41;
            v51 = &v39;
            v52 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v50);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v11;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, a2, v19);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v30 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v30[2];
            v31 = *v30;
            v30[2] = 0LL;
            if ( !*(_DWORD *)(v31 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
            v34 = (PERESOURCE *)GetDomainLockRef(12LL, v27, v29);
            if ( v34 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v35);
            ExReleaseResourceAndLeaveCriticalRegion(*v34);
            HMUnlockObject(*v30);
            tagDomLock::LockExclusive(v34);
            v30 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v4 = v36;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    if ( !v4 || gbGDIOn || (int)IsPowerOnGdiSupported() < 0 )
      break;
    PowerOnGdi(a3, 1LL, 3LL);
  }
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0(a1, &StopWaitForVideoPortCalloutReady, &Context.Flags);
}
