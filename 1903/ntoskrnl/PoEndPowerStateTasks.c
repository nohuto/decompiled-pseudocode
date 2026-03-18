/*
 * XREFs of PoEndPowerStateTasks @ 0x140724A28
 * Callers:
 *     PoPowerOffMonitor @ 0x14015DED4 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1405AAB60 (PnprWakeDevices.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406A39E4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
