/*
 * XREFs of NtUserSetKeyboardState @ 0x1C014F870
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _SetKeyboardState @ 0x1C014F934 (_SetKeyboardState.c)
 */

__int64 __fastcall NtUserSetKeyboardState(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx

  EnterCrit(0LL, 1LL);
  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  v3 = 0;
  if ( (unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, v2 + 436)
    || (*(_DWORD *)(v2 + 396) & 0x2000000) != 0 )
  {
    v3 = SetKeyboardState(a1);
  }
  else
  {
    EtwTraceUIPIInputError(gptiCurrent, 0LL, v2, *(_QWORD *)(v2 + 436), 3);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
