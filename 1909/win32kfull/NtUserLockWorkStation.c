/*
 * XREFs of NtUserLockWorkStation @ 0x1C000AC20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x1C00889B0 (CheckWinstaAttributeAccess.c)
 */

__int64 NtUserLockWorkStation()
{
  __int64 v0; // rbx

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
  UserSessionSwitchLeaveCrit();
  return v0;
}
