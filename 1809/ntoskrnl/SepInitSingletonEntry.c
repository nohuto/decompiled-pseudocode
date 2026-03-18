/*
 * XREFs of SepInitSingletonEntry @ 0x1400D9938
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14064EFCC (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1400D9BB0 (SepGetSingletonEntryFromIndexNumber.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

volatile LONG *__fastcall SepInitSingletonEntry(__int64 a1, __int64 a2)
{
  volatile LONG *result; // rax
  volatile LONG *v4; // rbx
  KIRQL v5; // al
  KIRQL v6; // di
  struct _KPRCB *CurrentPrcb; // rcx

  result = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v4 = result;
  if ( result )
  {
    v5 = ExAcquireSpinLockExclusive(result);
    *((_QWORD *)v4 + 2) = 0LL;
    v6 = v5;
    *((_QWORD *)v4 + 1) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = (volatile LONG *)v6;
    __writecr8(v6);
  }
  return result;
}
