/*
 * XREFs of KeAcquireQueuedSpinLockRaiseToSynch @ 0x1402A6F70
 * Callers:
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140977DD0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 */

unsigned __int8 __fastcall KeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  volatile __int64 **v2; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v2 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1);
  KxAcquireQueuedSpinLock((__int64)v2, v2[1]);
  return CurrentIrql;
}
