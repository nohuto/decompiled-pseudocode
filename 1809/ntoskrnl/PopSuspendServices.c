/*
 * XREFs of PopSuspendServices @ 0x1406DEC38
 * Callers:
 *     PopIssueActionRequest @ 0x1406DE850 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140867FBC (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A60 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140569714 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406DDC60 (PopDispatchStateCallout.c)
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
