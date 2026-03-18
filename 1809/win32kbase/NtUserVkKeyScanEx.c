/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C0064D60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0028720 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     InternalVkKeyScanEx @ 0x1C0064EA0 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x1C0065680 (HKLtoPKL.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  unsigned __int16 v5; // si
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int16 v14; // bx
  _BYTE v16[32]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3;
  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v16, 0);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
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
  if ( v3 )
    v13 = HKLtoPKL(ThreadWin32Thread, a2);
  else
    v13 = *(_QWORD *)(ThreadWin32Thread + 440);
  if ( v13 )
    v14 = InternalVkKeyScanEx(v5, *(_QWORD *)(*(_QWORD *)(v13 + 48) + 32LL));
  else
    v14 = -1;
  UserSessionSwitchLeaveCrit();
  return v14;
}
