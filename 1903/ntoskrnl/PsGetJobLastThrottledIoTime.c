/*
 * XREFs of PsGetJobLastThrottledIoTime @ 0x140307B50
 * Callers:
 *     MiNoPagesLastChance @ 0x1402D9E6C (MiNoPagesLastChance.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PsGetJobLastThrottledIoTime(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v3; // al
  __int64 v4; // rdi
  KIRQL v5; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = (volatile LONG *)(a1 + 1440);
  v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1440));
  v4 = *(_QWORD *)(a1 + 1488);
  v5 = v3;
  ExReleaseSpinLockSharedFromDpcLevel(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v5);
  return v4;
}
