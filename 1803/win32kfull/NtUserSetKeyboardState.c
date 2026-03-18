/*
 * XREFs of NtUserSetKeyboardState @ 0x1C0129B40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _SetKeyboardState @ 0x1C0129BF0 (_SetKeyboardState.c)
 */

__int64 __fastcall NtUserSetKeyboardState(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  int v5; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 1LL);
  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  v3 = *(_QWORD *)(v2 + 428);
  v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL);
  v5 = 0;
  if ( !gbEnforceUIPI
    || (unsigned int)v4 > (unsigned int)v3
    || (_DWORD)v4 == (_DWORD)v3
    && ((v3 >>= 32, v6 = HIDWORD(v4), (_DWORD)v6 == (_DWORD)v3) || (_DWORD)v3 == -1 || (_DWORD)v6 == -1)
    || (*(_DWORD *)(v2 + 388) & 0x2000000) != 0 )
  {
    v5 = SetKeyboardState(a1, v3);
  }
  else
  {
    EtwTraceUIPIInputError(gptiCurrent, 0LL, v2, *(_QWORD *)(v2 + 428), 3);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v5;
}
