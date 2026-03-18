/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x1402A9AAC
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14017C564 (KiDisconnectInterruptCommon.c)
 *     KiConnectSecondaryInterrupt @ 0x1402A9B94 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402A9D24 (KiDisconnectSecondaryInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1402A9FC0 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1402AA238 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiInterruptDispatchCommon @ 0x1402B0884 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
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
