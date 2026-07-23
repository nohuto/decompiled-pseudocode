/*
 * XREFs of PnpEnablePnpEventWorkerWatchdog @ 0x140005BDC
 * Callers:
 *     PnpDeviceEventWorker @ 0x14058CBC0 (PnpDeviceEventWorker.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x140005C04 (PnpEnableWatchdog.c)
 */

__int64 __fastcall PnpEnablePnpEventWorkerWatchdog(__int64 a1)
{
  return PnpEnableWatchdog(*(_QWORD *)(a1 + 104), PnpEventWorkerWatchdogWorkItem, a1, 1LL);
}
