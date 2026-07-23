/*
 * XREFs of VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x140967F20
 * Callers:
 *     VfIoDeleteDevice @ 0x140973760 (VfIoDeleteDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _LIST_ENTRY *__fastcall VF_FIND_DEVICE_INFORMATION_AND_REMOVE(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // rdi
  KIRQL v3; // bl
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1409C7E08);
  Flink = ViAdapterList.Flink;
  if ( &ViAdapterList != ViAdapterList.Flink )
  {
    while ( 1 )
    {
      v5 = Flink->Flink;
      if ( Flink[1].Blink == a1 )
        break;
      Flink = Flink->Flink;
      if ( &ViAdapterList == v5 )
        goto LABEL_4;
    }
    v2 = Flink;
    Blink = Flink->Blink;
    if ( v5->Blink != Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v5;
    v5->Blink = Blink;
  }
LABEL_4:
  KxReleaseSpinLock(&qword_1409C7E08);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v3);
  return v2;
}
