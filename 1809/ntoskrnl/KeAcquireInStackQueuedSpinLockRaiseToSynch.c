/*
 * XREFs of KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140290980
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x14093A6E4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeAcquireInStackQueuedSpinLockRaiseToSynch(volatile __int64 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // dl

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  *(_BYTE *)(a2 + 16) = CurrentIrql;
  return KxAcquireQueuedSpinLock(a2, a1, a2);
}
