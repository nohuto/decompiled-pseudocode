/*
 * XREFs of KseShimDatabaseClose @ 0x14067D9AC
 * Callers:
 *     KsepDbGetDriverShims @ 0x14067D8C4 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x140720CFC (KsepDbCacheReadDevice.c)
 *     KsepDbGetShimInfo @ 0x140847828 (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x1409AF930 (KseInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlAssert @ 0x1402EF760 (RtlAssert.c)
 *     KsepShimDbUnmapFromMemory @ 0x1406835F0 (KsepShimDbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x1407503E4 (KseShimDatabaseBootRelease.c)
 */

_QWORD *__fastcall KseShimDatabaseClose(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bl
  int v5; // eax
  __int64 v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( a1 != KsepShimDbHandle )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v6 + 1] = -1073740768;
    KsepHistoryErrors[2 * v6] = 590203;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("DbHandle == KsepShimDbHandle", "minkernel\\ntos\\kshim\\ksesdb.c", 0x17Bu, 0LL);
  }
  if ( KsepShimDbDuringBoot )
  {
    v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (_QWORD *)KseShimDatabaseBootRelease();
  }
  else
  {
    if ( KsepShimDbHandle )
    {
      v5 = KsepShimDbRefCount;
      if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v5 == 1) )
      {
        KsepShimDbUnmapFromMemory();
        KsepShimDbHandle = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
