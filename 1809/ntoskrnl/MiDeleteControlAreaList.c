/*
 * XREFs of MiDeleteControlAreaList @ 0x1402A23B8
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401876E0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteControlAreaList(__int64 a1)
{
  volatile LONG *v2; // rbp
  KIRQL v3; // al
  _QWORD *v4; // rbx
  KIRQL v5; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1280);
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    v4 = *(_QWORD **)(a1 + 1712);
    v5 = v3;
    if ( v4 )
      *(_QWORD *)(a1 + 1712) = *v4;
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = v5;
    __writecr8(v5);
    if ( !v4 )
      break;
    MiDeleteControlArea(v4);
  }
  return result;
}
