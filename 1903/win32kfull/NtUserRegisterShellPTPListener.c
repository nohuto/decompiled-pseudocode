/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C013DEE0
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C001ACA8 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _RegisterShellPTPListener @ 0x1C013DFA8 (_RegisterShellPTPListener.c)
 */

__int64 __fastcall NtUserRegisterShellPTPListener(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL)) )
    {
      if ( !a2 || (v12 = *(_QWORD *)(v7 + 40), *(char *)(v12 + 20) >= 0) && *(char *)(v12 + 19) >= 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL) == PsGetCurrentProcessWin32Process(v9, v8) )
        {
          v6 = RegisterShellPTPListener(v7, a2);
          goto LABEL_8;
        }
      }
      UserSetLastError(87LL, v8, v10, v11);
      v14 = 87LL;
    }
    else
    {
      v14 = 5LL;
    }
    UserSetLastError(v14, v8, v10, v11);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
