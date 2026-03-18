/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C005B840
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002ACE0 (EnterSharedCrit.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C005B9DC (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C005BA80 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     _GetAsyncKeyState @ 0x1C005BAB0 (_GetAsyncKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C005BB40 (IsKeyboardDelegationEnabledForThread.c)
 *     EtwTraceUIPIInputError @ 0x1C005BB80 (EtwTraceUIPIInputError.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1C010A6F8 (EtwInitializeAsyncKeyMonitor.c)
 *     ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C011F678 (-OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  __int64 v2; // rdx
  CAsyncKeyEventMonitor *v3; // rcx
  __int64 ThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v10; // al
  char v11; // [rsp+78h] [rbp+10h] BYREF

  EnterSharedCrit(0, 1);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  AsyncKeyState = 0;
  if ( gptiForeground )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v3 = gptiForeground;
    if ( CurrentProcessWin32Process != *((_QWORD *)gptiForeground + 52) )
    {
      v2 = 1024LL;
      if ( (W32kEtwEnabledKeyword & 0x400) != 0 )
      {
        if ( (unsigned __int8)(byte_1C020C438 - 1) <= 2u
          || (qword_1C020C420 & 0x400) == 0
          || (v10 = 1, (qword_1C020C428 & 0x400) != qword_1C020C428) )
        {
          v10 = 0;
        }
        if ( v10 && (gpAsyncKeyEventMonitor || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
          CAsyncKeyEventMonitor::OnKeyStateRequested(v3, *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 56LL));
      }
    }
  }
  if ( *(struct tagDESKTOP **)(ThreadWin32Thread + 448) != grpdeskRitInput
    || (!gptiForeground || PsGetCurrentProcessWin32Process(v3) != *((_QWORD *)gptiForeground + 52))
    && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 888), 0x18u) )
  {
    goto LABEL_15;
  }
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError((struct tagTHREADINFO *)ThreadWin32Thread, 0LL, 3);
LABEL_15:
    UserSetLastError(5LL, v2);
    goto LABEL_9;
  }
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(ThreadWin32Thread) )
  {
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 124LL) = 0;
    v8 = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 128LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 136LL) = 0LL;
  }
  else
  {
    AsyncKeyState = GetAsyncKeyState(a1);
    CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v11);
    v7 = *((unsigned int *)gpsi + 1747);
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 124LL) = v7;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 128LL) = gafAsyncKeyState;
    v8 = *(_QWORD *)(ThreadWin32Thread + 472);
    *(_QWORD *)(v8 + 136) = gafAsyncKeyStateRecentDown;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v8, v7);
  return AsyncKeyState;
}
