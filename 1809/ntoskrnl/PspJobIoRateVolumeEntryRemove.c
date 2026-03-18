/*
 * XREFs of PspJobIoRateVolumeEntryRemove @ 0x1402EA480
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x14088A234 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1400BDDD0 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x1402A82D0 (MiLockTrackerCompare.c)
 */

unsigned __int64 __fastcall PspJobIoRateVolumeEntryRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // r15
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  KIRQL v6; // al
  unsigned __int64 v7; // rbx
  KIRQL v8; // bp
  unsigned __int64 v9; // rax
  int v10; // edi
  int v11; // eax
  unsigned __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = a1 + 1448;
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v7 = *(_QWORD *)v4;
  v8 = v6;
  v9 = *(_QWORD *)(v4 + 8);
  if ( (v9 & 1) != 0 && v7 )
    v7 ^= v4;
  v10 = v9 & 1;
  if ( v7 )
  {
    do
    {
      v11 = MiLockTrackerCompare(a2, v7);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v12 = *(_QWORD *)v7;
      }
      if ( v10 && v12 )
        v7 ^= v12;
      else
        v7 = v12;
    }
    while ( v7 );
    if ( v7 )
    {
      RtlRbRemoveNode(v4, v7);
      *(_QWORD *)(v7 + 16) = -1LL;
      v5 = v7;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v8);
  return v5;
}
