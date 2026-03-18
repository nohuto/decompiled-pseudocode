/*
 * XREFs of UserReleaseDC @ 0x1C00757F0
 * Callers:
 *     bDeleteDCInternalEx @ 0x1C001DC90 (bDeleteDCInternalEx.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C0027A50 (ReleaseCacheDC.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0028720 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall UserReleaseDC(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v6; // rdi
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v13, 0);
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v13);
  EtwTraceAcquiredSharedUserCrit();
  LOBYTE(v4) = (unsigned int)ReleaseCacheDC(a1, 0, v11) != 2;
  UserSessionSwitchLeaveCrit();
  return v4;
}
