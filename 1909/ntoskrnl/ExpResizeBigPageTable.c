/*
 * XREFs of ExpResizeBigPageTable @ 0x140157548
 * Callers:
 *     ExpAddTagForBigPages @ 0x140036F80 (ExpAddTagForBigPages.c)
 *     ExpResizeBigPageTable @ 0x140157548 (ExpResizeBigPageTable.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x14000331C (ExGetHeapFromVA.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400F41FC (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapPages @ 0x1400F4544 (ExAllocateHeapPages.c)
 *     ExpResizeBigPageTable @ 0x140157548 (ExpResizeBigPageTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwTracePool @ 0x14032D9B4 (EtwTracePool.c)
 */

__int64 __fastcall ExpResizeBigPageTable(char a1, __int64 a2, _QWORD *a3)
{
  int v3; // r12d
  _QWORD *v4; // r15
  int *v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  _WORD *HeapPages; // rax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r11
  unsigned int v15; // r10d
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // r14d
  __int64 v22; // r13
  unsigned int v23; // ebp
  __int64 v24; // rdi
  int v25; // r12d
  __int64 v26; // rbx
  int v27; // eax
  __int64 result; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  unsigned __int8 OldIrql; // bl
  __int128 *HeapFromVA; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v39; // [rsp+A8h] [rbp+20h] BYREF

  v39 = 0LL;
  *a3 = 0LL;
  v3 = a1 & 0x20;
  if ( (a1 & 0x20) != 0 )
  {
    v4 = *(_QWORD **)(qword_1404656D8 + 1272);
    v5 = (int *)(qword_1404656D8 + 1144);
    v6 = *(_QWORD *)(qword_1404656D8 + 1280);
    if ( !PoolBigPageTableSize )
      return 0LL;
  }
  else
  {
    v4 = (_QWORD *)PoolBigPageTable;
    v5 = &ExpPoolBigEntriesInUse;
    v6 = PoolBigPageTableSize;
  }
  if ( v6 )
  {
    v7 = 2 * v6;
    if ( 2 * v6 <= v6 || v7 > 0xAAAAAAAAAAAAAAALL )
      return 0LL;
    v8 = 48 * v6;
  }
  else
  {
    v8 = 12288LL;
    v7 = 512LL;
  }
  if ( v8 >= v8 + 4095 )
    return 0LL;
  v9 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapPages = ExAllocateHeapPages();
  v11 = (unsigned __int64)HeapPages;
  if ( !HeapPages )
    return 0LL;
  memset(HeapPages, 0, v9);
  v12 = (_QWORD *)v11;
  do
  {
    *v12 = 1LL;
    v12 += 3;
  }
  while ( v12 != (_QWORD *)(v11 + 24 * v7) );
  v13 = v4;
  v14 = &v4[3 * v6];
  v15 = v7 - 1;
  if ( v4 != v14 )
  {
    do
    {
      if ( (*v13 & 1) == 0 )
      {
        v29 = v15 & (((40543 * (unsigned __int64)(unsigned int)(*v13 >> 12)) >> 32) ^ (40543 * (unsigned int)(*v13 >> 12)));
        if ( (*(_BYTE *)(v11 + 24 * v29) & 1) == 0 )
        {
          do
          {
            v31 = 0LL;
            if ( (int)v29 + 1 <= v15 )
              v31 = (unsigned int)(v29 + 1);
            LODWORD(v29) = v31;
          }
          while ( (*(_BYTE *)(v11 + 24 * v31) & 1) == 0 );
          LODWORD(v29) = v31;
        }
        v30 = 3LL * (unsigned int)v29;
        *(_OWORD *)(v11 + 8 * v30) = *(_OWORD *)v13;
        *(_QWORD *)(v11 + 8 * v30 + 16) = v13[2];
      }
      v13 += 3;
    }
    while ( v13 != v14 );
  }
  if ( v5 != &ExpPoolBigEntriesInUse )
  {
    if ( ExpPoolBigEntriesInUse != PoolBigPageTableSize || (unsigned int)ExpResizeBigPageTable(512LL, 1LL, &v39) )
    {
      v16 = PoolBigPageTable;
      v15 = PoolBigPageTableSize - 1;
      goto LABEL_16;
    }
    HeapFromVA = (__int128 *)ExGetHeapFromVA(v11);
    RtlpHpFreeHeap(HeapFromVA, v11, 0);
    return 0LL;
  }
  v16 = v11;
LABEL_16:
  v17 = v15 & (((40543 * (unsigned __int64)(unsigned int)(v11 >> 12)) >> 32) ^ (40543 * (unsigned int)(v11 >> 12)));
  if ( (*(_QWORD *)(v16 + 24 * v17) & 1) == 0 )
  {
    do
    {
      v32 = 0LL;
      if ( (int)v17 + 1 <= v15 )
        v32 = (unsigned int)(v17 + 1);
      LODWORD(v17) = v32;
    }
    while ( (*(_QWORD *)(v16 + 24 * v32) & 1) == 0 );
  }
  v18 = 3LL * (unsigned int)v17;
  strcpy((char *)(v16 + 8 * v18 + 8), "Pool");
  *(_QWORD *)(v16 + 8 * v18) = v11;
  v19 = (unsigned __int8)*(_DWORD *)(v16 + 8 * v18 + 12) | 0x20000;
  *(_QWORD *)(v16 + 8 * v18 + 16) = v9;
  *(_DWORD *)(v16 + 8 * v18 + 12) = v19;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  _InterlockedIncrement(&dword_1405037C0);
  _InterlockedExchangeAdd64(&qword_1405037D0, (int)(v9 >> 12));
  _InterlockedExchangeAdd64(qword_1405037D8, v9);
  if ( v3 )
  {
    *(_QWORD *)(qword_1404656D8 + 1272) = v11;
    *(_QWORD *)(qword_1404656D8 + 1280) = v7;
  }
  else
  {
    PoolBigPageTable = v11;
    PoolBigPageTableSize = v7;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v20 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v20 = EtwTracePool(3616, 512, 1819242320, v11, v9);
  LODWORD(v20) = KeGetPcr()->Prcb.Number;
  v21 = PoolTrackTableMask;
  v22 = PoolTrackTableSize;
  v23 = PoolTrackTableMask & 0x40DEDA5;
  v24 = (__int64)*(&ExPoolTagTables + v20);
  v25 = PoolTrackTableMask & 0x40DEDA5;
  do
  {
    while ( 1 )
    {
      v26 = 56LL * v23;
      v27 = *(_DWORD *)(v26 + v24);
      if ( v27 == 1819242320 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v26 + v24 + 16));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + v24 + 8), v9);
        goto LABEL_26;
      }
      if ( v27 )
        break;
      v33 = *(_DWORD *)(v26 + PoolTrackTable);
      if ( v33 )
      {
        *(_DWORD *)(v26 + v24) = v33;
      }
      else
      {
        if ( v23 == v22 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v26 + PoolTrackTable) )
        {
          *(_DWORD *)(v26 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v26 + v24) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(OldIrql);
      }
    }
    v23 = v21 & (v23 + 1);
  }
  while ( v23 != v25 );
  ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v9, 0x200u);
LABEL_26:
  if ( v4 )
    *v4 = v39;
  else
    v4 = v39;
  result = 1LL;
  *a3 = v4;
  return result;
}
