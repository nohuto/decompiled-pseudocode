/*
 * XREFs of PopSuspendServices @ 0x1406DFED8
 * Callers:
 *     PopIssueActionRequest @ 0x1406DFAF0 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14086921C (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406DEF00 (PopDispatchStateCallout.c)
 */

void __fastcall PopSuspendServices(_DWORD *a1, char a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES);
  if ( a2 )
    PopCheckpointSystemSleep(4u);
  a1[4] = 3;
  PopDispatchStateCallout(a1, (__int64)&v4);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES_END);
  if ( a2 )
    PopCheckpointSystemSleep(5u);
}
