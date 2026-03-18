/*
 * XREFs of xxxCreateSystemThreads @ 0x1C00A2A70
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
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00A2CC4 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     VideoPortCalloutThread @ 0x1C0109510 (VideoPortCalloutThread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateSystemThreads(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
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
  __int64 *v25; // rsi
  __int64 v27; // rax
  unsigned int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *v32; // rdi
  __int64 v33; // r8
  unsigned int v34; // [rsp+38h] [rbp-79h] BYREF
  int v35; // [rsp+3Ch] [rbp-75h] BYREF
  int v36; // [rsp+40h] [rbp-71h] BYREF
  int v37; // [rsp+44h] [rbp-6Dh] BYREF
  void *v38; // [rsp+48h] [rbp-69h] BYREF
  __int64 v39; // [rsp+50h] [rbp-61h]
  unsigned __int8 v40; // [rsp+58h] [rbp-59h]
  GUID ActivityId; // [rsp+5Ch] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-41h] BYREF
  int *v43; // [rsp+90h] [rbp-21h]
  int v44; // [rsp+98h] [rbp-19h]
  int v45; // [rsp+9Ch] [rbp-15h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+A0h] [rbp-11h] BYREF
  int *v47; // [rsp+C0h] [rbp+Fh]
  int v48; // [rsp+C8h] [rbp+17h]
  int v49; // [rsp+CCh] [rbp+1Bh]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+D0h] [rbp+1Fh] BYREF
  int *v51; // [rsp+F0h] [rbp+3Fh]
  int v52; // [rsp+F8h] [rbp+47h]
  int v53; // [rsp+FCh] [rbp+4Bh]

  if ( (PVOID)PsGetCurrentProcess(a1, a2) == gpepCSRSS && (unsigned int)CSTPop(&v34, &v38) )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v2);
    switch ( v34 )
    {
      case 1u:
        if ( (int)IsxxxDesktopThreadSupported() >= 0 )
          xxxDesktopThread(v38);
        break;
      case 2u:
        if ( (int)IsRawInputThreadSupported() >= 0 )
          RawInputThread(v38);
        break;
      case 4u:
        VideoPortCalloutThread(v38);
        break;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v40 = 1;
      v27 = PsGetCurrentThreadWin32Thread(v4);
      v39 = v27;
      if ( v27 && (*(int *)(v27 + 24) > 0 || *(_DWORD *)(v39 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v45 = 0;
            v35 = v40;
            v43 = &v35;
            v44 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v39 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v39 && (*(_DWORD *)(v39 + 48) || *(int *)(v39 + 24) > 0) )
    {
      *(_DWORD *)(v39 + 44) = 1;
      *(GUID *)(v39 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v49 = 0;
          v36 = v40;
          v47 = &v36;
          v48 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v46);
          v28 = dword_1C020FB50;
        }
        if ( v28 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v53 = 0;
          v37 = v40;
          v51 = &v37;
          v52 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v50);
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
      while ( 1 )
      {
        v25 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v29 = *v25;
        v25[2] = 0LL;
        if ( !*(_DWORD *)(v29 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
        v32 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
        if ( v32 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33);
        ExReleaseResourceAndLeaveCriticalRegion(*v32);
        HMUnlockObject(*v25);
        tagDomLock::LockExclusive(v32);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return 1LL;
}
