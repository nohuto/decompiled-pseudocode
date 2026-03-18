/*
 * XREFs of PiDmObjectReleaseLock @ 0x14071CEC4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall PiDmObjectReleaseLock(ULONG_PTR a1)
{
  ExReleasePushLockEx(a1, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
