/*
 * XREFs of MmEnumerateBadPages @ 0x1402ED1AC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmEnumerateBadPages(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  unsigned __int8 v6; // bl
  struct _KPRCB *v7; // rcx
  __int64 i; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    if ( !qword_140469440 )
      return 0LL;
    v2 = qword_140469440 + 16;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (qword_140469440 + 16), 0x61426D4Du);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    v5 = PoolWithTag;
    KeAcquireInStackQueuedSpinLock(qword_140469460, &LockHandle);
    if ( qword_140469440 < v2 && qword_140469440 )
    {
      *v4 = qword_140469440;
      for ( i = qword_140469450; i != 0xFFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x58000000000LL) & 0xFFFFFFFFFLL )
        *++v5 = i;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(OldIrql);
      *a1 = v4;
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v6 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v7 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v7);
    }
    __writecr8(v6);
    ExFreePoolWithTag(v4, 0);
  }
  return 3221225626LL;
}
