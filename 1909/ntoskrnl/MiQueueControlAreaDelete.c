/*
 * XREFs of MiQueueControlAreaDelete @ 0x1402BA078
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x1400BF650 (MiDereferenceControlAreaProbe.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall MiQueueControlAreaDelete(__int64 a1)
{
  __int64 v2; // rbp
  KIRQL v3; // al
  KIRQL v4; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  *(_QWORD *)a1 = 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1280));
  *(_QWORD *)a1 = *(_QWORD *)(v2 + 1712);
  v4 = v3;
  *(_QWORD *)(v2 + 1712) = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v4);
  return KeSetEvent((PRKEVENT)(v2 + 1688), 0, 0);
}
