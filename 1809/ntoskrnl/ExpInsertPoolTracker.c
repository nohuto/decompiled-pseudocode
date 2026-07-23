/*
 * XREFs of ExpInsertPoolTracker @ 0x14031AB5C
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1406E1858 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 */

__int64 __fastcall ExpInsertPoolTracker(unsigned int a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 v15; // ecx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  int v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+90h] [rbp+8h]

  v5 = a1;
  if ( a1 == PoolHitTag )
    __debugbreak();
  v7 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, a3, a1, a4, a2);
  v8 = 8LL;
  if ( (a3 & 0x20) != 0 )
  {
    v11 = ExpSessionPoolTrackTable;
    v9 = ExpSessionPoolTrackTableMask;
    v10 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v7) = KeGetPcr()->Prcb.Number;
    v9 = PoolTrackTableMask;
    v10 = PoolTrackTableSize;
    v11 = (__int64)*(&ExPoolTagTables + v7);
  }
  v20 = v10;
  v19 = v9;
  v21 = v11;
  v12 = v9 & ((40543 * v5) ^ ((unsigned __int64)(40543 * v5) >> 32));
  v13 = v12;
  v23 = v12;
  while ( 1 )
  {
    v14 = (volatile signed __int32 *)(v11 + 56LL * v12);
    if ( *v14 == (_DWORD)v5 )
      break;
    if ( *v14 )
      goto LABEL_27;
    if ( (a3 & 0x20) == 0 )
    {
      v15 = *(_DWORD *)(PoolTrackTable + 56LL * v12);
      if ( v15 )
      {
        *v14 = v15;
        goto LABEL_14;
      }
      v13 = v23;
    }
    if ( v12 == v10 - 1 )
    {
LABEL_27:
      v12 = v9 & (v12 + 1);
      if ( v12 == v13 )
        return ExpInsertPoolTrackerExpansion(v5, a2, a3);
    }
    else if ( (a3 & 0x20) != 0 )
    {
      _InterlockedCompareExchange(v14, v5, 0);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      if ( !*(_DWORD *)(PoolTrackTable + 56LL * v12) )
      {
        *(_DWORD *)(PoolTrackTable + 56LL * v12) = v5;
        *v14 = v5;
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
      v9 = v19;
      v10 = v20;
      v11 = v21;
LABEL_14:
      v13 = v23;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    result = 10LL;
  }
  else
  {
    v8 = 2LL;
    result = 4LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v14[result]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v14[v8], a2);
  return result * 4;
}
