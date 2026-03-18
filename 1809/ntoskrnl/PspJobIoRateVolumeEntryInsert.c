/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x1402EA25C
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x14088A234 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400BD690 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x1402A82D0 (MiLockTrackerCompare.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, _QWORD *a2)
{
  volatile LONG *v2; // r12
  unsigned __int64 *v4; // rsi
  KIRQL v5; // al
  unsigned __int64 v6; // rcx
  KIRQL v7; // bp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  bool v10; // r8
  int v11; // edi
  unsigned __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = (unsigned __int64 *)(a1 + 1448);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v6 = v4[1];
  v7 = v5;
  v8 = a2[3];
  v9 = *v4;
  if ( (v6 & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)v4;
  v10 = 0;
  v11 = v6 & 1;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( (int)MiLockTrackerCompare(v8, v9) < 0 )
      {
        v12 = *(_QWORD *)v9;
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_16;
          v12 ^= v9;
        }
        if ( !v12 )
        {
LABEL_16:
          v10 = 0;
          break;
        }
      }
      else
      {
        v12 = *(_QWORD *)(v9 + 8);
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_10;
          v12 ^= v9;
        }
        if ( !v12 )
        {
LABEL_10:
          v10 = 1;
          break;
        }
      }
      v9 = v12;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64)v4, v9, v10, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
