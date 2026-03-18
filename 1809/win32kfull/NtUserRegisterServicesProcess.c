/*
 * XREFs of NtUserRegisterServicesProcess @ 0x1C021B820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00CCBB0 (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v5 = gpsi;
  if ( *(_DWORD *)(gpsi + 2280LL) || !(unsigned int)IsPrivileged(psTcb) )
  {
    UserSetLastError(5LL, v5, v3, v4);
    v2 = 0LL;
  }
  else
  {
    v6 = gpsi;
    *(_DWORD *)(gpsi + 2280LL) = a1;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v3, v4);
  return v2;
}
