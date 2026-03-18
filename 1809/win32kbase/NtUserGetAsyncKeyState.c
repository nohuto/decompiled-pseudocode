/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C0038940
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ApiSetEditionIsGpqForegroundInaccessible @ 0x1C0036CF8 (ApiSetEditionIsGpqForegroundInaccessible.c)
 *     _GetAsyncKeyState @ 0x1C003A380 (_GetAsyncKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C003A410 (IsKeyboardDelegationEnabledForThread.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     EtwTraceUIPIInputError @ 0x1C003B5A0 (EtwTraceUIPIInputError.c)
 *     ??0EnterLeaveCritShared@@QEAA@XZ @ 0x1C00A8208 (--0EnterLeaveCritShared@@QEAA@XZ.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1C00E5AA0 (EtwInitializeAsyncKeyMonitor.c)
 *     ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C00F5CAC (-OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  CAsyncKeyEventMonitor *v2; // rcx
  __int64 ThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  __int64 CurrentProcessWin32Process; // rax
  char v7; // al
  char v8; // [rsp+78h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared((EnterLeaveCritShared *)&v8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  AsyncKeyState = 0;
  if ( gptiForeground )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    v2 = gptiForeground;
    if ( CurrentProcessWin32Process != *((_QWORD *)gptiForeground + 53) && (W32kEtwEnabledKeyword & 0x400) != 0 )
    {
      if ( (unsigned __int8)(byte_1C01C3328 - 1) <= 2u
        || (qword_1C01C3310 & 0x400) == 0
        || (v7 = 1, (qword_1C01C3318 & 0x400) != qword_1C01C3318) )
      {
        v7 = 0;
      }
      if ( v7 && (gpAsyncKeyEventMonitor || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
        CAsyncKeyEventMonitor::OnKeyStateRequested(v2, *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 56LL));
    }
  }
  if ( *(struct tagDESKTOP **)(ThreadWin32Thread + 456) != grpdeskRitInput
    || (!gptiForeground || PsGetCurrentProcessWin32Process(v2) != *((_QWORD *)gptiForeground + 53))
    && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 888), 0x18u) )
  {
    goto LABEL_13;
  }
  if ( (unsigned int)ApiSetEditionIsGpqForegroundInaccessible(1u, ThreadWin32Thread) )
  {
    EtwTraceUIPIInputError((struct tagTHREADINFO *)ThreadWin32Thread, 0LL, 3);
LABEL_13:
    UserSetLastError(5LL);
    goto LABEL_11;
  }
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(ThreadWin32Thread) )
  {
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 124LL) = 0;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 128LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 136LL) = 0LL;
  }
  else
  {
    AsyncKeyState = GetAsyncKeyState(a1);
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 124LL) = *((_DWORD *)gpsi + 1747);
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 128LL) = gafAsyncKeyState;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 136LL) = gafAsyncKeyStateRecentDown;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return AsyncKeyState;
}
