/*
 * XREFs of MiFindLastSubsection @ 0x1400EAE78
 * Callers:
 *     MiComputeDataFlushRange @ 0x140071840 (MiComputeDataFlushRange.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400DF3D4 (MiCanFileBeTruncatedInternal.c)
 *     MmExtendSection @ 0x14069C8C0 (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFindLastSubsection(__int64 a1, int a2)
{
  KIRQL v3; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a2 == 1 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v4 = *(_QWORD *)(a1 + 272);
  v5 = 0LL;
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 8);
  }
  v6 = v5 - 56;
  if ( v3 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
  }
  return v6;
}
