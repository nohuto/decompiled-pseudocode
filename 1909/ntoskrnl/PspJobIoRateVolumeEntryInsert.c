/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x1403078F4
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x1408C7A44 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x1402BF9C0 (MiLockTrackerCompare.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // r12
  __int64 v4; // rdi
  KIRQL v5; // bp
  unsigned __int64 v6; // r14
  signed __int64 v7; // rbx
  BOOLEAN v8; // r8
  int v9; // esi
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = a1 + 1448;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v6 = (unsigned __int64)a2[1].Children[0];
  v7 = *(_QWORD *)v4;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v7 )
    v7 ^= v4;
  v8 = 0;
  v9 = *(_BYTE *)(v4 + 8) & 1;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( (int)MiLockTrackerCompare(v6, v7) < 0 )
      {
        v10 = *(_QWORD *)v7;
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_16;
          v10 ^= v7;
        }
        if ( !v10 )
        {
LABEL_16:
          v8 = 0;
          break;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 8);
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_10;
          v10 ^= v7;
        }
        if ( !v10 )
        {
LABEL_10:
          v8 = 1;
          break;
        }
      }
      v7 = v10;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v7, v8, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
