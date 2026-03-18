/*
 * XREFs of MiSetDeleteOnClose @ 0x1402BA41C
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSegment @ 0x140070468 (MiInsertUnusedSegment.c)
 *     MiRemoveUnusedSegment @ 0x1400745DC (MiRemoveUnusedSegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiSetDeleteOnClose(__int64 a1, int a2)
{
  __int64 inserted; // rdi
  KIRQL v5; // si
  int v6; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  inserted = 0LL;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_DWORD *)(a1 + 56);
  if ( (v6 & 0x40000) == 0 )
  {
    if ( (v6 & 0x8000000) != 0 )
    {
      MiRemoveUnusedSegment(a1);
      *(_DWORD *)(a1 + 56) |= 0x40000u;
      inserted = MiInsertUnusedSegment(a1);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = v6 | 0x40000;
    }
  }
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 56) |= 0x10u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  if ( inserted )
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             1LL,
             inserted);
  return result;
}
