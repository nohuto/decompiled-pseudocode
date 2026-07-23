/*
 * XREFs of MiGetCrossPartitionCharges @ 0x1402D1C6C
 * Callers:
 *     MiGetSubsectionCharges @ 0x1402C4C84 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402CA29C (MiGetCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402CC104 (MiGetCrossPartitionCombineCharges.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v5; // r13
  unsigned __int64 *v8; // rdi
  unsigned int v10; // esi
  KIRQL v11; // r15
  unsigned __int64 v12; // rdx
  int v13; // r14d
  unsigned __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v5 = (volatile LONG *)(a1 + 1280);
  v8 = (unsigned __int64 *)(32LL * a2 + a1 + 1832);
  v10 = 0;
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && a2 )
  {
    v10 = -1073740640;
LABEL_4:
    ++v8[1];
    goto LABEL_15;
  }
  v12 = *v8 + a4;
  if ( v12 <= *v8 )
  {
    v10 = -1073741523;
    goto LABEL_4;
  }
  v13 = a3 & 1;
  if ( v13 && v8[4] + a4 <= v8[4] )
  {
    ++v8[5];
    v10 = -1073741523;
  }
  else
  {
    *v8 = v12;
    if ( v12 > v8[2] )
      v8[2] = v12;
    if ( v13 )
    {
      v8[4] += a4;
      v14 = v8[4];
      if ( v14 > v8[6] )
        v8[6] = v14;
    }
  }
LABEL_15:
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v11);
  return v10;
}
