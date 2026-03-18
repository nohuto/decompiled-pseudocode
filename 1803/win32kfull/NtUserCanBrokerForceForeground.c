/*
 * XREFs of NtUserCanBrokerForceForeground @ 0x1C0006380
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C006DC70 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 */

__int64 __fastcall NtUserCanBrokerForceForeground(_DWORD *a1)
{
  int v2; // ebx
  int v3; // eax

  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL)) )
  {
    v3 = CheckLegacyForegroundAccess();
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_DWORD *)MmUserProbeAddress;
    *a1 = v3;
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
