/*
 * XREFs of PopSuspendApps @ 0x140726208
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x1405990D4 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406A39E4 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopSuspendApps(_DWORD *a1)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS);
  PopCheckpointSystemSleep(2);
  a1[4] = 2;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS_END);
  return PopCheckpointSystemSleep(3);
}
