/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C0059050
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ApiSetEditionIsGpqForegroundInaccessible @ 0x1C0059258 (ApiSetEditionIsGpqForegroundInaccessible.c)
 *     _GetAsyncKeyState @ 0x1C00592E0 (_GetAsyncKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C0059370 (IsKeyboardDelegationEnabledForThread.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     EtwTraceUIPIInputError @ 0x1C0059990 (EtwTraceUIPIInputError.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1C00AB500 (EtwInitializeAsyncKeyMonitor.c)
 *     ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C00BF810 (-OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  struct tagTHREADINFO *v6; // rdi
  int v7; // esi
  struct tagTHREADINFO **v8; // rax
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _BOOL8 v12; // rcx
  CAsyncKeyEventMonitor *v13; // rcx
  __int64 ThreadWin32Thread; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  char v18; // al

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  AsyncKeyState = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  do
  {
    v7 = 0;
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v6 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    v12 = 0LL;
    if ( CurrentProcess )
      v12 = CurrentProcess == g_pepDwm;
    if ( v12 || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbDITInHitTest == 1 && v6 != gptiRit )
    {
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      v7 = 1;
    }
  }
  while ( v7 == 1 );
  EtwTraceAcquiredSharedUserCrit(v12, v10, v11);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( gptiForeground )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    v13 = gptiForeground;
    if ( CurrentProcessWin32Process != *((_QWORD *)gptiForeground + 52) && (W32kEtwEnabledKeyword & 0x400) != 0 )
    {
      if ( (unsigned __int8)(byte_1C019A1D8 - 1) <= 2u
        || (qword_1C019A1C0 & 0x400) == 0
        || (v18 = 1, (qword_1C019A1C8 & 0x400) != qword_1C019A1C8) )
      {
        v18 = 0;
      }
      if ( v18 && (gpAsyncKeyEventMonitor || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
        CAsyncKeyEventMonitor::OnKeyStateRequested(v13, *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 56LL));
    }
  }
  if ( *(struct tagDESKTOP **)(ThreadWin32Thread + 448) != grpdeskRitInput
    || (!gptiForeground || PsGetCurrentProcessWin32Process(v13) != *((_QWORD *)gptiForeground + 52))
    && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 880), 0x18u) )
  {
    goto LABEL_26;
  }
  if ( (unsigned int)ApiSetEditionIsGpqForegroundInaccessible(1LL, ThreadWin32Thread) )
  {
    EtwTraceUIPIInputError((struct tagTHREADINFO *)ThreadWin32Thread, 0LL, 3);
LABEL_26:
    UserSetLastError(5LL);
    goto LABEL_20;
  }
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(ThreadWin32Thread) )
  {
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 124LL) = 0;
    v16 = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 128LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 136LL) = 0LL;
  }
  else
  {
    AsyncKeyState = GetAsyncKeyState(v3);
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 124LL) = *((_DWORD *)gpsi + 1747);
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 128LL) = gafAsyncKeyState;
    v16 = *(_QWORD *)(ThreadWin32Thread + 472);
    *(_QWORD *)(v16 + 136) = gafAsyncKeyStateRecentDown;
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v16);
  return AsyncKeyState;
}
