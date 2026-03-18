/*
 * XREFs of PiPnpRtlEnableRemoveOperationDispatch @ 0x1406FA26C
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *PiPnpRtlEnableRemoveOperationDispatch()
{
  ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
