/*
 * XREFs of PnpEventWorkerWatchdogWorkItem @ 0x140289D40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289D7C (PnpProcessWatchdogWorkItem.c)
 */

void __fastcall PnpEventWorkerWatchdogWorkItem(__int64 a1)
{
  ExAcquireFastMutex(&PnpEventWorkerWatchdogLock);
  PnpProcessWatchdogWorkItem(a1, PnpEventWorkerWatchdogWorkItem);
  KeReleaseGuardedMutex(&PnpEventWorkerWatchdogLock);
}
