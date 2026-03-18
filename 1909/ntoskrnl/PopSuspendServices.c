/*
 * XREFs of PopSuspendServices @ 0x1407280FC
 * Callers:
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x1405990B4 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406EF1E8 (PopDispatchStateCallout.c)
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
