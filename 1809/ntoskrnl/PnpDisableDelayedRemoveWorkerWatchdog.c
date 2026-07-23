/*
 * XREFs of PnpDisableDelayedRemoveWorkerWatchdog @ 0x140289CA8
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x1406EFAC0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     PnpDisableWatchdog @ 0x140005B60 (PnpDisableWatchdog.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

void __fastcall PnpDisableDelayedRemoveWorkerWatchdog(__int64 a1)
{
  char v2; // bl

  ExAcquireFastMutex(&PnpDelayedRemoveWorkerWatchdogLock);
  v2 = PnpDisableWatchdog(*(_QWORD *)(a1 + 24));
  KeReleaseGuardedMutex(&PnpDelayedRemoveWorkerWatchdogLock);
  if ( v2 )
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 24) + 144LL), Executive, 0, 0, 0LL);
}
