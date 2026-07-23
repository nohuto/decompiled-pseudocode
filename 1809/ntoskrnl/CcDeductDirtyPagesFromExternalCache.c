/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x140166E60
 * Callers:
 *     CcUnregisterExternalCache @ 0x1402698E0 (CcUnregisterExternalCache.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CcPostDeferredWrites @ 0x140269BA0 (CcPostDeferredWrites.c)
 */

_QWORD *__fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rsi
  unsigned int v5; // edi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int8 OldIrql; // bl
  _QWORD *result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  v4 = *((_QWORD *)PspSystemPartition + 1);
  while ( v2 )
  {
    v5 = v2;
    if ( v2 > 0xFFFFFFFF )
      v5 = -1;
    v2 -= v5;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = (unsigned int)v6;
    if ( v6 >= v5 )
      v7 = v5;
    *(_QWORD *)(a1 + 8) = v6 - v7;
    *(_QWORD *)(*((_QWORD *)PspSystemPartition + 1) + 600LL) -= v7;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  result = (_QWORD *)(v4 + 744);
  if ( (_QWORD *)*result != result )
    return (_QWORD *)CcPostDeferredWrites(v4);
  return result;
}
