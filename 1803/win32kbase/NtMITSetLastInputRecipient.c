/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1C00B4BF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0035E70 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C005FD40 (PtiFromThreadId.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  CInputThread *v13; // rdi
  bool v14; // bl
  int v15; // ecx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax

  v3 = a1;
  v4 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
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
    if ( (PVOID)PsGetCurrentProcess(v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredSharedUserCrit(v11, v10, v12);
  v13 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v13, 0LL);
  v14 = CInputThread::_CalledOnInputThread(v13);
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( v14 )
  {
    v17 = (struct tagTHREADINFO *)PtiFromThreadId(v3);
    if ( v17 )
    {
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v17, 0);
      v4 = 1LL;
      goto LABEL_19;
    }
    v15 = 87;
  }
  else
  {
    v15 = 5;
  }
  UserSetLastError(v15);
LABEL_19:
  UserSessionSwitchLeaveCrit(v16);
  return v4;
}
