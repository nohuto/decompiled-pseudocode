/*
 * XREFs of CmpUnlockAppHiveLoadList @ 0x140637FE4
 * Callers:
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *CmpUnlockAppHiveLoadList()
{
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
