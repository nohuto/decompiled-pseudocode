/*
 * XREFs of InitializePagedPool @ 0x1409EED38
 * Callers:
 *     MiBuildPagedPool @ 0x1409EE5C8 (MiBuildPagedPool.c)
 *     InitializePool @ 0x1409EE8D0 (InitializePool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1401160DC (ExpInsertPoolTrackerExpansion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     EtwTracePool @ 0x14032DF54 (EtwTracePool.c)
 *     MmGetNumberOfPhysicalPages @ 0x1405CADC0 (MmGetNumberOfPhysicalPages.c)
 *     ExInitializePoolDescriptor @ 0x140740044 (ExInitializePoolDescriptor.c)
 */

__int64 InitializePagedPool()
{
  __int16 v0; // r8
  int v1; // eax
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r8d
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // ecx
  unsigned int v12; // ebp
  unsigned __int8 OldIrql; // bl
  __int64 v14; // rbx
  __int64 IndependentPages; // rax
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // r13
  __int64 v19; // rsi
  int v20; // r15d
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v0 = KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    ExpNumberOfPagedPools = (unsigned __int16)KeNumberNodes;
    if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
      ExpNumberOfPagedPools = 127;
  }
  else if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0) <= 0x10000 )
  {
    ExpNumberOfPagedPools = 1;
  }
  v1 = ExpNumberOfPagedPools;
  if ( (unsigned int)ExpNumberOfPagedPools > 0x40 )
  {
    v1 = 64;
    ExpNumberOfPagedPools = 64;
  }
  if ( (unsigned __int16)v0 > 1u )
  {
    v14 = 0LL;
    if ( v1 != -1 )
    {
      do
      {
        IndependentPages = MmAllocateIndependentPagesEx(0x100uLL, (_DWORD)v14 != 0 ? v14 - 1 : 0, 0LL, 0);
        if ( !IndependentPages )
          KeBugCheckEx(0x41u, 0x100uLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
        ExpPagedPoolDescriptor[v14] = IndependentPages;
        if ( !(_DWORD)v14 )
          qword_140572918 = IndependentPages;
        ExInitializePoolDescriptor(IndependentPages, 1, v14);
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < ExpNumberOfPagedPools + 1 );
    }
  }
  else
  {
    v2 = (unsigned __int64)(unsigned int)(v1 + 1) << 8;
    v3 = MmAllocateIndependentPagesEx(v2, 0, 0LL, 0);
    v4 = v3;
    if ( !v3 )
      KeBugCheckEx(0x41u, v2, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
    qword_140572918 = v3;
    v5 = 0LL;
    if ( ExpNumberOfPagedPools != -1 )
    {
      do
      {
        ExpPagedPoolDescriptor[v5] = v4;
        ExInitializePoolDescriptor(v4, 1, v5);
        v4 = v6 + 256;
        v5 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v5 < ExpNumberOfPagedPools + 1 );
    }
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = (56 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v16 = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 0x6C6F6F50u, PoolTrackTable, (56 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v16) = KeGetPcr()->Prcb.Number;
  v17 = PoolTrackTableMask;
  v18 = PoolTrackTableSize;
  v12 = PoolTrackTableMask & 0x40DEDA5;
  v19 = (__int64)*(&ExPoolTagTables + v16);
  v20 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v9 = 56LL * v12;
    result = *(unsigned int *)(v9 + v19);
    if ( (_DWORD)result == 1819242320 )
      break;
    if ( (_DWORD)result )
    {
LABEL_16:
      v12 = v17 & (v12 + 1);
      if ( v12 == v20 )
        return ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v8, 0x200u);
    }
    else
    {
      v11 = *(_DWORD *)(v9 + PoolTrackTable);
      if ( v11 )
      {
        *(_DWORD *)(v9 + v19) = v11;
      }
      else
      {
        if ( v12 == v18 - 1 )
          goto LABEL_16;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v9 + PoolTrackTable) )
        {
          *(_DWORD *)(v9 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v9 + v19) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(OldIrql);
      }
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(v9 + v19 + 16), 1uLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + v19 + 8), v8);
  return result;
}
