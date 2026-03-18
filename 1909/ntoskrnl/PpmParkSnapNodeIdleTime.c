/*
 * XREFs of PpmParkSnapNodeIdleTime @ 0x1402F87CC
 * Callers:
 *     PopAccumulateNonActivatedCpuTime @ 0x1402FADC0 (PopAccumulateNonActivatedCpuTime.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1402EF590 (PpmIdleSnapConcurrencyIdleTime.c)
 */

__int64 __fastcall PpmParkSnapNodeIdleTime(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  KIRQL v6; // di
  unsigned int v7; // eax
  KSPIN_LOCK *v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 146LL);
  if ( v7 < PpmParkNumNodes )
  {
    v8 = *(KSPIN_LOCK **)(PpmParkNodes + 272LL * (unsigned __int16)v7 + 72);
    if ( v8 )
      PpmIdleSnapConcurrencyIdleTime(v8, a2, a3);
  }
  KxReleaseSpinLock(&PpmParkStateLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
