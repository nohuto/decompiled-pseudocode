/*
 * XREFs of NtUserModifyUserStartupInfoFlags @ 0x1C01F3180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserModifyUserStartupInfoFlags(int a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 1LL);
  v5 = a2 & a1 | ~a1 & *(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 800);
  *(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 800) = v5;
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return 1LL;
}
