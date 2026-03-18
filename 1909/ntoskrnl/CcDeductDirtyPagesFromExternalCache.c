/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x14016D790
 * Callers:
 *     CcUnregisterExternalCache @ 0x14027CE90 (CcUnregisterExternalCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     CcPostDeferredWrites @ 0x14027D150 (CcPostDeferredWrites.c)
 */

_QWORD *__fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rsi
  unsigned int v5; // ebp
  unsigned __int64 v6; // rax
  unsigned __int8 OldIrql; // bl
  _QWORD *result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *((_QWORD *)PspSystemPartition + 1);
  if ( a2 )
  {
    do
    {
      v5 = v2;
      if ( v2 > 0xFFFFFFFF )
        v5 = -1;
      v2 -= v5;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 < v5 )
        v5 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v6 - v5;
      *(_QWORD *)(*((_QWORD *)PspSystemPartition + 1) + 600LL) -= v5;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
    while ( v2 );
  }
  result = (_QWORD *)(v4 + 744);
  if ( (_QWORD *)*result != result )
    return (_QWORD *)CcPostDeferredWrites(v4);
  return result;
}
