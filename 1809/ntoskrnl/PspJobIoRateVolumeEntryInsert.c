/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x1402EA54C
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x14088B474 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x1402A85C0 (MiLockTrackerCompare.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // r12
  _RTL_RB_TREE *v4; // rsi
  KIRQL v5; // al
  _RTL_BALANCED_NODE *Min; // rcx
  KIRQL v7; // bp
  unsigned __int64 v8; // r14
  __int64 Root; // rbx
  BOOLEAN v10; // r8
  int v11; // edi
  unsigned __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = (_RTL_RB_TREE *)(a1 + 1448);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  Min = v4->Min;
  v7 = v5;
  v8 = (unsigned __int64)a2[1].Children[0];
  Root = (__int64)v4->Root;
  if ( ((unsigned __int8)Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)v4;
  v10 = 0;
  v11 = (unsigned __int8)Min & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)MiLockTrackerCompare(v8, Root) < 0 )
      {
        v12 = *(_QWORD *)Root;
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_16;
          v12 ^= Root;
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
        v12 = *(_QWORD *)(Root + 8);
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_10;
          v12 ^= Root;
        }
        if ( !v12 )
        {
LABEL_10:
          v10 = 1;
          break;
        }
      }
      Root = v12;
    }
  }
  RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)Root, v10, a2);
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
