/*
 * XREFs of MiFlushAcquire @ 0x14012C234
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 * Callees:
 *     MiReferenceSubsection @ 0x1400770D4 (MiReferenceSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFlushAcquire(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  volatile LONG *v3; // rsi
  KIRQL v7; // di
  __int64 v8; // rax
  unsigned int v9; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx

  v3 = (volatile LONG *)(a1 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 == -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    v9 = 0;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    if ( a2 )
    {
      MiReferenceSubsection(a2);
      MiReferenceSubsection(a3);
      v8 = *(_QWORD *)(a1 + 40);
    }
    *(_QWORD *)(a1 + 40) = v8 + 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v12);
    }
    v9 = 1;
  }
  __writecr8(v7);
  return v9;
}
