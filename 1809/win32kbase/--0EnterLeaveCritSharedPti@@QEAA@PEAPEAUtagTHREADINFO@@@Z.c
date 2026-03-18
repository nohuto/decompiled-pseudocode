/*
 * XREFs of ??0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z @ 0x1C00A9618
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C00EF030 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerFrameArrivalTimes @ 0x1C00EF110 (NtUserGetPointerFrameArrivalTimes.c)
 *     NtUserGetPointerInfoList @ 0x1C00EF210 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x1C00EF660 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerType @ 0x1C00EF780 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C00EF890 (NtUserGetRawPointerDeviceData.c)
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0028720 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

EnterLeaveCritSharedPti *__fastcall EnterLeaveCritSharedPti::EnterLeaveCritSharedPti(
        EnterLeaveCritSharedPti *this,
        struct tagTHREADINFO **a2,
        __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rcx
  EnterLeaveCritSharedPti *result; // rax
  _BYTE v12[32]; // [rsp+30h] [rbp-38h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v12, 0);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v12);
  EtwTraceAcquiredSharedUserCrit();
  result = this;
  *a2 = v6;
  return result;
}
