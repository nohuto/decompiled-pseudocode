/*
 * XREFs of NtUserDisableProcessWindowFiltering @ 0x1C010ACB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 NtUserDisableProcessWindowFiltering()
{
  __int64 v0; // rcx

  EnterCrit(0LL, 1LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 812LL) |= 0x800u;
  v0 = *(_QWORD *)(gptiCurrent + 472LL);
  if ( v0 )
    *(_QWORD *)(v0 + 224) |= 4uLL;
  UserSessionSwitchLeaveCrit(v0);
  return 1LL;
}
