/*
 * XREFs of NtUserSetCoreWindow @ 0x1C00C1070
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0014654 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00C1910 (SetWindowSubtreeCoreWindowStatus.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, unsigned int a2)
{
  BOOL v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagWND *v12; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHWNDND(a1, &v12);
  v6 = 0LL;
  if ( v4 )
  {
    SetOrClrWF(a2, v12, 56065LL, 1LL);
    SetWindowSubtreeCoreWindowStatus(v12, a2);
    v6 = 1LL;
  }
  else
  {
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
