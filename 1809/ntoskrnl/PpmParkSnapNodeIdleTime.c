/*
 * XREFs of PpmParkSnapNodeIdleTime @ 0x1402E8348
 * Callers:
 *     PopAccumulateNonActivatedCpuTime @ 0x1402DE694 (PopAccumulateNonActivatedCpuTime.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1402D5380 (PpmIdleSnapConcurrencyIdleTime.c)
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
    v8 = *(KSPIN_LOCK **)(PpmParkNodes + 264LL * (unsigned __int16)v7 + 64);
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
