/*
 * XREFs of NtUserGetProcessWindowStation @ 0x1C007D160
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C007D1B0 (_GetProcessWindowStation.c)
 */

__int64 NtUserGetProcessWindowStation()
{
  __int64 v0; // rcx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  GetProcessWindowStation(&v2);
  UserSessionSwitchLeaveCrit(v0);
  return v2;
}
