/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x1401160DC
 * Callers:
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1401160DC (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateContiguousHeapPool @ 0x140118034 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1401182E4 (ExInsertPoolTag.c)
 *     ExpResizeBigPageTable @ 0x140156EA8 (ExpResizeBigPageTable.c)
 *     ExAllocateHeapSpecialPool @ 0x14033EF28 (ExAllocateHeapSpecialPool.c)
 *     InitializePagedPool @ 0x1409EED38 (InitializePagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1401160DC (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapPages @ 0x140116424 (ExAllocateHeapPages.c)
 *     ExPoolCleanupExpansionTable @ 0x14016669C (ExPoolCleanupExpansionTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwTracePool @ 0x14032DF54 (EtwTracePool.c)
 */

__int64 __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  char v5; // r13
  __int64 Process; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned int *v11; // r15
  unsigned __int64 v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int *v15; // rax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  __int64 v18; // r13
  char *HeapPages; // rax
  char *v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r12d
  __int64 v24; // r9
  unsigned int v25; // r13d
  __int64 v26; // rsi
  int v27; // r8d
  __int64 v28; // rbx
  int v29; // eax
  unsigned __int8 v30; // bl
  int v31; // ecx
  unsigned __int8 v32; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v34; // r15
  struct _KPRCB *v35; // rcx
  __int64 v36; // rcx
  struct _KPRCB *v37; // rcx
  struct _KPRCB *v38; // rcx
  __int64 v39; // rsi
  unsigned __int8 v40; // r15
  struct _KPRCB *v41; // rcx
  unsigned __int64 Size; // [rsp+30h] [rbp-40h]
  __int64 v43; // [rsp+38h] [rbp-38h]
  __int64 v44; // [rsp+38h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+58h] [rbp-18h] BYREF
  int v49; // [rsp+C8h] [rbp+58h]
  int v50; // [rsp+C8h] [rbp+58h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a3;
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  v7 = 32LL;
  v49 = v5 & 0x20;
  if ( (v5 & 0x20) != 0 )
  {
    v8 = ExpSessionPoolTrackTable;
    v9 = ExpSessionPoolTrackTableSize;
    Process = (__int64)KeGetCurrentThread()->ApcState.Process;
    v10 = *(_QWORD *)(Process + 1024);
    v11 = *(unsigned int **)(v10 + 1256);
    v12 = *(_QWORD *)(v10 + 1264);
  }
  else
  {
    v8 = PoolTrackTable;
    v9 = PoolTrackTableSize;
    v12 = PoolTrackTableExpansionSize;
    v11 = (unsigned int *)PoolTrackTableExpansion;
  }
  v13 = 0;
  if ( v12 )
  {
    v14 = 0LL;
    do
    {
      Process = v11[14 * v14];
      if ( (_DWORD)Process == a1 )
        break;
      if ( !(_DWORD)Process )
      {
        Process = 56LL * v13;
        *(unsigned int *)((char *)v11 + Process) = a1;
        break;
      }
      v14 = ++v13;
    }
    while ( v13 < v12 );
  }
  if ( v13 != v12 )
  {
    v15 = &v11[14 * v13];
    if ( (v5 & 1) != 0 )
    {
      ++*((_QWORD *)v15 + 5);
      *((_QWORD *)v15 + 4) += a2;
    }
    else
    {
      ++*((_QWORD *)v15 + 2);
      *((_QWORD *)v15 + 1) += a2;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
    return result;
  }
  if ( *(_DWORD *)(56 * v9 + v8 - 56) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v34 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v35 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v35);
    }
    __writecr8(v34);
    result = v8 + 56LL * (unsigned int)(v9 - 1);
    if ( (v5 & 1) != 0 )
    {
      v36 = 40LL;
    }
    else
    {
      v7 = 8LL;
      v36 = 16LL;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(result + v36));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + result), a2);
    return result;
  }
  v43 = 56 * v12;
  Size = (56 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v18 = Size + 4096;
  HeapPages = (char *)ExAllocateHeapPages(Process, Size + 4096);
  v20 = HeapPages;
  if ( !HeapPages )
  {
    v39 = 56LL * (unsigned int)(v9 - 1);
    *(_DWORD *)(v39 + v8) = 1818654287;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v40 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v41 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v41);
    }
    result = v40;
    __writecr8(v40);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v39 + v8 + 40));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + v8 + 32), a2);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v39 + v8 + 16));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + v8 + 8), a2);
    }
    return result;
  }
  if ( v11 )
    memmove(HeapPages, v11, Size);
  memset(&v20[v43], 0, v18 - v43);
  if ( v49 )
  {
    v21 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
    *(_QWORD *)(v21 + 1256) = v20;
    *(_QWORD *)(v21 + 1264) = (Size + 4096) / 0x38;
  }
  else
  {
    PoolTrackTableExpansion = v20;
    PoolTrackTableExpansionSize = (Size + 4096) / 0x38;
  }
  memset(&v46, 0, sizeof(v46));
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v22 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v22 = EtwTracePool(3616, 512, 1819242320, (_DWORD)v20, v18);
  LODWORD(v22) = KeGetPcr()->Prcb.Number;
  v23 = PoolTrackTableMask;
  v24 = PoolTrackTableSize;
  v25 = PoolTrackTableMask & 0x40DEDA5;
  v44 = PoolTrackTableSize;
  v26 = (__int64)*(&ExPoolTagTables + v22);
  v27 = PoolTrackTableMask & 0x40DEDA5;
  v50 = PoolTrackTableMask & 0x40DEDA5;
  do
  {
    while ( 1 )
    {
      v28 = 56LL * v25;
      v29 = *(_DWORD *)(v28 + v26);
      if ( v29 == 1819242320 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v28 + v26 + 16));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + v26 + 8), Size + 4096);
        goto LABEL_29;
      }
      if ( v29 )
        break;
      v31 = *(_DWORD *)(v28 + PoolTrackTable);
      if ( v31 )
      {
        *(_DWORD *)(v28 + v26) = v31;
      }
      else
      {
        if ( v25 == v24 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v46);
        if ( !*(_DWORD *)(v28 + PoolTrackTable) )
        {
          *(_DWORD *)(v28 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v28 + v26) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46);
        v32 = v46.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v46.OldIrql < 2u )
        {
          v37 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v37);
        }
        __writecr8(v32);
        v27 = v50;
        v24 = v44;
      }
    }
    v25 = v23 & (v25 + 1);
  }
  while ( v25 != v27 );
  ExpInsertPoolTrackerExpansion(1819242320LL, Size + 4096, 512LL);
LABEL_29:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v30 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v38 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v38);
  }
  __writecr8(v30);
  if ( v11 )
    ExPoolCleanupExpansionTable((ULONG_PTR)v11);
  return ExpInsertPoolTrackerExpansion(a1, a2, a3);
}
