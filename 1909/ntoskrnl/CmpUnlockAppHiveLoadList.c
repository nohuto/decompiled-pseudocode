/*
 * XREFs of CmpUnlockAppHiveLoadList @ 0x14063B06C
 * Callers:
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *CmpUnlockAppHiveLoadList()
{
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
