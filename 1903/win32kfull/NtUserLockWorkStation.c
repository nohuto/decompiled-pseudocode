/*
 * XREFs of NtUserLockWorkStation @ 0x1C000AC30
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0089140 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
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
