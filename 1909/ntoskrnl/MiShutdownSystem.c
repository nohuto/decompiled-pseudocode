/*
 * XREFs of MiShutdownSystem @ 0x1405ABB00
 * Callers:
 *     MmShutdownSystem @ 0x1405ABEB0 (MmShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x14012A480 (MmUnlockPagableImageSection.c)
 *     CcNotifyWriteBehind @ 0x14016A6C8 (CcNotifyWriteBehind.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3960 (MiFlushAllFilesystemPages.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiZeroAllPageFiles @ 0x1405ABCB4 (MiZeroAllPageFiles.c)
 *     MmLockPagableSectionByHandle @ 0x1406A14E0 (MmLockPagableSectionByHandle.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     MiDeletePagingFiles @ 0x14088C710 (MiDeletePagingFiles.c)
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

  if ( !dword_140465F04 )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_1404685C8, 0LL);
    dword_140465F04 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_1404685C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)qword_1404685C8);
    KeAbPostRelease((ULONG_PTR)qword_1404685C8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    KeSetEvent(&stru_140468228, 0, 0);
    if ( byte_140465F02 == 1 )
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
