/*
 * XREFs of PspJobIoRateVolumeEntryReference @ 0x1402EA66C
 * Callers:
 *     PsIoRateControlReference @ 0x140105ADC (PsIoRateControlReference.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     PspIoRateEntryIoControlReference @ 0x140105B9C (PspIoRateEntryIoControlReference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x1402A85C0 (MiLockTrackerCompare.c)
 */

signed __int64 __fastcall PspJobIoRateVolumeEntryReference(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // r14
  signed __int64 v5; // rbp
  KIRQL v6; // si
  __int64 v7; // rax
  __int64 v8; // rcx
  signed __int64 Count; // rbx
  int v10; // edi
  int v11; // eax
  struct _EX_RUNDOWN_REF v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (volatile LONG *)(a1 + 1440);
  v5 = 0LL;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1440));
  v7 = a1 + 1448;
  v8 = *(_QWORD *)(a1 + 1456);
  Count = *(_QWORD *)(a1 + 1448);
  if ( (v8 & 1) != 0 && Count )
    Count ^= v7;
  v10 = v8 & 1;
  if ( Count )
  {
    do
    {
      v11 = MiLockTrackerCompare(a2, Count);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12.Count = *(_QWORD *)(Count + 8);
      }
      else
      {
        v12.Count = *(_QWORD *)Count;
      }
      if ( v10 && v12.Count )
        Count ^= v12.Count;
      else
        Count = v12.Count;
    }
    while ( Count );
    if ( Count )
    {
      v5 = Count;
      PspIoRateEntryIoControlReference((struct _EX_RUNDOWN_REF *)Count);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
  return v5;
}
