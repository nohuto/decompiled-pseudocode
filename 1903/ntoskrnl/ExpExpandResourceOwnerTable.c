/*
 * XREFs of ExpExpandResourceOwnerTable @ 0x140122E90
 * Callers:
 *     ExpFindCurrentThread @ 0x14003B940 (ExpFindCurrentThread.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExpFindEmptyEntry @ 0x140122E30 (ExpFindEmptyEntry.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpExpandResourceOwnerTable(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  _DWORD *v2; // rdi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned __int8 OldIrql; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rsi
  unsigned __int8 v11; // si
  unsigned __int8 v12; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v14; // rcx
  struct _KPRCB *v15; // rcx

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    v5 = v2[2];
    v7 = v5 + 4;
    if ( v5 + 4 < v5 )
      return;
    v6 = 16LL * v7;
    if ( v6 > 0xFFFFFFFF )
      return;
  }
  else
  {
    v5 = 0;
    LODWORD(v6) = 48;
    v7 = 3;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
  OldIrql = a2->OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v6, 0x61546552u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(&PoolWithTag[4 * v5], 0, 16LL * (v7 - v5));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), a2);
    if ( v2 == *(_DWORD **)(a1 + 16) && (!v2 || v5 == v2[2]) )
    {
      memmove(v10, v2, 16LL * v5);
      v10[2] = v7;
      *(_QWORD *)(a1 + 16) = v10;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
      v11 = a2->OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        v14 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v14);
      }
      __writecr8(v11);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      if ( !v5 )
        LOBYTE(v5) = 1;
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
      v12 = a2->OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v15);
      }
      __writecr8(v12);
      ExFreePoolWithTag(v10, 0);
    }
  }
  else
  {
    KeDelayExecutionThread(0, 0, &ExShortTime);
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = v5;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), a2);
}
