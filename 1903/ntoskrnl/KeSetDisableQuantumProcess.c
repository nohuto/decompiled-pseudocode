/*
 * XREFs of KeSetDisableQuantumProcess @ 0x1400E5B0C
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x140694784 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetDisableQuantumProcess(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  volatile LONG *v5; // rbp
  signed __int8 v6; // cf
  volatile signed __int32 **v7; // rbx
  unsigned int v8; // esi
  volatile signed __int32 *i; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v5 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( a2 )
    v6 = _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 2u);
  else
    v6 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 2u);
  v7 = (volatile signed __int32 **)(a1 + 48);
  v8 = v6;
  for ( i = *v7; i != (volatile signed __int32 *)v7; i = *(volatile signed __int32 **)i )
  {
    if ( a2 )
      _interlockedbittestandset(i - 160, 8u);
    else
      _interlockedbittestandreset(i - 160, 8u);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v8;
}
