/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x1407263F4
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x1405990D4 (PopCheckpointSystemSleep.c)
 *     PopDiagTraceSuperfetchNotification @ 0x1407263C8 (PopDiagTraceSuperfetchNotification.c)
 */

unsigned __int64 __fastcall PopDispatchSuperfetchNotification(int a1, int a2)
{
  PopDiagTraceSuperfetchNotification(1);
  PopCheckpointSystemSleep(6);
  PfPowerActionNotify(1, (a1 >> 31) & 2, a2);
  PopDiagTraceSuperfetchNotification(0);
  return PopCheckpointSystemSleep(7);
}
