/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x1402A9D4C
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14017BE74 (KiDisconnectInterruptCommon.c)
 *     KiConnectSecondaryInterrupt @ 0x1402A9E34 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402A9FC4 (KiDisconnectSecondaryInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1402AA260 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1402AA4D8 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiInterruptDispatchCommon @ 0x1402B0B24 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondaryInterruptConnectLock(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r8

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  *a2 = CurrentIrql;
  KxAcquireSpinLock(SpinLock);
}
