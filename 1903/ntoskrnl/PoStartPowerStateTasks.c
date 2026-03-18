/*
 * XREFs of PoStartPowerStateTasks @ 0x140724A48
 * Callers:
 *     PoPowerOffMonitor @ 0x14015DED4 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x1405AA020 (PnprQuiesceDevices.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406A39E4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
