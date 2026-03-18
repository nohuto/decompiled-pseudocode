/*
 * XREFs of MiShutdownSystem @ 0x1405ABB20
 * Callers:
 *     MmShutdownSystem @ 0x1405ABED0 (MmShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x140129A60 (MmUnlockPagableImageSection.c)
 *     CcNotifyWriteBehind @ 0x140160AF4 (CcNotifyWriteBehind.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3C00 (MiFlushAllFilesystemPages.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiZeroAllPageFiles @ 0x1405ABCD4 (MiZeroAllPageFiles.c)
 *     MmReleaseLoadLock @ 0x1406A6280 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A62E0 (MmAcquireLoadLock.c)
 *     MmLockPagableSectionByHandle @ 0x1406D4160 (MmLockPagableSectionByHandle.c)
 *     MiDeletePagingFiles @ 0x14088CEF0 (MiDeletePagingFiles.c)
 */

char MiShutdownSystem()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Lock; // rax
  PVOID *v2; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  SIZE_T v5; // r14
  PVOID PoolWithTag; // rax
  PVOID v7; // rsi
  PVOID v8; // rcx

  if ( !dword_140466204 )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140468888, 0LL);
    dword_140466204 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140468888, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)qword_140468888);
    KeAbPostRelease((ULONG_PTR)qword_140468888);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    KeSetEvent(&stru_1404684E8, 0, 0);
    if ( byte_140466202 == 1 )
    {
      if ( (MiFlags & 4) == 0 )
        MmLockPagableSectionByHandle(ExPageLockHandle);
      MiZeroAllPageFiles();
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
    }
  }
  if ( PopShutdownCleanly )
  {
    Lock = MmAcquireLoadLock();
    v2 = (PVOID *)PsLoadedModuleList;
    v3 = Lock;
    while ( v2 != &PsLoadedModuleList )
    {
      v4 = v2[17];
      if ( v4 != (_QWORD *)1 && v4 != (_QWORD *)-2LL && ((unsigned __int8)v4 & 1) == 0 )
      {
        v5 = 8LL * *v4 + 8;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x54446D4Du);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(PoolWithTag, v4, v5);
        ExFreePoolWithTag(v4, 0);
        v2[17] = v7;
      }
      v8 = v2[10];
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
        v2[10] = 0LL;
      }
      v2 = (PVOID *)*v2;
    }
    MmReleaseLoadLock(v3);
    MiDeletePagingFiles(&MiSystemPartition);
  }
  return 1;
}
