/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C00B8CB0
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C005A854 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B8870 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     WmsgpSendPSPMessage @ 0x1C02499A0 (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned int v4; // ebx
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r9d
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
  __int64 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  __int64 v37; // r8
  unsigned int v38; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+34h] [rbp-CCh] BYREF
  int v40; // [rsp+38h] [rbp-C8h] BYREF
  int v41; // [rsp+3Ch] [rbp-C4h] BYREF
  int v42; // [rsp+40h] [rbp-C0h]
  __int128 v43; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  unsigned __int8 v46; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+C0h] [rbp-40h] BYREF
  int *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v54; // [rsp+F0h] [rbp-10h] BYREF
  int *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]

  v4 = a2;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  if ( (_BYTE)a1 )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2);
    v43 = *a3;
    v6 = WmsgpSendPSPMessage(v7, v4, &v43, &v38);
    v42 = v6;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v46 = 1;
      v11 = PsGetCurrentThreadWin32Thread(v9);
      v45 = v11;
      if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v39 = v46;
            v49 = &v39;
            v50 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v45 = 0LL;
    }
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v13 )
        v12 = *v13;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v12 == gptiRit )
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
      *(GUID *)(v45 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v40 = v46;
          v52 = &v40;
          v53 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v51);
          v19 = dword_1C020FB50;
        }
        if ( v19 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v41 = v46;
          v55 = &v41;
          v56 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v54);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v20, v21);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v32 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v32[2];
          v33 = *v32;
          v32[2] = 0LL;
          if ( !*(_DWORD *)(v33 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
          v36 = (PERESOURCE *)GetDomainLockRef(12LL, v29, v31);
          if ( v36 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37);
          ExReleaseResourceAndLeaveCriticalRegion(*v36);
          HMUnlockObject(*v32);
          tagDomLock::LockExclusive(v36);
          v32 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v6 = v42;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  else
  {
    v44 = *a3;
    v6 = WmsgpSendPSPMessage(a1, a2, &v44, &v38);
  }
  if ( v6 >= 0 )
    return v38;
  return (unsigned int)v6;
}
