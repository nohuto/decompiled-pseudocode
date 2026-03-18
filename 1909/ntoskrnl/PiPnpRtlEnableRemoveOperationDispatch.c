/*
 * XREFs of PiPnpRtlEnableRemoveOperationDispatch @ 0x1406FC04C
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *PiPnpRtlEnableRemoveOperationDispatch()
{
  ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
