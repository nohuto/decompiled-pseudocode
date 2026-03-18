/*
 * XREFs of NtUserReleaseDC @ 0x1C0028430
 * Callers:
 *     <none>
 * Callees:
 *     ReleaseCacheDC @ 0x1C0027A50 (ReleaseCacheDC.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0028720 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0028BA8 (EtwTraceReleaseUserCrit.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserReleaseDC(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  PVOID CurrentProcess; // rax
  __int64 v6; // r8
  _BOOL8 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  bool v12; // zf
  int v13; // [rsp+30h] [rbp-39h] BYREF
  __int128 v14; // [rsp+38h] [rbp-31h]
  _BYTE v15[40]; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+27h] BYREF
  int *v18; // [rsp+A0h] [rbp+37h]
  int v19; // [rsp+A8h] [rbp+3Fh]
  int v20; // [rsp+ACh] [rbp+43h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v15, 0);
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v15);
  EtwTraceAcquiredSharedUserCrit();
  v7 = (unsigned int)ReleaseCacheDC(a1, 0, v6) != 2;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    v9 = PsGetCurrentThreadWin32Thread();
    v10 = v9;
    if ( v9 )
    {
      v11 = *(_DWORD *)(v9 + 24);
      v12 = *(_DWORD *)(v10 + 44) == 0;
      v13 = v11;
      if ( (!v12 || *(_DWORD *)(v10 + 48) || v11 > 0)
        && dword_1C01C7F10 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
      {
        TlgCreateWsz(&pDesc, L"LeaveCrit");
        v20 = 0;
        v18 = &v13;
        v19 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v10 + 28), 0LL, 4u, &pData);
      }
      *(_DWORD *)(v10 + 44) = 0;
      v14 = 0uLL;
      *(_OWORD *)(v10 + 28) = 0uLL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v7;
}
