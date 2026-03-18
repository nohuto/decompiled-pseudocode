/*
 * XREFs of PopAcquireIrpWorkerLock @ 0x14030051C
 * Callers:
 *     PopIrpWorker @ 0x14017B5B0 (PopIrpWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 */

void PopAcquireIrpWorkerLock()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
}
