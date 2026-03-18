/*
 * XREFs of PopResumeServices @ 0x1406DED60
 * Callers:
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140867FDC (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A40 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140569714 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406DDC80 (PopDispatchStateCallout.c)
 */

void __fastcall PopResumeServices(_DWORD *a1, char a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  a1[4] = 6;
  qword_140417B80 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  if ( a2 )
    PopCheckpointSystemSleep(0x27u);
  PopDispatchStateCallout(a1, (__int64)&v4);
  qword_140417B88 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
  if ( a2 )
    PopCheckpointSystemSleep(0x28u);
}
