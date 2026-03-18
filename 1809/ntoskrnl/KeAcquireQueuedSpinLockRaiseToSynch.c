/*
 * XREFs of KeAcquireQueuedSpinLockRaiseToSynch @ 0x140290700
 * Callers:
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x1409397A0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC990 (KxAcquireQueuedSpinLock.c)
 */

unsigned __int8 __fastcall KeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // r8
  volatile __int64 **v3; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v2 = 16 * a1;
  v3 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1);
  KxAcquireQueuedSpinLock((__int64)v3, v3[1], v2);
  return CurrentIrql;
}
