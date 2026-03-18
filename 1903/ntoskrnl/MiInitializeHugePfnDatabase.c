/*
 * XREFs of MiInitializeHugePfnDatabase @ 0x1402C2594
 * Callers:
 *     MiHotAddHugeRange @ 0x1408898B0 (MiHotAddHugeRange.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeHugePfnDatabase()
{
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v1; // rcx
  PVOID PoolWithTag; // rax
  void *v3; // rbx
  unsigned __int8 v4; // bl
  struct _KPRCB *v5; // rcx
  PVOID v7; // rax
  __int64 v8; // rdi
  unsigned __int8 v9; // di
  struct _KPRCB *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_1404661C0, &LockHandle);
  if ( !qword_1404661B0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x8000uLL, 0x7048694Du);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x8000uLL);
      v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x200000uLL, 0x7048694Du);
      v8 = (__int64)v7;
      if ( v7 )
      {
        qword_1404661A0 = 0x40000LL;
        qword_1404661A8 = (__int64)v3;
        memset(v7, 0, 0x200000uLL);
        qword_1404661B0 = v8;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        goto LABEL_28;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v9 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v10 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
      __writecr8(v9);
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v4 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v5 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v5->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v5);
      }
      __writecr8(v4);
    }
    return 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v1 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v1->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v1);
  }
LABEL_28:
  __writecr8(OldIrql);
  return 1LL;
}
