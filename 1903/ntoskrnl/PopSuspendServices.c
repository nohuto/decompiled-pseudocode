/*
 * XREFs of PopSuspendServices @ 0x14072625C
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x1405990D4 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406A39E4 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopSuspendServices(_DWORD *a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES);
  PopCheckpointSystemSleep(4);
  a1[4] = 3;
  PopDispatchStateCallout(a1, (__int64)&v3);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES_END);
  return PopCheckpointSystemSleep(5);
}
