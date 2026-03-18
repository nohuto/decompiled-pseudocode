/*
 * XREFs of KseShimDatabaseBootRelease @ 0x1407503E4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14018B1B4 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x14067D9AC (KseShimDatabaseClose.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepPoolFreePaged @ 0x1400F4C94 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x140680AFC (SdbReleaseDatabase.c)
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
        SdbReleaseDatabase(KsepShimDbHandle);
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
