/*
 * XREFs of xxxGetCursorPos @ 0x1C003C260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxGetCursorPos(ULONG64 a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  BOOLEAN v7; // al
  __int64 v8; // rdi
  __int64 v10; // rcx
  int v11; // ebx
  __int64 CurrentThreadDpiAwarenessContext; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 SavedCursorPosition; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // esi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  _BYTE *v27; // rdx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    v8 = 0LL;
  }
  else
  {
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
    {
      v6 = 1459LL;
LABEL_6:
      UserSetLastError(v6, v5);
      return 0LL;
    }
    v7 = RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 2u);
    v8 = 0LL;
    if ( !v7 )
    {
LABEL_5:
      v6 = 5LL;
      goto LABEL_6;
    }
  }
  v10 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v10 && v10 != grpdeskRitInput )
    goto LABEL_5;
  v11 = a2 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      return 0LL;
    CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext();
    goto LABEL_27;
  }
  if ( !(unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    v20 = 18;
    CurrentThread = KeGetCurrentThread();
    v22 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    if ( v22 )
    {
      if ( *(_QWORD *)(v22 + 360) )
        CaptureAndValidateUserModeDpiAwarenessContext(v22);
      if ( *(_DWORD *)(v22 + 340) )
      {
        v20 = *(_DWORD *)(v22 + 340);
      }
      else
      {
        v25 = PsGetCurrentProcessWin32Process(v23);
        if ( v25 )
          v20 = *(_DWORD *)(v25 + 280);
      }
    }
    CurrentThreadDpiAwarenessContext = v20;
LABEL_27:
    SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    goto LABEL_28;
  }
  SavedCursorPosition = GetSavedCursorPosition();
LABEL_28:
  v26 = SavedCursorPosition;
  if ( !PsGetCurrentProcessWow64Process(v17, v16, v18, v19) )
    v8 = 3LL;
  if ( (v8 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v27 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v27 = (_BYTE *)MmUserProbeAddress;
  *v27 = *v27;
  v27[7] = v27[7];
  *(_QWORD *)a1 = v26;
  return 1LL;
}
