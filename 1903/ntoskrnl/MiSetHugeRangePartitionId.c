/*
 * XREFs of MiSetHugeRangePartitionId @ 0x1402C29A8
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetHugeRangePartitionId(
        KSPIN_LOCK *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int16 v4; // r13
  KSPIN_LOCK *v5; // rdi
  unsigned __int64 *v6; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 *v10; // rsi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v4 = *(_WORD *)a1;
  v5 = (KSPIN_LOCK *)(a2 + 4064);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a1 + 508;
  memset(&v14, 0, sizeof(v14));
  v9 = a4 >> 18;
  v10 = (unsigned __int64 *)(qword_1404661B0 + 8 * ((a3 >> 18) & 0x3FFFF));
  if ( (unsigned __int64)a1 >= a2 )
  {
    KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
    v5 = v6;
    v14.LockQueue.Lock = v6;
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(a1 + 508, &LockHandle);
    v14.LockQueue.Lock = v5;
  }
  v14.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v14, (volatile __int64 *)v5);
  *(_QWORD *)(a2 + 416) -= v9;
  for ( a1[52] += v9; v9; --v9 )
  {
    *v10 = ((unsigned __int64)(v4 & 0x7FF) << 40) | *v10 & 0xFFF800FFFFFFFFFFuLL | 0xC0000;
    ++v10;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v14);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
