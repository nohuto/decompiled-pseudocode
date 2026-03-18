/*
 * XREFs of UNLOCK_CM_RM_LIST @ 0x1406BAA20
 * Callers:
 *     CmpRunDownCmRM @ 0x1406BA870 (CmpRunDownCmRM.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 */

_QWORD *UNLOCK_CM_RM_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
