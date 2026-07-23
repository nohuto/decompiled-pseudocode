/*
 * XREFs of PopResumeServices @ 0x1406DFFE0
 * Callers:
 *     PopIssueActionRequest @ 0x1406DFAF0 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14086921C (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406DEF00 (PopDispatchStateCallout.c)
 */

void __fastcall PopResumeServices(_DWORD *a1, char a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  a1[4] = 6;
  qword_140418C20 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  if ( a2 )
    PopCheckpointSystemSleep(0x27u);
  PopDispatchStateCallout(a1, (__int64)&v4);
  qword_140418C28 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
  if ( a2 )
    PopCheckpointSystemSleep(0x28u);
}
