/*
 * XREFs of PopSuspendApps @ 0x1406DEBD0
 * Callers:
 *     PopIssueActionRequest @ 0x1406DE850 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140867FBC (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A60 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140569714 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406DDC60 (PopDispatchStateCallout.c)
 */

void __fastcall PopSuspendApps(_DWORD *a1, char a2)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS);
  if ( a2 )
    PopCheckpointSystemSleep(2u);
  a1[4] = 2;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS_END);
  if ( a2 )
    PopCheckpointSystemSleep(3u);
}
