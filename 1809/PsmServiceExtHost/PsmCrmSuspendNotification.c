/*
 * XREFs of PsmCrmSuspendNotification @ 0x18003EF50
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180032410 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall PsmCrmSuspendNotification(unsigned __int8 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlAcquireSRWLockShared(CrmGlobals);
  if ( qword_18009BBC0 )
    CrmStateMonitorStateSet((void **)qword_18009BBC0, &v2, 4uLL, 0);
  return RtlReleaseSRWLockShared(CrmGlobals);
}
