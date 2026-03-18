/*
 * XREFs of DrvGetCurrentDpiInfo @ 0x1C0013464
 * Callers:
 *     NtGdiGetCurrentDpiInfo @ 0x1C00133F0 (NtGdiGetCurrentDpiInfo.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0013574 (DrvGetCurrentDpiInfoFromHDev.c)
 *     UserGetHDevFromMonitor @ 0x1C00135D8 (UserGetHDevFromMonitor.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0028720 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfo(__int64 a1, __int64 a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  PVOID CurrentProcess; // rax
  __int64 HDevFromMonitor; // rax
  __int64 v9; // rcx
  unsigned int CurrentDpiInfoFromHDev; // ebx
  _BYTE v12[32]; // [rsp+30h] [rbp-38h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v12, 0);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v12);
  EtwTraceAcquiredSharedUserCrit();
  HDevFromMonitor = UserGetHDevFromMonitor(a1);
  if ( HDevFromMonitor )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(HDevFromMonitor, a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  UserSessionSwitchLeaveCrit(v9);
  return CurrentDpiInfoFromHDev;
}
