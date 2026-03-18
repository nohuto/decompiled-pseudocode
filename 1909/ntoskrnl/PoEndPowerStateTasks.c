/*
 * XREFs of PoEndPowerStateTasks @ 0x1407268C8
 * Callers:
 *     PoPowerOffMonitor @ 0x14015E574 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1405AAB40 (PnprWakeDevices.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406EF1E8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
