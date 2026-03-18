/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C0132950
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C00B3148 (IsShellProcess.c)
 *     _RegisterShellPTPListener @ 0x1C0132A18 (_RegisterShellPTPListener.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
    {
      if ( !a2 || (v15 = *(_QWORD *)(v10 + 40), *(char *)(v15 + 20) >= 0) && *(char *)(v15 + 19) >= 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v12) )
        {
          v9 = RegisterShellPTPListener(v10, a2);
          goto LABEL_8;
        }
      }
      UserSetLastError(87LL, v11, v13, v14);
      v17 = 87LL;
    }
    else
    {
      v17 = 5LL;
    }
    UserSetLastError(v17, v11, v13, v14);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
