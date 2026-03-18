/*
 * XREFs of PopResumeApps @ 0x14072815C
 * Callers:
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x1405990B4 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406EF1E8 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopResumeApps(_DWORD *a1)
{
  PopHiberBootForceMonitorOff = 0;
  a1[4] = 5;
  qword_1404434B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  PopCheckpointSystemSleep(37);
  PopDispatchStateCallout(a1, 0LL);
  qword_1404434B8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
  return PopCheckpointSystemSleep(38);
}
