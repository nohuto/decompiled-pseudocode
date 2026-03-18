/*
 * XREFs of NtUserInternalGetWindowIcon @ 0x1C0218F10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _GetWindowIcon @ 0x1C02214D8 (_GetWindowIcon.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInternalGetWindowIcon(__int64 a1, unsigned int a2)
{
  __int64 WindowIcon; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 1LL);
  WindowIcon = 0LL;
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( a2 <= 2 )
      WindowIcon = GetWindowIcon(v5, a2);
    else
      UserSetLastError(87LL, v6, v8, v9);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return WindowIcon;
}
