/*
 * XREFs of NtUserLockWorkStation @ 0x1C00086D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x1C00A56F0 (CheckWinstaAttributeAccess.c)
 */

__int64 NtUserLockWorkStation()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 1LL);
  v0 = 0LL;
  if ( (unsigned int)CheckWinstaAttributeAccess(0x10u) )
  {
    PostWinlogonMessage(1027LL, 0LL);
    v0 = 1LL;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
