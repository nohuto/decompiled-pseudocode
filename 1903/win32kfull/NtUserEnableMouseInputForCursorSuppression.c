/*
 * XREFs of NtUserEnableMouseInputForCursorSuppression @ 0x1C013B560
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0081090 (TransitionCursorSuppressionState.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v9; // ecx
  __int64 v10; // rax

  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    UserSetLastError(87LL, v2, v3, v4);
    goto LABEL_10;
  }
  v6 = (unsigned int)(gCursorSuppressionState - 1);
  if ( gCursorSuppressionState == 1 )
    goto LABEL_11;
  v6 = (unsigned int)(gCursorSuppressionState - 2);
  if ( gCursorSuppressionState == 2 )
    goto LABEL_8;
  v6 = (unsigned int)(gCursorSuppressionState - 4);
  if ( gCursorSuppressionState == 4 )
    goto LABEL_8;
  v6 = (unsigned int)(gCursorSuppressionState - 5);
  if ( gCursorSuppressionState == 5 )
  {
LABEL_11:
    if ( !a1 )
      goto LABEL_9;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v2);
    v9 = 2;
    *(_DWORD *)(CurrentProcessWin32Process + 812) &= ~0x80000u;
LABEL_13:
    TransitionCursorSuppressionState(v9, 1);
    goto LABEL_9;
  }
  v6 = (unsigned int)(gCursorSuppressionState - 6);
  if ( gCursorSuppressionState != 6 && gCursorSuppressionState != 8 )
    goto LABEL_9;
LABEL_8:
  if ( !a1 )
  {
    v10 = PsGetCurrentProcessWin32Process(v6, v2);
    v9 = 1;
    *(_DWORD *)(v10 + 812) |= 0x80000u;
    goto LABEL_13;
  }
LABEL_9:
  v5 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
