/*
 * XREFs of MiWakeExtentDeletionWaiters @ 0x1402CD37C
 * Callers:
 *     MiDeleteExtentPfns @ 0x1402CB520 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWakeExtentDeletionWaiters(struct _KLOCK_QUEUE_HANDLE *a1)
{
  _QWORD *v1; // rdi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _QWORD *v6; // rbx

  v1 = (_QWORD *)qword_140464410;
  qword_140464410 = 0LL;
  byte_140464431 = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  OldIrql = a1->OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  if ( v1 )
  {
    do
    {
      v6 = (_QWORD *)*v1;
      result = KeSignalGate((__int64)(v1 + 1), 1u);
      v1 = v6;
    }
    while ( v6 );
  }
  return result;
}
