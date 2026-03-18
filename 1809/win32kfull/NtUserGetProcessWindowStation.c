/*
 * XREFs of NtUserGetProcessWindowStation @ 0x1C00EEAD0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00EEB20 (_GetProcessWindowStation.c)
 */

__int64 NtUserGetProcessWindowStation()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  GetProcessWindowStation(&v5);
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  return v5;
}
