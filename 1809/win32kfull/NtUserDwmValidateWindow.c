/*
 * XREFs of NtUserDwmValidateWindow @ 0x1C00B1E40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetDesktopView @ 0x1C00B2670 (GetDesktopView.c)
 *     LockProcessByClientId @ 0x1C00B2D44 (LockProcessByClientId.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) && (int)LockProcessByClientId(v2, &Object) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process )
        LOBYTE(v9) = GetDesktopView(ProcessWin32Process, *(_QWORD *)(v10 + 24)) != 0;
      else
        UserSetLastError(5LL, v16, v17, v18);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError(5LL, v12, v13, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
