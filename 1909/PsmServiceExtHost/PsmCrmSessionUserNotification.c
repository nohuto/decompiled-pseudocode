/*
 * XREFs of PsmCrmSessionUserNotification @ 0x180040FE0
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsRundown @ 0x180003E5C (CrmGlobalsRundown.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180041060 (CrmStateMonitorTimeSinceLogonReset.c)
 */

void __fastcall PsmCrmSessionUserNotification(int a1)
{
  _DWORD *v1; // rdi

  if ( a1 == 6 )
  {
    CrmGlobalsRundown();
  }
  else if ( a1 == 5 )
  {
    RtlAcquireSRWLockShared(CrmGlobals);
    v1 = qword_1800ABE70;
    if ( qword_1800ABE70 )
    {
      RtlAcquireSRWLockExclusive((char *)qword_1800ABE70 + 8);
      v1[4] = GetCurrentThreadId();
    }
    RtlReleaseSRWLockShared(CrmGlobals);
    if ( v1 )
    {
      CrmStateMonitorTimeSinceLogonReset(v1);
      v1[4] = 0;
      RtlReleaseSRWLockExclusive(v1 + 2);
    }
  }
}
