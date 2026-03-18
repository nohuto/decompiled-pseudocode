/*
 * XREFs of PopReleaseIrpWorkerLock @ 0x140300A88
 * Callers:
 *     PopIrpWorker @ 0x14017AEC0 (PopIrpWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 */

void PopReleaseIrpWorkerLock()
{
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}
