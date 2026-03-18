/*
 * XREFs of IoCancelIrp @ 0x1401279E0
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x1401275E0 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1401278A8 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneDpc @ 0x140170E70 (PopThermalZoneDpc.c)
 *     PopThermalPollingPowerSettingCallback @ 0x14019DBD0 (PopThermalPollingPowerSettingCallback.c)
 *     FsRtlpWaitOnIrp @ 0x140283E5C (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneTimerCallback @ 0x1402F8260 (PopThermalZoneTimerCallback.c)
 *     IoCancelThreadIo @ 0x14060DB50 (IoCancelThreadIo.c)
 *     FsRtlSetKernelEaFile @ 0x14069D0C0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14069D260 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14069D570 (FsRtlQueryKernelEaFile.c)
 *     NtCancelIoFile @ 0x1406D0D30 (NtCancelIoFile.c)
 *     PopBatteryWorker @ 0x140738190 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x14084F1F0 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14085385C (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x140875B7C (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x1408A8EA0 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x1408A8FB0 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1408A90F4 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x1408AA030 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408B3960 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x1409630F0 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x14096DCB0 (IovpCancelRoutine.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  void (__fastcall *v3)(PDEVICE_OBJECT, PIRP); // rdi
  KIRQL v4; // si
  PDEVICE_OBJECT DeviceObject; // rcx

  if ( ViVerifierDriverAddedThunkListHead )
    IovCancelIrp();
  v2 = KeAcquireQueuedSpinLock(7uLL);
  Irp->Cancel = 1;
  v3 = (void (__fastcall *)(PDEVICE_OBJECT, PIRP))_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL);
  v4 = v2;
  if ( v3 )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      KeBugCheckEx(0x48u, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    Irp->CancelIrql = v2;
    DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
    if ( ViVerifierDriverAddedThunkListHead )
      IovpCancelRoutine(DeviceObject, Irp, v3);
    else
      v3(DeviceObject, Irp);
    if ( KeGetCurrentIrql() == 2 && v4 != 2 )
      KeBugCheckEx(0x11Bu, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    return 1;
  }
  else
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
    return 0;
  }
}
