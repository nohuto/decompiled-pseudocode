/*
 * XREFs of KeRemoveQueueEntry @ 0x14012C9E0
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x14008DD0C (IopCancelWaitCompletionPacket.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRemoveQueueEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v5; // bp
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rcx
  _QWORD *v8; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, (__int64)a2, a3);
  if ( *a2 )
  {
    --*(_DWORD *)(a1 + 4);
    v7 = *a2;
    v8 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v8 != a2 )
      __fastfail(3u);
    *v8 = v7;
    v5 = 1;
    *(_QWORD *)(v7 + 8) = v8;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v5;
}
