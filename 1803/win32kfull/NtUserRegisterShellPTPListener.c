/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C010FDF0
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0012718 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _RegisterShellPTPListener @ 0x1C010FEA0 (_RegisterShellPTPListener.c)
 */

__int64 __fastcall NtUserRegisterShellPTPListener(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL)) )
    {
      if ( !a2 || (v13 = *(_QWORD *)(v10 + 40), *(char *)(v13 + 20) >= 0) && *(char *)(v13 + 19) >= 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL) == PsGetCurrentProcessWin32Process(v12) )
        {
          v9 = RegisterShellPTPListener(v10, a2);
          goto LABEL_8;
        }
      }
      UserSetLastError(87LL, v11);
      v15 = 87LL;
    }
    else
    {
      v15 = 5LL;
    }
    UserSetLastError(v15, v11);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
