/*
 * XREFs of KeAcquireGuardedMutex @ 0x1400EF450
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x140175974 (PnpUnregisterPlugPlayNotification.c)
 *     IopDestroyDeviceNode @ 0x14066F9B0 (IopDestroyDeviceNode.c)
 *     PiUEventHandleRegistration @ 0x140695404 (PiUEventHandleRegistration.c)
 *     PnpNotifyTargetDeviceChange @ 0x140698EEC (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1406990D0 (PiUEventNotifyTargetDeviceChange.c)
 *     PnpDeviceEventWorker @ 0x140699360 (PnpDeviceEventWorker.c)
 *     PnpProcessAssignResources @ 0x140703C08 (PnpProcessAssignResources.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14071D0B8 (PiUEventNotifyDeviceInstanceChange.c)
 *     IoRegisterPlugPlayNotification @ 0x140722750 (IoRegisterPlugPlayNotification.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x14073444C (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14073CCC4 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     IopLegacyResourceAllocation @ 0x1407515AC (IopLegacyResourceAllocation.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14086C8F0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14086C968 (PpProfileCancelTransitioningDock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400EF620 (ExpAcquireFastMutexContended.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  PRTL_BALANCED_NODE v2; // rbx
  unsigned __int8 CurrentIrql; // si

  v2 = KeAbPreAcquire((ULONG_PTR)Mutex, 0LL, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)Mutex, v2);
  if ( v2 )
    BYTE2(v2[1].Left) |= 1u;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
