/*
 * XREFs of PopResumeApps @ 0x1406DFF48
 * Callers:
 *     PopIssueActionRequest @ 0x1406DFAF0 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14086921C (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406DEF00 (PopDispatchStateCallout.c)
 */

void __fastcall PopResumeApps(_DWORD *a1, char a2)
{
  PopHiberBootForceMonitorOff = 0;
  a1[4] = 5;
  qword_140418C10 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  if ( a2 )
    PopCheckpointSystemSleep(0x25u);
  PopDispatchStateCallout(a1, 0LL);
  qword_140418C18 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
  if ( a2 )
    PopCheckpointSystemSleep(0x26u);
}
