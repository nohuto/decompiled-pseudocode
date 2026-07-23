/*
 * XREFs of MiAllocateCombineProto @ 0x14009B7E0
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiProcessCrcList @ 0x140620320 (MiProcessCrcList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiInsertNewCombineBlocks @ 0x140140944 (MiInsertNewCombineBlocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineProto(__int64 a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 inserted; // r13
  volatile LONG *v8; // r15
  unsigned int v9; // r14d
  KIRQL v10; // r12
  __int64 *v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v14; // eax
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned __int8 OldIrql; // bl
  unsigned int v21; // eax
  char *PoolWithTag; // rax
  void *v23; // rbx
  struct _KPRCB *v24; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v26; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  if ( !a2 )
    return 0LL;
  inserted = 0LL;
  v8 = (volatile LONG *)(16 * (a2 & 0xF) + a1 + 104);
  v9 = a3 & 0x1F;
  v10 = ExAcquireSpinLockShared(v8);
  v11 = *(__int64 **)(a1 + 16 * ((a2 & 0xF) + 6));
  if ( !v11 )
  {
LABEL_7:
    ExReleaseSpinLockSharedFromDpcLevel(v8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v10);
    if ( !a4 )
      return 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
    v17 = *(__int64 **)(a1 + 72);
    v18 = (_QWORD *)(a1 + 72);
    if ( v17 != (__int64 *)(a1 + 72) )
    {
      inserted = *(_QWORD *)(a1 + 72);
      v19 = *v17;
      if ( *(_QWORD **)(inserted + 8) != v18 || *(_QWORD *)(v19 + 8) != inserted )
        __fastfail(3u);
      *v18 = v19;
      *(_QWORD *)(v19 + 8) = v18;
      ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
    __writecr8(OldIrql);
    if ( inserted )
    {
LABEL_23:
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 380), 1u);
      v21 = *(_DWORD *)(inserted + 40) & 0xFFFFFFE0;
      *(_QWORD *)(inserted + 32) = 1LL;
      *(_DWORD *)(inserted + 40) = v9 | v21;
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 384), 1u);
      return inserted;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6D75534Du);
    v23 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 2) = 1;
      *((_QWORD *)PoolWithTag + 2) = a1;
      inserted = MiInsertNewCombineBlocks(a1, PoolWithTag + 64);
      if ( inserted )
        goto LABEL_23;
      ExFreePoolWithTag(v23, 0);
    }
    return 0LL;
  }
  while ( 1 )
  {
    v12 = v11[3];
    if ( a2 > v12 )
      goto LABEL_10;
    if ( a2 >= v12 )
    {
      v14 = v11[5] & 0x1F;
      if ( v9 >= v14 )
        break;
    }
    v11 = (__int64 *)*v11;
LABEL_6:
    if ( !v11 )
      goto LABEL_7;
  }
  if ( v9 > v14 )
  {
LABEL_10:
    v11 = (__int64 *)v11[1];
    goto LABEL_6;
  }
  v15 = v11[4];
  if ( !v15 )
  {
LABEL_28:
    a4 = 0;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange64(v11 + 4, v15 + 1, v15);
    if ( v16 == v15 )
      break;
    if ( !v15 )
      goto LABEL_28;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    v24 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v24);
  }
  __writecr8(v10);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 384), 1u);
  return (__int64)v11;
}
