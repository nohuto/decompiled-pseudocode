/*
 * XREFs of PsmCrmSessionUserNotification @ 0x180040360
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorTimeSinceLogonReset @ 0x1800403B0 (CrmStateMonitorTimeSinceLogonReset.c)
 */

__int64 __fastcall PsmCrmSessionUserNotification(int a1)
{
  __int64 result; // rax

  if ( a1 == 6 )
    return CrmGlobalsRundown();
  if ( a1 == 5 )
  {
    RtlAcquireSRWLockShared(CrmGlobals);
    if ( qword_18009BBD0 )
      CrmStateMonitorTimeSinceLogonReset();
    return RtlReleaseSRWLockShared(CrmGlobals);
  }
  return result;
}
