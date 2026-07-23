/*
 * XREFs of MiShutdownSystem @ 0x14057CBF4
 * Callers:
 *     MmShutdownSystem @ 0x14057CEF0 (MmShutdownSystem.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140097E40 (MmUnlockPagableImageSection.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x1401531C8 (CcNotifyWriteBehind.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiZeroAllPageFiles @ 0x14057CD54 (MiZeroAllPageFiles.c)
 *     MmLockPagableSectionByHandle @ 0x140620240 (MmLockPagableSectionByHandle.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     MiDeletePagingFiles @ 0x140854460 (MiDeletePagingFiles.c)
 */

char MiShutdownSystem()
{
  __int64 Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  SIZE_T v4; // r14
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  PVOID v7; // rcx

  if ( !dword_14043B824 )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    dword_14043B824 = 1;
    KeSetEvent(&stru_14043DA68, 0, 0);
    if ( byte_14043B822 == 1 )
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
    v1 = (PVOID *)PsLoadedModuleList;
    v2 = Lock;
    while ( v1 != &PsLoadedModuleList )
    {
      v3 = v1[17];
      if ( v3 != (_QWORD *)1 && v3 != (_QWORD *)-2LL && ((unsigned __int8)v3 & 1) == 0 )
      {
        v4 = 8LL * *v3 + 8;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x54446D4Du);
        v6 = PoolWithTag;
        if ( !PoolWithTag )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(PoolWithTag, v3, v4);
        ExFreePoolWithTag(v3, 0);
        v1[17] = v6;
      }
      v7 = v1[10];
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0);
        v1[10] = 0LL;
      }
      v1 = (PVOID *)*v1;
    }
    MmReleaseLoadLock(v2);
    MiDeletePagingFiles(&MiSystemPartition);
  }
  return 1;
}
