/*
 * XREFs of NtUserSetCoreWindow @ 0x1C00167F0
 * Callers:
 *     <none>
 * Callees:
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0018DDC (SetWindowSubtreeCoreWindowStatus.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0023460 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  struct tagWND *v8; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHWNDND(a1, &v8);
  v5 = 0LL;
  if ( v4 )
  {
    SetOrClrWF(a2, v8, 56065LL, 1LL);
    SetWindowSubtreeCoreWindowStatus(v8, a2);
    v5 = 1LL;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
