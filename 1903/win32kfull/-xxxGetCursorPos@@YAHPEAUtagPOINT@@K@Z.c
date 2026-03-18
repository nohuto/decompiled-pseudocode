/*
 * XREFs of ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C0089010
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0089140 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall xxxGetCursorPos(unsigned __int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // edi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 SavedCursorPosition; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  struct tagPOINT v12; // [rsp+80h] [rbp+18h]

  v4 = 0LL;
  if ( !(unsigned int)CheckWinstaAttributeAccess(2u) )
    return 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v5 && v5 != grpdeskRitInput )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v6 = a2 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      goto LABEL_6;
    return 0LL;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    SavedCursorPosition = GetSavedCursorPosition();
    goto LABEL_7;
  }
LABEL_6:
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
LABEL_7:
  v12 = (struct tagPOINT)SavedCursorPosition;
  if ( !PsGetCurrentProcessWow64Process(v9) )
    v4 = 3LL;
  if ( (v4 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[7] = v10[7];
  *(struct tagPOINT *)a1 = v12;
  return 1LL;
}
