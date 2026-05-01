/*
 * XREFs of CrmStateMonitorDelayedAcTimerCallback @ 0x18007E4F0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800040C8 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorDelayedAcTimerCallback(__int64 a1, void **a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 1;
  return CrmStateMonitorStateSet(a2, &v3, 4uLL, 0);
}
