/*
 * XREFs of PoEndPowerStateTasks @ 0x1406DEE90
 * Callers:
 *     PoPowerOffMonitor @ 0x140142DA8 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x14057BCE0 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406DEF00 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
