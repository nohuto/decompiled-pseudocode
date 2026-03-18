/*
 * XREFs of NtUserSetProcessInteractionFlags @ 0x1C01F5820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetProcessInteractionFlags(char a1, char a2, char a3)
{
  __int64 v6; // rcx
  _BYTE *CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  EnterCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_BYTE *)PsGetCurrentProcessWin32Process(v6);
  CurrentProcessWin32Process[1025] = a1;
  CurrentProcessWin32Process[1024] = a2;
  CurrentProcessWin32Process[1026] = a3;
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return 1LL;
}
