/*
 * XREFs of PiPnpRtlOperationListReleaseLock @ 0x14086331C
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *PiPnpRtlOperationListReleaseLock()
{
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
