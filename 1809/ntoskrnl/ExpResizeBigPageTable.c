/*
 * XREFs of ExpResizeBigPageTable @ 0x14015C570
 * Callers:
 *     ExpAddTagForBigPages @ 0x1400E7190 (ExpAddTagForBigPages.c)
 *     ExpResizeBigPageTable @ 0x14015C570 (ExpResizeBigPageTable.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     ExFreeHeapPages @ 0x14015B374 (ExFreeHeapPages.c)
 *     ExpResizeBigPageTable @ 0x14015C570 (ExpResizeBigPageTable.c)
 *     ExAllocateHeapPages @ 0x14015C990 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall ExpResizeBigPageTable(char a1, __int64 a2, _QWORD *a3)
{
  int v3; // r13d
  _QWORD *v4; // r12
  int *v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  void *HeapPages; // rax
  ULONG_PTR v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r11
  unsigned int v15; // r10d
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // r13d
  __int64 v22; // r9
  unsigned int v23; // r15d
  __int64 v24; // r14
  int v25; // r8d
  __int64 v26; // rbx
  int v27; // eax
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 result; // rax
  __int64 v32; // rax
  int v33; // ecx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v36; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  int v38; // [rsp+98h] [rbp+10h]
  _QWORD *v40; // [rsp+A8h] [rbp+20h] BYREF

  v40 = 0LL;
  *a3 = 0LL;
  v3 = a1 & 0x20;
  if ( (a1 & 0x20) != 0 )
  {
    v4 = *(_QWORD **)(qword_14043B080 + 8248);
    v5 = (int *)(qword_14043B080 + 8120);
    v6 = *(_QWORD *)(qword_14043B080 + 8256);
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
    v7 = 512LL;
    v8 = 12288LL;
  }
  if ( v8 >= v8 + 4095 )
    return 0LL;
  v9 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapPages = (void *)ExAllocateHeapPages(512LL, v9);
  v11 = (ULONG_PTR)HeapPages;
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
        v28 = v15 & (((40543 * (unsigned __int64)(unsigned int)(*v13 >> 12)) >> 32) ^ (40543 * (unsigned int)(*v13 >> 12)));
        if ( (*(_BYTE *)(v11 + 24 * v28) & 1) == 0 )
        {
          do
          {
            v30 = 0LL;
            if ( (int)v28 + 1 <= v15 )
              v30 = (unsigned int)(v28 + 1);
            LODWORD(v28) = v30;
          }
          while ( (*(_BYTE *)(v11 + 24 * v30) & 1) == 0 );
          LODWORD(v28) = v30;
        }
        v29 = 3LL * (unsigned int)v28;
        *(_OWORD *)(v11 + 8 * v29) = *(_OWORD *)v13;
        *(_QWORD *)(v11 + 8 * v29 + 16) = v13[2];
      }
      v13 += 3;
    }
    while ( v13 != v14 );
  }
  if ( v5 != &ExpPoolBigEntriesInUse )
  {
    if ( ExpPoolBigEntriesInUse != PoolBigPageTableSize || (unsigned int)ExpResizeBigPageTable(512LL, 1LL, &v40) )
    {
      v16 = PoolBigPageTable;
      v15 = PoolBigPageTableSize - 1;
      goto LABEL_16;
    }
    ExFreeHeapPages(v11, v9, 0x6C6F6F50u);
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
  _InterlockedIncrement(&dword_1404D8680);
  _InterlockedExchangeAdd64(&qword_1404D8690, (int)(v9 >> 12));
  _InterlockedExchangeAdd64(&qword_1404D8698, v9);
  if ( v3 )
  {
    *(_QWORD *)(qword_14043B080 + 8248) = v11;
    *(_QWORD *)(qword_14043B080 + 8256) = v7;
  }
  else
  {
    PoolBigPageTable = v11;
    PoolBigPageTableSize = v7;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v20 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v20 = EtwTracePool(3616, 512, 1819242320, v11, v9);
  LODWORD(v20) = KeGetPcr()->Prcb.Number;
  v21 = PoolTrackTableMask;
  v22 = PoolTrackTableSize;
  v23 = PoolTrackTableMask & 0x40DEDA5;
  v36 = PoolTrackTableSize;
  v24 = (__int64)*(&ExPoolTagTables + v20);
  v25 = PoolTrackTableMask & 0x40DEDA5;
  v38 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v26 = 56LL * v23;
    v27 = *(_DWORD *)(v26 + v24);
    if ( v27 == 1819242320 )
      break;
    if ( v27 )
    {
LABEL_26:
      v23 = v21 & (v23 + 1);
      if ( v23 == v25 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v9, 0x200u);
        goto LABEL_35;
      }
    }
    else
    {
      v33 = *(_DWORD *)(v26 + PoolTrackTable);
      if ( v33 )
      {
        *(_DWORD *)(v26 + v24) = v33;
      }
      else
      {
        if ( v23 == v22 - 1 )
          goto LABEL_26;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v26 + PoolTrackTable) )
        {
          *(_DWORD *)(v26 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v26 + v24) = 1819242320;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(OldIrql);
        v25 = v38;
        v22 = v36;
      }
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v26 + v24 + 16));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + v24 + 8), v9);
LABEL_35:
  if ( v4 )
    *v4 = v40;
  else
    v4 = v40;
  result = 1LL;
  *a3 = v4;
  return result;
}
