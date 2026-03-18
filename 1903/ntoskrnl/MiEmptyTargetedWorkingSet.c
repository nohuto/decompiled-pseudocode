/*
 * XREFs of MiEmptyTargetedWorkingSet @ 0x1402C8428
 * Callers:
 *     MiTrimAllSystemPagableMemory @ 0x1402C8FF0 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x14004AD10 (MiReturnWsToExpansionList.c)
 *     MiEmptyWorkingSetInitiate @ 0x14015A358 (MiEmptyWorkingSetInitiate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiEmptyTargetedWorkingSet(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v7; // bl
  struct _KPRCB *v8; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v2 = (_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v4 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v3 + 8) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    *(_BYTE *)(a1 + 185) = *(_BYTE *)(a1 + 185) & 0xF9 | 2;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    MiEmptyWorkingSetInitiate(a1, 0, 0LL, -1LL);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    *(_BYTE *)(a1 + 185) &= 0xF9u;
    MiReturnWsToExpansionList(a1, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v7 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v8 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v8);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
