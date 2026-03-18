/*
 * XREFs of NtUserSetProcessInteractionFlags @ 0x1C0234CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetProcessInteractionFlags(char a1, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *CurrentProcessWin32Process; // rax
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_BYTE *)PsGetCurrentProcessWin32Process(v7, v6);
  CurrentProcessWin32Process[1025] = a1;
  CurrentProcessWin32Process[1024] = a2;
  CurrentProcessWin32Process[1026] = a3;
  UserSessionSwitchLeaveCrit(v9);
  return 1LL;
}
