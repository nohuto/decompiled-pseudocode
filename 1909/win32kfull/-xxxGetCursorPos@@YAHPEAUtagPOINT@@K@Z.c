/*
 * XREFs of ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C0088880
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CheckWinstaAttributeAccess @ 0x1C00889B0 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall xxxGetCursorPos(unsigned __int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // edi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 SavedCursorPosition; // rax
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  struct tagPOINT v15; // [rsp+80h] [rbp+18h]

  v7 = 0LL;
  if ( !(unsigned int)CheckWinstaAttributeAccess(2u) )
    return 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v8 && v8 != grpdeskRitInput )
  {
    UserSetLastError(5LL, v4, v5, v6);
    return 0LL;
  }
  v9 = a2 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
      goto LABEL_6;
    return 0LL;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    SavedCursorPosition = GetSavedCursorPosition();
    goto LABEL_7;
  }
LABEL_6:
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, v4, v5);
  SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
LABEL_7:
  v15 = (struct tagPOINT)SavedCursorPosition;
  if ( !PsGetCurrentProcessWow64Process(v12) )
    v7 = 3LL;
  if ( (v7 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_BYTE *)MmUserProbeAddress;
  *v13 = *v13;
  v13[7] = v13[7];
  *(struct tagPOINT *)a1 = v15;
  return 1LL;
}
