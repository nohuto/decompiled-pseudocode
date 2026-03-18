/*
 * XREFs of ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C00F81B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B550 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxGetCursorPos(unsigned __int64 a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  BOOLEAN v9; // al
  __int64 v10; // rdi
  __int64 v12; // rcx
  int v13; // ebx
  __int64 CurrentThreadDpiAwarenessContext; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 SavedCursorPosition; // rax
  __int64 v18; // rcx
  unsigned int v19; // esi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v24; // rax
  struct tagPOINT v25; // rbx
  _BYTE *v26; // rdx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    v10 = 0LL;
  }
  else
  {
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
    {
      v8 = 1459LL;
LABEL_6:
      UserSetLastError(v8, v5, v6, v7);
      return 0LL;
    }
    v9 = RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 688), 2u);
    v10 = 0LL;
    if ( !v9 )
    {
LABEL_5:
      v8 = 5LL;
      goto LABEL_6;
    }
  }
  v12 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v12 && v12 != grpdeskRitInput )
    goto LABEL_5;
  v13 = a2 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      return 0LL;
    CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext(v12, v5);
    goto LABEL_27;
  }
  if ( !(unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    v19 = 18;
    CurrentThread = KeGetCurrentThread();
    v21 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    if ( v21 )
    {
      if ( *(_QWORD *)(v21 + 360) )
        CaptureAndValidateUserModeDpiAwarenessContext(v21);
      if ( *(_DWORD *)(v21 + 340) )
      {
        v19 = *(_DWORD *)(v21 + 340);
      }
      else
      {
        v24 = PsGetCurrentProcessWin32Process(v22);
        if ( v24 )
          v19 = *(_DWORD *)(v24 + 280);
      }
    }
    CurrentThreadDpiAwarenessContext = v19;
LABEL_27:
    SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    goto LABEL_28;
  }
  SavedCursorPosition = GetSavedCursorPosition();
LABEL_28:
  v25 = (struct tagPOINT)SavedCursorPosition;
  if ( !PsGetCurrentProcessWow64Process(v18) )
    v10 = 3LL;
  if ( (v10 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v26 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v26 = (_BYTE *)MmUserProbeAddress;
  *v26 = *v26;
  v26[7] = v26[7];
  *(struct tagPOINT *)a1 = v25;
  return 1LL;
}
