/*
 * XREFs of KeAdjustTimerDelayProcess @ 0x1402A502C
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x1403081A4 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAdjustThreadTimer @ 0x1402AF010 (KiAdjustThreadTimer.c)
 */

__int64 __fastcall KeAdjustTimerDelayProcess(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int8 CurrentIrql; // r14
  _QWORD *i; // rbx

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    KiAdjustThreadTimer(i - 95, CurrentPrcb, a2, a3);
  *(_DWORD *)(a1 + 68) = a3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  return KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
}
