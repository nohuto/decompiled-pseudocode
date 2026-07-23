/*
 * XREFs of PnpDisablePnpEventWorkerWatchdog @ 0x140005B14
 * Callers:
 *     PnpDeviceEventWorker @ 0x14058CBC0 (PnpDeviceEventWorker.c)
 *     PnpProcessCompletedEject @ 0x140829480 (PnpProcessCompletedEject.c)
 * Callees:
 *     PnpDisableWatchdog @ 0x140005B60 (PnpDisableWatchdog.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

void __fastcall PnpDisablePnpEventWorkerWatchdog(__int64 a1)
{
  char v2; // bl

  ExAcquireFastMutex(&PnpEventWorkerWatchdogLock);
  v2 = PnpDisableWatchdog(*(_QWORD *)(a1 + 104));
  KeReleaseGuardedMutex(&PnpEventWorkerWatchdogLock);
  if ( v2 )
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 104) + 144LL), Executive, 0, 0, 0LL);
}
