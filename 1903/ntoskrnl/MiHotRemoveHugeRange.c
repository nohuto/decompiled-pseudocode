/*
 * XREFs of MiHotRemoveHugeRange @ 0x1402C2030
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400ACE50 (RtlClearBitsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiHotRemoveHugeRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int64 *v4; // rsi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  void *v9; // rsi
  unsigned __int8 v10; // bl
  struct _KPRCB *v11; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (a1 >> 18) & 0x3FFFF;
  v3 = a2 >> 18;
  v4 = (unsigned __int64 *)(qword_1404661B0 + 8 * v2);
  v5 = *(_QWORD *)(qword_140466188 + 8 * ((*v4 >> 40) & 0x7FF));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 4064), &LockHandle);
  if ( v3 )
  {
    v6 = v3;
    do
    {
      *v4 = *v4 & 0xFFF800FFFFFFFFFFuLL | 0x4010000000000LL;
      ++v4;
      --v6;
    }
    while ( v6 );
  }
  *(_QWORD *)(v5 + 416) -= v3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  v9 = (void *)(qword_1404661B0 + 8 * v2);
  KeAcquireInStackQueuedSpinLock(&qword_1404661C0, &LockHandle);
  RtlClearBitsEx((__int64)&qword_1404661A0, v2, v3);
  if ( v3 )
    memset(v9, 0, 8 * v3);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v10 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v11);
  }
  result = v10;
  __writecr8(v10);
  return result;
}
