/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x14015E294
 * Callers:
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x14059634C (PopNewWakeInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopReleaseWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  OldIrql = a1->OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
