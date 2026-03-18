/*
 * XREFs of PiPnpRtlOperationListReleaseLock @ 0x140863C1C
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *PiPnpRtlOperationListReleaseLock()
{
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
