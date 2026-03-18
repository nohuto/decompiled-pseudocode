/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1C00ED7A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0028720 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C006DEC0 (PtiFromThreadId.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0083640 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtMITSetLastInputRecipient(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v4; // rsi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rcx
  CInputThread *v11; // rdi
  bool v12; // bl
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  _BYTE v16[32]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a1;
  v4 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v16, 0);
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v16);
  EtwTraceAcquiredSharedUserCrit();
  v11 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v11, 0LL);
  v12 = CInputThread::_CalledOnInputThread(v11);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( v12 )
  {
    v14 = (struct tagTHREADINFO *)PtiFromThreadId(v3);
    if ( v14 )
    {
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v14, 0);
      v4 = 1LL;
      goto LABEL_19;
    }
    v13 = 87LL;
  }
  else
  {
    v13 = 5LL;
  }
  UserSetLastError(v13);
LABEL_19:
  UserSessionSwitchLeaveCrit();
  return v4;
}
