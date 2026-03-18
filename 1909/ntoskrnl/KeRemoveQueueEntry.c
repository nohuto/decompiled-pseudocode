/*
 * XREFs of KeRemoveQueueEntry @ 0x140113FA8
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x140113DE0 (IopCancelWaitCompletionPacket.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRemoveQueueEntry(__int64 a1, _QWORD *a2)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rcx
  _QWORD *v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( *a2 )
  {
    --*(_DWORD *)(a1 + 4);
    v6 = *a2;
    v7 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v7 != a2 )
      __fastfail(3u);
    *v7 = v6;
    v4 = 1;
    *(_QWORD *)(v6 + 8) = v7;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v4;
}
