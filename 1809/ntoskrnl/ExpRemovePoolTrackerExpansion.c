/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x140107700
 * Callers:
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     ExPoolCleanupExpansionTable @ 0x140142060 (ExPoolCleanupExpansionTable.c)
 *     ExpFreeHeapSpecialPool @ 0x14031EE54 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, char a3)
{
  unsigned __int8 CurrentIrql; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 SchedulerAssist; // r8
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  _DWORD *v11; // r9
  unsigned __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // edx
  _QWORD *v16; // rax
  volatile signed __int64 *v17; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  unsigned __int8 v20; // bl
  __int64 result; // rax
  int v22; // eax
  int v23; // eax
  struct _KPRCB *v24; // rcx
  unsigned __int8 v25; // bl
  struct _KPRCB *v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // r8
  unsigned __int64 v30; // rbp
  volatile signed __int64 *v31; // rcx
  volatile signed __int64 *v32; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v33; // [rsp+28h] [rbp-20h]
  unsigned __int8 v34; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v33 = (volatile signed __int64 *)&ExpTaggedPoolLock;
  v32 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v34 = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v22 = *(_DWORD *)(SchedulerAssist + 20);
      *(_DWORD *)(SchedulerAssist + 20) = v22 + 1;
      if ( v22 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v32, &ExpTaggedPoolLock);
  }
  else
  {
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&v32);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)&v32, v9, SchedulerAssist);
  }
  if ( (a3 & 0x20) != 0 )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v11 = *(_DWORD **)(v10 + 8232);
    v12 = *(_QWORD *)(v10 + 8240);
  }
  else
  {
    v12 = PoolTrackTableExpansionSize;
    v11 = PoolTrackTableExpansion;
  }
  v13 = 0;
  if ( !v12 )
  {
LABEL_41:
    KxReleaseQueuedSpinLock(&v32);
    v25 = v34;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
    v27 = v25;
    __writecr8(v25);
    if ( (a3 & 0x20) != 0 )
    {
      v29 = ExpSessionPoolTrackTable;
      v28 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      LODWORD(v27) = KeGetPcr()->Prcb.Number;
      v28 = PoolTrackTableSize;
      v29 = (__int64)*(&ExPoolTagTables + v27);
    }
    v30 = -a2;
    result = (unsigned int)(v28 - 1);
    v31 = (volatile signed __int64 *)(v29 + 56 * result);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64(v31 + 6);
      _InterlockedExchangeAdd64(v31 + 4, v30);
    }
    else
    {
      _InterlockedIncrement64(v31 + 3);
      _InterlockedExchangeAdd64(v31 + 1, v30);
    }
    return result;
  }
  v14 = 0LL;
  while ( 1 )
  {
    v15 = v11[14 * v14];
    if ( v15 == a1 )
      break;
    if ( v15 )
    {
      v14 = ++v13;
      if ( v13 < v12 )
        continue;
    }
    goto LABEL_41;
  }
  v16 = &v11[14 * v13];
  if ( (a3 & 1) != 0 )
  {
    ++v16[6];
    v16[4] -= a2;
  }
  else
  {
    ++v16[3];
    v16[1] -= a2;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v32, retaddr);
  }
  else
  {
    _m_prefetchw(&v32);
    v17 = v32;
    if ( !v32 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v33, 0LL, (signed __int64)&v32) == &v32 )
        goto LABEL_19;
      v17 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v32);
    }
    v32 = 0LL;
    _InterlockedXor64(v17 + 1, 1uLL);
  }
LABEL_19:
  v18 = KeGetCurrentPrcb();
  v19 = v18->SchedulerAssist;
  if ( v19 )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v23 = v19[5] - 1;
      v19[5] = v23;
      if ( !v23 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  v20 = v34;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
  {
    v24 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v24);
  }
  result = v20;
  __writecr8(v20);
  return result;
}
