/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x140104330
 * Callers:
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     ExpAllocateBigPool @ 0x1400E6A70 (ExpAllocateBigPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1400E7498 (ExAllocateContiguousHeapPool.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x14015C570 (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTracker @ 0x14031AB5C (ExpInsertPoolTracker.c)
 *     ExAllocateHeapSpecialPool @ 0x14031EBAC (ExAllocateHeapSpecialPool.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     InitializePagedPool @ 0x1409B8280 (InitializePagedPool.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     ExPoolCleanupExpansionTable @ 0x140142060 (ExPoolCleanupExpansionTable.c)
 *     ExAllocateHeapPages @ 0x14015C990 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // si
  unsigned __int8 CurrentIrql; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  _DWORD *v13; // rbx
  unsigned __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // rax
  volatile signed __int64 *v19; // rax
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  unsigned __int8 v22; // bl
  __int64 result; // rax
  __int64 v24; // r12
  size_t v25; // r13
  unsigned __int64 v26; // r15
  char *HeapPages; // rax
  char *v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r12d
  __int64 v32; // r10
  unsigned int v33; // esi
  __int64 v34; // r9
  int v35; // r8d
  __int64 v36; // r14
  int v37; // eax
  unsigned __int8 v38; // si
  int v39; // ecx
  unsigned __int8 OldIrql; // r14
  int v41; // eax
  int v42; // eax
  struct _KPRCB *v43; // rcx
  unsigned __int8 v44; // bl
  struct _KPRCB *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  struct _KPRCB *v48; // rcx
  struct _KPRCB *v49; // rcx
  __int64 v50; // rbx
  unsigned __int8 v51; // di
  struct _KPRCB *v52; // rcx
  int v53; // [rsp+30h] [rbp-50h]
  __int64 v54; // [rsp+30h] [rbp-50h]
  __int64 v55; // [rsp+38h] [rbp-48h]
  __int64 v56; // [rsp+38h] [rbp-48h]
  volatile signed __int64 *v57; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int64 *v58; // [rsp+48h] [rbp-38h]
  unsigned __int8 v59; // [rsp+50h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-28h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]
  int v64; // [rsp+C8h] [rbp+48h]
  int v65; // [rsp+C8h] [rbp+48h]

  v3 = a3;
  v57 = 0LL;
  v58 = (volatile signed __int64 *)&ExpTaggedPoolLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v59 = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v41 = SchedulerAssist[5];
      SchedulerAssist[5] = v41 + 1;
      if ( v41 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v57, &ExpTaggedPoolLock);
  }
  else
  {
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&v57);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)&v57, v9, (__int64)&ExpTaggedPoolLock);
  }
  v64 = v3 & 0x20;
  if ( (v3 & 0x20) != 0 )
  {
    v10 = ExpSessionPoolTrackTable;
    v11 = ExpSessionPoolTrackTableSize;
    v12 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v13 = *(_DWORD **)(v12 + 8232);
    v14 = *(_QWORD *)(v12 + 8240);
  }
  else
  {
    v10 = PoolTrackTable;
    v11 = PoolTrackTableSize;
    v14 = PoolTrackTableExpansionSize;
    v13 = PoolTrackTableExpansion;
  }
  v53 = v11;
  v15 = 0;
  v55 = v10;
  if ( v14 )
  {
    v16 = 0LL;
    do
    {
      v17 = v13[14 * v16];
      if ( v17 == a1 )
        break;
      if ( !v17 )
      {
        v13[14 * v15] = a1;
        break;
      }
      v16 = ++v15;
    }
    while ( v15 < v14 );
  }
  if ( v15 != v14 )
  {
    v18 = &v13[14 * v15];
    if ( (v3 & 1) != 0 )
    {
      ++v18[5];
      v18[4] += a2;
    }
    else
    {
      ++v18[2];
      v18[1] += a2;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v57, retaddr);
    }
    else
    {
      _m_prefetchw(&v57);
      v19 = v57;
      if ( !v57 )
      {
        if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v58, 0LL, (signed __int64)&v57) == &v57 )
          goto LABEL_21;
        v19 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v57);
      }
      v57 = 0LL;
      _InterlockedXor64(v19 + 1, 1uLL);
    }
