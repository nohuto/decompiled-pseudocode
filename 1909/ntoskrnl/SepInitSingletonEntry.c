/*
 * XREFs of SepInitSingletonEntry @ 0x140085AD4
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14061B08C (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140085B3C (SepGetSingletonEntryFromIndexNumber.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

volatile LONG *__fastcall SepInitSingletonEntry(__int64 a1, __int64 a2)
{
  volatile LONG *result; // rax
  volatile LONG *v4; // rbx
  KIRQL v5; // al
  KIRQL v6; // di
  struct _KPRCB *CurrentPrcb; // rcx

  result = (volatile LONG *)SepGetSingletonEntryFromIndexNumber();
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
