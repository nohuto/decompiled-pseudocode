/*
 * XREFs of NtUserSetCoreWindow @ 0x1C000BCF0
 * Callers:
 *     <none>
 * Callees:
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C000C9AC (SetWindowSubtreeCoreWindowStatus.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006E0A0 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v11; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHWNDND(a1, &v11);
  v5 = 0LL;
  if ( v4 )
  {
    SetOrClrWF(a2, v11, 56065LL, 1LL);
    SetWindowSubtreeCoreWindowStatus(v11, a2);
    v5 = 1LL;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
