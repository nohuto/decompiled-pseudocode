/*
 * XREFs of PopAcquirePowerRequestSpinLock @ 0x1402EDE1C
 * Callers:
 *     PoSetPowerRequestInternal @ 0x1400ECD64 (PoSetPowerRequestInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquirePowerRequestSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, LockHandle);
}
