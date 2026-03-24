/*
 * XREFs of PopResumeApps @ 0x1406DECA8
 * Callers:
 *     PopIssueActionRequest @ 0x1406DE850 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140867FBC (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A60 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140569714 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406DDC60 (PopDispatchStateCallout.c)
 */

void __fastcall PopResumeApps(_DWORD *a1, char a2)
{
  PopHiberBootForceMonitorOff = 0;
  a1[4] = 5;
  qword_140417B70 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  if ( a2 )
    PopCheckpointSystemSleep(0x25u);
  PopDispatchStateCallout(a1, 0LL);
  qword_140417B78 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
  if ( a2 )
    PopCheckpointSystemSleep(0x26u);
}
