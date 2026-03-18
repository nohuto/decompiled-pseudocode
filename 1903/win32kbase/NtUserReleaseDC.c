/*
 * XREFs of NtUserReleaseDC @ 0x1C0029DE0
 * Callers:
 *     <none>
 * Callees:
 *     ReleaseCacheDC @ 0x1C001ED70 (ReleaseCacheDC.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029F60 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002A1F0 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A450 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall NtUserReleaseDC(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BOOL8 v13; // rdi
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  int v20; // [rsp+38h] [rbp-39h] BYREF
  __int128 v21; // [rsp+40h] [rbp-31h]
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int8 v23; // [rsp+58h] [rbp-19h]
  GUID ActivityId; // [rsp+5Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-1h] BYREF
  int *v26; // [rsp+90h] [rbp+1Fh]
  __int64 v27; // [rsp+98h] [rbp+27h]
  EVENT_DATA_DESCRIPTOR v28; // [rsp+A0h] [rbp+2Fh] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v23 = 0;
    v16 = PsGetCurrentThreadWin32Thread();
    v22 = v16;
    if ( v16 && (*(int *)(v16 + 24) > 0 || *(_DWORD *)(v22 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v20 = v23;
          v26 = &v20;
          v27 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v22 = 0LL;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v22);
  EtwTraceAcquiredSharedUserCrit();
  v13 = (unsigned int)ReleaseCacheDC(a1, 0LL, v10) != 2;
  v14 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v17 = PsGetCurrentThreadWin32Thread();
    v18 = v17;
    if ( v17 )
    {
      v19 = *(_DWORD *)(v17 + 24);
      if ( (*(_DWORD *)(v18 + 44) || *(_DWORD *)(v18 + 48) || v19 > 0)
        && dword_1C020FB50 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3461, (LPCGUID)(v18 + 28), 0LL, 2u, &v28);
      }
      *(_DWORD *)(v18 + 44) = 0;
      v21 = 0uLL;
      *(_OWORD *)(v18 + 28) = 0uLL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v13;
}
