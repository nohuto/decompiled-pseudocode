/*
 * XREFs of PoStartPowerStateTasks @ 0x1406DDBF0
 * Callers:
 *     PoPowerOffMonitor @ 0x140142C88 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x14057A1E0 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406DDC80 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
