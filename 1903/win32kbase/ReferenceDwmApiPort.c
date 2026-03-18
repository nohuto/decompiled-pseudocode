/*
 * XREFs of ReferenceDwmApiPort @ 0x1C0063FD0
 * Callers:
 *     SetConnectCompletedState @ 0x1C00633D0 (SetConnectCompletedState.c)
 *     xxxResetDisplayDevice @ 0x1C00639B0 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1C0063C40 (UserNotifyDisplayChange.c)
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C0063D00 (-ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0063E50 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002A1F0 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A450 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

PVOID ReferenceDwmApiPort()
{
  PVOID v0; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // [rsp+30h] [rbp-9h] BYREF
  __int64 v16; // [rsp+38h] [rbp-1h] BYREF
  unsigned __int8 v17; // [rsp+40h] [rbp+7h]
  GUID ActivityId; // [rsp+44h] [rbp+Bh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+1Fh] BYREF
  int *v20; // [rsp+78h] [rbp+3Fh]
  int v21; // [rsp+80h] [rbp+47h]
  int v22; // [rsp+84h] [rbp+4Bh]

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 || ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v17 = 0;
      v5 = PsGetCurrentThreadWin32Thread(v3);
      v16 = v5;
      if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v16 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v22 = 0;
            v15 = v17;
            v20 = &v15;
            v21 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v16 = 0LL;
    }
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
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
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v16);
    EtwTraceAcquiredSharedUserCrit();
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
    UserSessionSwitchLeaveCrit(v14, v13);
  }
  return v0;
}
