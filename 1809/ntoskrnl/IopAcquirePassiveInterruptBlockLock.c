/*
 * XREFs of IopAcquirePassiveInterruptBlockLock @ 0x1402886A0
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x14028858C (IoProcessPassiveInterrupts.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1402886F8 (IopDereferencePassiveInterruptBlock.c)
 *     IopPassiveInterruptWorker @ 0x1402889C0 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 */

void __fastcall IopAcquirePassiveInterruptBlockLock(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r8

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  *a2 = CurrentIrql;
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 56));
}
