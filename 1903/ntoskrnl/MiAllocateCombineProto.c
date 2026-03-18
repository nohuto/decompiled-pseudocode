/*
 * XREFs of MiAllocateCombineProto @ 0x14013E940
 * Callers:
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiProcessCrcList @ 0x1406F3950 (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiInsertNewCombineBlocks @ 0x140142BA0 (MiInsertNewCombineBlocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033B244 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineProto(__int64 a1, unsigned __int64 a2, unsigned int a3, _QWORD *a4, int a5)
{
  __int64 v9; // rsi
  _DWORD *v10; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v14; // ett
  __int64 *v15; // rbx
  __int64 inserted; // rsi
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  unsigned int v21; // eax
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  unsigned __int8 OldIrql; // bl
  char v28; // al
  char *PoolWithTag; // rax
  void *v30; // rbx
  _DWORD *v31; // rcx
  int v32; // eax
  int v33; // eax
  struct _KPRCB *v34; // rcx
  int v35; // eax
  struct _KPRCB *v36; // rcx
  struct _KPRCB *v37; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]
  unsigned int v40; // [rsp+40h] [rbp-38h]
  int v41; // [rsp+44h] [rbp-34h]
  _QWORD *v42; // [rsp+48h] [rbp-30h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    return 0LL;
  v9 = a2 & 0xF;
  v10 = (_DWORD *)(16 * v9 + a1 + 104);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v32 = SchedulerAssist[5];
        SchedulerAssist[5] = v32 + 1;
        if ( v32 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw(v10);
    v14 = *v10 & 0x7FFFFFFF;
    if ( v14 != _InterlockedCompareExchange(v10, v14 + 1, v14) )
    {
      v31 = CurrentPrcb->SchedulerAssist;
      if ( v31 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v33 = v31[5] - 1;
          v31[5] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(v10, CurrentIrql);
    }
  }
  v41 = 0;
  v39 = a2;
  v40 = a3;
  v42 = a4;
  v15 = *(__int64 **)(a1 + 16 * (v9 + 6));
  if ( !v15 )
  {
LABEL_12:
    inserted = 0LL;
LABEL_13:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
    }
    else
    {
      _InterlockedAnd(v10, 0xBFFFFFFF);
      _InterlockedDecrement(v10);
    }
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v35 = v19[5] - 1;
        v19[5] = v35;
        if ( !v35 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v36 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v36);
    }
    __writecr8(CurrentIrql);
    if ( !a5 )
      return 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
    v24 = *(__int64 **)(a1 + 72);
    v25 = (_QWORD *)(a1 + 72);
    if ( v24 != (__int64 *)(a1 + 72) )
    {
      inserted = *(_QWORD *)(a1 + 72);
      v26 = *v24;
      if ( *(_QWORD **)(inserted + 8) != v25 || *(_QWORD *)(v26 + 8) != inserted )
        __fastfail(3u);
      *v25 = v26;
      *(_QWORD *)(v26 + 8) = v25;
      ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v37 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v37);
    }
    __writecr8(OldIrql);
    if ( inserted )
    {
LABEL_35:
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 388), 1u);
      v28 = a3 ^ *(_DWORD *)(inserted + 40);
      *(_QWORD *)(inserted + 32) = 1LL;
      *(_DWORD *)(inserted + 40) ^= v28 & 0x1F;
      *(_QWORD *)(inserted + 64) = *a4;
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 392), 1u);
      return inserted;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6D75534Du);
    v30 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 2) = 1;
      *((_QWORD *)PoolWithTag + 2) = a1;
      inserted = MiInsertNewCombineBlocks(a1, PoolWithTag + 72);
      if ( inserted )
        goto LABEL_35;
      ExFreePoolWithTag(v30, 0);
    }
    return 0LL;
  }
  while ( 1 )
  {
    if ( a2 > v15[3] )
    {
LABEL_10:
      v15 = (__int64 *)v15[1];
      goto LABEL_11;
    }
    if ( a2 >= v15[3] )
    {
      v21 = v15[5] & 0x1F;
      if ( a3 >= v21 )
      {
        if ( a3 > v21 )
          goto LABEL_10;
        if ( !a4 )
          break;
        if ( *a4 > (unsigned __int64)v15[8] )
          goto LABEL_10;
        if ( *a4 >= (unsigned __int64)v15[8] )
          break;
      }
    }
    v15 = (__int64 *)*v15;
LABEL_11:
    if ( !v15 )
      goto LABEL_12;
  }
  v22 = v15[4];
  if ( !v22 )
  {
LABEL_52:
    inserted = 0LL;
    a5 = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v23 = v22;
    v22 = _InterlockedCompareExchange64(v15 + 4, v22 + 1, v22);
    if ( v23 == v22 )
      break;
    if ( !v22 )
      goto LABEL_52;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v10);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v34 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v34);
  }
  __writecr8(CurrentIrql);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 392), 1u);
  return (__int64)v15;
}
