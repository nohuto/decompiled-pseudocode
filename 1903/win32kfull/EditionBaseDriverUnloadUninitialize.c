/*
 * XREFs of EditionBaseDriverUnloadUninitialize @ 0x1C0141CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C00D9264 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 */

__int64 EditionBaseDriverUnloadUninitialize()
{
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  return 0LL;
}
