/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x1406DEDD8
 * Callers:
 *     PopIssueActionRequest @ 0x1406DE850 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A60 (PopDiagTraceEventNoPayload.c)
 *     PfPowerActionNotify @ 0x140567F10 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140569714 (PopCheckpointSystemSleep.c)
 */

unsigned __int64 __fastcall PopDispatchSuperfetchNotification(int a1, int a2)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_START);
  PopCheckpointSystemSleep(6u);
  PfPowerActionNotify(1, (a1 >> 31) & 2, a2);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_STOP);
  return PopCheckpointSystemSleep(7u);
}
