/*
 * XREFs of MiDeleteControlAreaList @ 0x1402B935C
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140191670 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x1400BF77C (MiDeleteControlArea.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
