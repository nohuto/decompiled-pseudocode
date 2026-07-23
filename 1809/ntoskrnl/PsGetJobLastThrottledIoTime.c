/*
 * XREFs of PsGetJobLastThrottledIoTime @ 0x1402EA250
 * Callers:
 *     MiNoPagesLastChance @ 0x1402C0710 (MiNoPagesLastChance.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
