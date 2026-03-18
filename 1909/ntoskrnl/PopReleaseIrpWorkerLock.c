/*
 * XREFs of PopReleaseIrpWorkerLock @ 0x140300538
 * Callers:
 *     PopIrpWorker @ 0x14017B5B0 (PopIrpWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 */

void PopReleaseIrpWorkerLock()
{
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}
