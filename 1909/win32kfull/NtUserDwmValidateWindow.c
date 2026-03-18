/*
 * XREFs of NtUserDwmValidateWindow @ 0x1C0021240
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C0020CE8 (LockProcessByClientId.c)
 *     GetDesktopView @ 0x1C0021DE0 (GetDesktopView.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, int a2)
{
  void *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = (void *)a2;
  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  if ( v4 )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) && (int)LockProcessByClientId(v2, (PEPROCESS *)&Object) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process )
        LOBYTE(v9) = GetDesktopView(ProcessWin32Process) != 0;
      else
        UserSetLastError(5LL);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError(5LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v9;
}
