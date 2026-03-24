/*
 * XREFs of PoEndPowerStateTasks @ 0x1406DDBF0
 * Callers:
 *     PoPowerOffMonitor @ 0x140142CA8 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x14057ACE0 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406DDC60 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
