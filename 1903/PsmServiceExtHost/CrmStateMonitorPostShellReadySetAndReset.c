/*
 * XREFs of CrmStateMonitorPostShellReadySetAndReset @ 0x1800036B4
 * Callers:
 *     CrmStateMonitorPostShellReadyTimerCallback @ 0x180003460 (CrmStateMonitorPostShellReadyTimerCallback.c)
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x1800035F0 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800040C8 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x180004AA4 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadySetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove(qword_1800ABED0);
  if ( *(_QWORD *)(a1 + 120) != a1 + 120 )
    CrmStateMonitorListenerRemove(qword_1800ABED8);
  return CrmStateMonitorStateSet(a1, &v4, 4LL);
}
