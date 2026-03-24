/*
 * XREFs of PnpEnableDelayedRemoveWorkerWatchdog @ 0x140289B1C
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x1406EE820 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x140005C04 (PnpEnableWatchdog.c)
 */

__int64 __fastcall PnpEnableDelayedRemoveWorkerWatchdog(__int64 a1)
{
  return PnpEnableWatchdog(*(_QWORD *)(a1 + 24), (__int64)PnpDelayedRemoveWorkerWatchdogWorkItem, a1, 3u);
}
