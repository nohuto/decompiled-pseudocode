/*
 * XREFs of IoCancelIrp @ 0x140121E10
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x140121A0C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140121CD4 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneDpc @ 0x1401901B0 (PopThermalZoneDpc.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1401935F0 (PopThermalPollingPowerSettingCallback.c)
 *     FsRtlpWaitOnIrp @ 0x140270070 (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneTimerCallback @ 0x1402DC520 (PopThermalZoneTimerCallback.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A5100 (FsRtlQueryKernelEaFile.c)
 *     NtCancelIoFile @ 0x1406A6630 (NtCancelIoFile.c)
 *     IoCancelThreadIo @ 0x1406A67D8 (IoCancelThreadIo.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2850 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x1406C7EF0 (FsRtlSetKernelEaFile.c)
 *     PopBatteryWorker @ 0x140719DA0 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x140815710 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14081960C (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x14083ADD8 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x14086C550 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x14086C660 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x14086C778 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x14086D500 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408766B0 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF10 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x140923F90 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x14092F438 (IovpCancelRoutine.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  void (__fastcall *v3)(PDEVICE_OBJECT, PIRP); // rdi
  KIRQL v4; // si
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
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
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->CancelIrql = v2;
    DeviceObject = CurrentStackLocation->DeviceObject;
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
