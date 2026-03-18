/*
 * XREFs of MiReferenceControlAreaPfn @ 0x1400A6610
 * Callers:
 *     MiInitializeImageProtos @ 0x1400A2264 (MiInitializeImageProtos.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400A6290 (MiFinishMdlForMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiSectionCreated @ 0x1400E05D0 (MiSectionCreated.c)
 *     MiInitializeDynamicPfns @ 0x1402BDEDC (MiInitializeDynamicPfns.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferenceControlAreaPfn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  KIRQL v6; // al
  KIRQL v7; // si
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = a3;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
    a2 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_QWORD *)(a1 + 32) += v4;
  v7 = v6;
  if ( a2 )
    *(_DWORD *)(a2 + 104) += v4;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
