/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C002B980
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0028720 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     InternalMapVirtualKeyEx @ 0x1C002BAC0 (InternalMapVirtualKeyEx.c)
 *     HKLtoPKL @ 0x1C0065680 (HKLtoPKL.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v8; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v10; // rdi
  struct tagTHREADINFO **v11; // rax
  PVOID CurrentProcess; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rax
  _BYTE v16[32]; // [rsp+30h] [rbp-58h] BYREF

  v8 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v16, 0);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v11 )
      v10 = *v11;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v10 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v16);
  EtwTraceAcquiredSharedUserCrit();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a4 )
    v14 = HKLtoPKL(ThreadWin32Thread, a3);
  else
    v14 = *(_QWORD *)(ThreadWin32Thread + 440);
  if ( v14 )
    v8 = InternalMapVirtualKeyEx(a1, a2, *(_QWORD *)(*(_QWORD *)(v14 + 48) + 32LL));
  UserSessionSwitchLeaveCrit();
  return v8;
}
