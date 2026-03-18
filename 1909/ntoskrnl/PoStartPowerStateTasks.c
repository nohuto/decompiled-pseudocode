/*
 * XREFs of PoStartPowerStateTasks @ 0x1407268E8
 * Callers:
 *     PoPowerOffMonitor @ 0x14015E574 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x1405AA000 (PnprQuiesceDevices.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406EF1E8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
