/*
 * XREFs of NtUserSetProcessRestrictionExemption @ 0x1C021D190
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProcessRestrictionExemption(int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    *(_DWORD *)(CurrentProcessWin32Process + 820) ^= (*(_DWORD *)(CurrentProcessWin32Process + 820) ^ (a1 << 8)) & 0x100;
  }
  else
  {
    UserSetLastError(5LL, v3, v5, v6);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v2;
}
