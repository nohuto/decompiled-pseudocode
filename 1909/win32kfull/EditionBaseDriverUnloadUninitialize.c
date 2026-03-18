/*
 * XREFs of EditionBaseDriverUnloadUninitialize @ 0x1C011C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C00799C4 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 */

__int64 EditionBaseDriverUnloadUninitialize()
{
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  return 0LL;
}
