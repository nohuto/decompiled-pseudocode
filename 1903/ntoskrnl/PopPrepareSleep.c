/*
 * XREFs of PopPrepareSleep @ 0x14015E7E0
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     PopCheckpointSystemSleep @ 0x1405990D4 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406A39E4 (PopDispatchStateCallout.c)
 *     PopDiagTracePrepareSleep @ 0x14072521C (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140725238 (PopDiagTracePrepareSleepEnd.c)
 */

__int64 __fastcall PopPrepareSleep(__int64 a1)
{
  PopDiagTracePrepareSleep();
  PopCheckpointSystemSleep(54LL);
  *(_DWORD *)(a1 + 16) = 13;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTracePrepareSleepEnd();
  return PopCheckpointSystemSleep(55LL);
}
