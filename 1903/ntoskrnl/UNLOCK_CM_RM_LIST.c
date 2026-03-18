/*
 * XREFs of UNLOCK_CM_RM_LIST @ 0x14069BAF0
 * Callers:
 *     CmpRunDownCmRM @ 0x14069B940 (CmpRunDownCmRM.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 */

_QWORD *UNLOCK_CM_RM_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
