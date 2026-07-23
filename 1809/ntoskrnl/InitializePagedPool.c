/*
 * XREFs of InitializePagedPool @ 0x1409B8280
 * Callers:
 *     MiBuildPagedPool @ 0x1409B7A44 (MiBuildPagedPool.c)
 *     InitializePool @ 0x1409B7DF8 (InitializePool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MmGetNumberOfPhysicalPages @ 0x1406269DC (MmGetNumberOfPhysicalPages.c)
 *     ExInitializePoolDescriptor @ 0x140716CEC (ExInitializePoolDescriptor.c)
 *     MmIsVerifierEnabled @ 0x140922490 (MmIsVerifierEnabled.c)
 */

int InitializePagedPool()
{
  __int16 v0; // r8
  int v1; // eax
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rsi
  int v10; // r14d
  unsigned int v11; // ebp
  int v12; // r15d
  __int64 v13; // rbx
  int v14; // eax
  unsigned __int64 NumberOfPhysicalPages; // rax
  int v16; // ecx
  int v17; // ecx
  unsigned __int8 OldIrql; // bl
  __int64 v19; // rbx
  __int64 IndependentPages; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG VerifierFlags; // [rsp+80h] [rbp+8h] BYREF

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
    v19 = 0LL;
    if ( v1 != -1 )
    {
      do
      {
        IndependentPages = MmAllocateIndependentPagesEx(0x1140uLL, (_DWORD)v19 != 0 ? v19 - 1 : 0, 0LL, 0);
        if ( !IndependentPages )
          KeBugCheckEx(0x41u, 0x1140uLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
        ExpPagedPoolDescriptor[v19] = IndependentPages;
        if ( !(_DWORD)v19 )
          qword_140542698 = IndependentPages;
        ExInitializePoolDescriptor(IndependentPages, 1, v19);
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < ExpNumberOfPagedPools + 1 );
    }
  }
  else
  {
    v2 = 4416LL * (unsigned int)(v1 + 1);
    v3 = MmAllocateIndependentPagesEx(v2, 0, 0LL, 0);
    v4 = v3;
    if ( !v3 )
      KeBugCheckEx(0x41u, v2, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
    qword_140542698 = v3;
    v5 = 0LL;
    if ( ExpNumberOfPagedPools != -1 )
    {
      do
      {
        ExpPagedPoolDescriptor[v5] = v4;
        ExInitializePoolDescriptor(v4, 1, v5);
        v4 += 4416LL;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < ExpNumberOfPagedPools + 1 );
    }
  }
  v6 = (56 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v7 = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 0x6C6F6F50u, PoolTrackTable, (56 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v7) = KeGetPcr()->Prcb.Number;
  v8 = PoolTrackTableSize;
  v9 = (__int64)*(&ExPoolTagTables + v7);
  v10 = PoolTrackTableMask;
  v11 = PoolTrackTableMask & 0x40DEDA5;
  v12 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v13 = 56LL * v11;
    v14 = *(_DWORD *)(v13 + v9);
    if ( v14 == 1819242320 )
      break;
    if ( v14 )
    {
LABEL_17:
      v11 = v10 & (v11 + 1);
      if ( v11 == v12 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v6, 0x200u);
        goto LABEL_19;
      }
    }
    else
    {
      v17 = *(_DWORD *)(v13 + PoolTrackTable);
      if ( v17 )
      {
        *(_DWORD *)(v13 + v9) = v17;
      }
      else
      {
        if ( v11 == v8 - 1 )
          goto LABEL_17;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v13 + PoolTrackTable) )
        {
          *(_DWORD *)(v13 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v13 + v9) = 1819242320;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
  _InterlockedAdd64((volatile signed __int64 *)(v13 + v9 + 16), 1uLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + v9 + 8), v6);
LABEL_19:
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
  if ( NumberOfPhysicalPages >= 0x1FC00 && MmSpecialPoolTag == v16 )
  {
    LODWORD(NumberOfPhysicalPages) = MmIsVerifierEnabled(&VerifierFlags);
    if ( (NumberOfPhysicalPages & 0x80000000) != 0LL )
      _InterlockedOr(&ExpPoolFlags, 0x100u);
  }
  return NumberOfPhysicalPages;
}
