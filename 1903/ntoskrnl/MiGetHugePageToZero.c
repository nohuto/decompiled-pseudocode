/*
 * XREFs of MiGetHugePageToZero @ 0x14018ED40
 * Callers:
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 * Callees:
 *     MiUnlinkNodeLargePage @ 0x14002A3E0 (MiUnlinkNodeLargePage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14018EED0 (MiGetUltraHugeAlreadyActive.c)
 *     MiDecrementHugeContext @ 0x14018EFF0 (MiDecrementHugeContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x14018F07C (MiInitializeNewUltraHugeContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetHugePageToZero(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned __int8 OldIrql; // bl
  PVOID PoolWithTag; // rax
  void *v10; // rdi
  __int64 v11; // rax
  int v12; // r15d
  unsigned __int8 v13; // r14
  unsigned __int8 v14; // bl
  struct _KPRCB *v15; // rcx
  struct _KPRCB *v16; // rcx
  unsigned __int8 v17; // bl
  struct _KPRCB *v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a2 + 244);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = v2 >> byte_140465A4D;
  while ( 1 )
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(1984LL * v5 + *(_QWORD *)(a1 + 16) + 1928LL), &LockHandle);
    if ( MiGetUltraHugeAlreadyActive(v6, a2) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      return 1LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC8uLL, 0x7548694Du);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, 0xC8uLL);
    v11 = MiUnlinkNodeLargePage(a1, 0LL, v5, 4LL, a2 + 232, 0, (__int64)v10);
    if ( !v11 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v14 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v16 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v16);
      }
      __writecr8(v14);
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v12 = MiInitializeNewUltraHugeContext(a2, v10, v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v13 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v15 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v15);
    }
    __writecr8(v13);
    if ( v12 )
      return 1LL;
    MiDecrementHugeContext(v10);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v17 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(v17);
  return 0LL;
}
