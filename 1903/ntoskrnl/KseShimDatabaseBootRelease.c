/*
 * XREFs of KseShimDatabaseBootRelease @ 0x140774A40
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1401947F4 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x14070AA14 (KseShimDatabaseClose.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x140154098 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x140708CB4 (SdbReleaseDatabase.c)
 */

_QWORD *KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    v1 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v1 == 1) )
    {
      if ( KsepShimDbHandle )
      {
        SdbReleaseDatabase((__int64)KsepShimDbHandle);
        KsepShimDbHandle = 0LL;
        KsepPoolFreePaged(KsepShimDbAddress);
        KsepShimDbAddress = 0LL;
      }
      KsepShimDbDuringBoot = 0;
    }
  }
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
