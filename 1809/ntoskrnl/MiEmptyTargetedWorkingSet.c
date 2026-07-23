/*
 * XREFs of MiEmptyTargetedWorkingSet @ 0x1402B31C8
 * Callers:
 *     MiTrimAllSystemPagableMemory @ 0x1402B3D80 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x1400F3404 (MiReturnWsToExpansionList.c)
 *     MiEmptyWorkingSetInitiate @ 0x140142320 (MiEmptyWorkingSetInitiate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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

  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
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
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    MiEmptyWorkingSetInitiate(a1, 0, 0LL, -1LL);
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
    *(_BYTE *)(a1 + 185) &= 0xF9u;
    MiReturnWsToExpansionList(a1, 0);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
