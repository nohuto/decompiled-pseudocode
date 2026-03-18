/*
 * XREFs of PopAcquireIrpWorkerLock @ 0x140300A6C
 * Callers:
 *     PopIrpWorker @ 0x14017AEC0 (PopIrpWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 */

void PopAcquireIrpWorkerLock()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
}
