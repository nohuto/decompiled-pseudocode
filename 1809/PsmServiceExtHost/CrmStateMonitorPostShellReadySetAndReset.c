/*
 * XREFs of CrmStateMonitorPostShellReadySetAndReset @ 0x180031CB4
 * Callers:
 *     CrmStateMonitorPostShellReadyTimerCallback @ 0x180007190 (CrmStateMonitorPostShellReadyTimerCallback.c)
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x180032C50 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 *     CrmStateMonitorStateSet @ 0x180032410 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadySetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove(qword_18009BC30);
  if ( *(_QWORD *)(a1 + 120) != a1 + 120 )
    CrmStateMonitorListenerRemove(qword_18009BC38);
  return CrmStateMonitorStateSet(a1, &v4, 4LL);
}