LABEL_21:
    v20 = KeGetCurrentPrcb();
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v42 = v21[5] - 1;
        v21[5] = v42;
        if ( !v42 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    v22 = v59;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v59 < 2u )
    {
      v43 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v43);
    }
    result = v22;
    __writecr8(v22);
    return result;
  }
  if ( *(_DWORD *)(56 * v11 + v10 - 56) )
  {
    KxReleaseQueuedSpinLock(&v57);
    v44 = v59;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v59 < 2u )
    {
      v45 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v45);
    }
    __writecr8(v44);
    result = v10 + 56LL * (unsigned int)(v11 - 1);
    if ( (v3 & 1) != 0 )
    {
      v46 = 32LL;
      v47 = 40LL;
    }
    else
    {
      v46 = 8LL;
      v47 = 16LL;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(result + v47));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(result + v46), a2);
    return result;
  }
  v24 = 56 * v14;
  v25 = (56 * v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v26 = v25 + 4096;
  HeapPages = (char *)ExAllocateHeapPages(512LL, v25 + 4096);
  v28 = HeapPages;
  if ( !HeapPages )
  {
    v50 = v55 + 56LL * (unsigned int)(v53 - 1);
    *(_DWORD *)v50 = 1818654287;
    KxReleaseQueuedSpinLock(&v57);
    v51 = v59;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v59 < 2u )
    {
      v52 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v52);
    }
    __writecr8(v51);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v50 + 40));
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + 32), a2);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v50 + 16));
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + 8), a2);
    }
  }
  if ( v13 )
    memmove(HeapPages, v13, v25);
  memset(&v28[v24], 0, v26 - v24);
  if ( v64 )
  {
    v29 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    *(_QWORD *)(v29 + 8232) = v28;
    *(_QWORD *)(v29 + 8240) = (v25 + 4096) / 0x38;
  }
  else
  {
    PoolTrackTableExpansion = v28;
    PoolTrackTableExpansionSize = (v25 + 4096) / 0x38;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v30 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v30 = EtwTracePool(3616, 512, 1819242320, (_DWORD)v28, v25 + 4096);
  LODWORD(v30) = KeGetPcr()->Prcb.Number;
  v31 = PoolTrackTableMask;
  v32 = PoolTrackTableSize;
  v33 = PoolTrackTableMask & 0x40DEDA5;
  v56 = PoolTrackTableSize;
  v34 = (__int64)*(&ExPoolTagTables + v30);
  v35 = PoolTrackTableMask & 0x40DEDA5;
  v54 = v34;
  v65 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v36 = 56LL * v33;
    v37 = *(_DWORD *)(v36 + v34);
    if ( v37 == 1819242320 )
      break;
    if ( v37 )
    {
LABEL_40:
      v33 = v31 & (v33 + 1);
      if ( v33 == v35 )
      {
        ExpInsertPoolTrackerExpansion(1819242320LL, v25 + 4096, 512LL);
        goto LABEL_43;
      }
    }
    else
    {
      v39 = *(_DWORD *)(v36 + PoolTrackTable);
      if ( v39 )
      {
        *(_DWORD *)(v36 + v34) = v39;
      }
      else
      {
        if ( v33 == v32 - 1 )
          goto LABEL_40;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 56LL * v33) )
        {
          *(_DWORD *)(PoolTrackTable + 56LL * v33) = 1819242320;
          *(_DWORD *)(v36 + v54) = 1819242320;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v48 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v48);
        }
        __writecr8(OldIrql);
        v35 = v65;
        v34 = v54;
        v32 = v56;
      }
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v36 + v34 + 16));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + v34 + 8), v26);
LABEL_43:
  KxReleaseQueuedSpinLock(&v57);
  v38 = v59;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v59 < 2u )
  {
    v49 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v49);
  }
  __writecr8(v38);
  if ( v13 )
    ExPoolCleanupExpansionTable(v13, v25);
  return ExpInsertPoolTrackerExpansion(a1, a2, a3);
}
