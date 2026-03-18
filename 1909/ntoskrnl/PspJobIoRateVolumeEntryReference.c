/*
 * XREFs of PspJobIoRateVolumeEntryReference @ 0x140307A14
 * Callers:
 *     PsIoRateControlReference @ 0x1400EC550 (PsIoRateControlReference.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     PspIoRateEntryIoControlReference @ 0x1400EC5EC (PspIoRateEntryIoControlReference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x1402BF9C0 (MiLockTrackerCompare.c)
 */

signed __int64 __fastcall PspJobIoRateVolumeEntryReference(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // r14
  signed __int64 v5; // rbp
  KIRQL v6; // al
  __int64 v7; // rcx
  KIRQL v8; // si
  bool v9; // zf
  signed __int64 Count; // rbx
  int v11; // edi
  int v12; // eax
  struct _EX_RUNDOWN_REF v13; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (volatile LONG *)(a1 + 1440);
  v5 = 0LL;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1440));
  v7 = a1 + 1448;
  v8 = v6;
  v9 = (*(_BYTE *)(a1 + 1456) & 1) == 0;
  Count = *(_QWORD *)(a1 + 1448);
  if ( !v9 && Count )
    Count ^= v7;
  v11 = *(_BYTE *)(v7 + 8) & 1;
  if ( Count )
  {
    do
    {
      v12 = MiLockTrackerCompare(a2, Count);
      if ( v12 >= 0 )
      {
        if ( v12 <= 0 )
          break;
        v13.Count = *(_QWORD *)(Count + 8);
      }
      else
      {
        v13.Count = *(_QWORD *)Count;
      }
      if ( v11 && v13.Count )
        Count ^= v13.Count;
      else
        Count = v13.Count;
    }
    while ( Count );
    if ( Count )
    {
      v5 = Count;
      PspIoRateEntryIoControlReference((struct _EX_RUNDOWN_REF *)Count);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v8);
  return v5;
}
