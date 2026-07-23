/*
 * XREFs of KeAcquireGuardedMutex @ 0x14009C4C0
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x140175244 (PnpUnregisterPlugPlayNotification.c)
 *     PiUEventHandleRegistration @ 0x140667FE4 (PiUEventHandleRegistration.c)
 *     PnpNotifyTargetDeviceChange @ 0x14066C01C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14066C200 (PiUEventNotifyTargetDeviceChange.c)
 *     PnpDeviceEventWorker @ 0x14066C710 (PnpDeviceEventWorker.c)
 *     IopDestroyDeviceNode @ 0x1406A24D0 (IopDestroyDeviceNode.c)
 *     PnpProcessAssignResources @ 0x140701E28 (PnpProcessAssignResources.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14071B2C8 (PiUEventNotifyDeviceInstanceChange.c)
 *     IoRegisterPlugPlayNotification @ 0x1407208B0 (IoRegisterPlugPlayNotification.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1407321EC (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14073AD64 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     IopLegacyResourceAllocation @ 0x140750B1C (IopLegacyResourceAllocation.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14086D1F0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14086D268 (PpProfileCancelTransitioningDock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
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
