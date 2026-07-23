/*
 * XREFs of PnpDelayedRemoveWorkerWatchdogWorkItem @ 0x140289C20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289D7C (PnpProcessWatchdogWorkItem.c)
 */

void __fastcall PnpDelayedRemoveWorkerWatchdogWorkItem(__int64 a1)
{
  ExAcquireFastMutex(&PnpDelayedRemoveWorkerWatchdogLock);
  PnpProcessWatchdogWorkItem(a1, PnpDelayedRemoveWorkerWatchdogWorkItem);
  KeReleaseGuardedMutex(&PnpDelayedRemoveWorkerWatchdogLock);
}
