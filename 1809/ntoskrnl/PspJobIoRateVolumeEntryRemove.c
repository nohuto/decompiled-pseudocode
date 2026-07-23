/*
 * XREFs of PspJobIoRateVolumeEntryRemove @ 0x1402EA770
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x14088B474 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x1402A85C0 (MiLockTrackerCompare.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // r15
  _RTL_RB_TREE *v4; // rsi
  __int64 v5; // r14
  KIRQL v6; // al
  __int64 Root; // rbx
  KIRQL v8; // bp
  _RTL_BALANCED_NODE *Min; // rax
  int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = (_RTL_RB_TREE *)(a1 + 1448);
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  Root = (__int64)v4->Root;
  v8 = v6;
  Min = v4->Min;
  if ( ((unsigned __int8)Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)v4;
  v10 = (unsigned __int8)Min & 1;
  if ( Root )
  {
    do
    {
      v11 = MiLockTrackerCompare(a2, Root);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12 = *(_QWORD *)(Root + 8);
      }
      else
      {
        v12 = *(_QWORD *)Root;
      }
      if ( v10 && v12 )
        Root ^= v12;
      else
        Root = v12;
    }
    while ( Root );
    if ( Root )
    {
      RtlRbRemoveNode(v4, (PRTL_BALANCED_NODE)Root);
      *(_QWORD *)(Root + 16) = -1LL;
      v5 = Root;
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
