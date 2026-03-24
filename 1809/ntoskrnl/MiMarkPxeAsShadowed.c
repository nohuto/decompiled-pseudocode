/*
 * XREFs of MiMarkPxeAsShadowed @ 0x14017E710
 * Callers:
 *     MiInitializeShadowPageTable @ 0x14072A3F4 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v5; // [rsp+20h] [rbp-28h] BYREF

  memset(&v5, 0, sizeof(v5));
  v1 = ((a1 >> 3) & 0x1FF) - 256;
  KeAcquireInStackQueuedSpinLock(&qword_14043AE80, &v5);
  _bittestandset((signed __int32 *)qword_14043A444, v1);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v5);
  OldIrql = v5.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
