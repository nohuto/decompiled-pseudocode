/*
 * XREFs of IoCancelIrp @ 0x140121F00
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x140121AFC (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140121DC4 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneDpc @ 0x140190310 (PopThermalZoneDpc.c)
 *     PopThermalPollingPowerSettingCallback @ 0x140193750 (PopThermalPollingPowerSettingCallback.c)
 *     FsRtlpWaitOnIrp @ 0x140270360 (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneTimerCallback @ 0x1402DC810 (PopThermalZoneTimerCallback.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A6380 (FsRtlQueryKernelEaFile.c)
 *     NtCancelIoFile @ 0x1406A78B0 (NtCancelIoFile.c)
 *     IoCancelThreadIo @ 0x1406A7A58 (IoCancelThreadIo.c)
 *     FsRtlKernelFsControlFile @ 0x1406B3AD0 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x1406C9170 (FsRtlSetKernelEaFile.c)
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x1408168F0 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14081A7EC (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x14083C018 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x14086D790 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x14086D8A0 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x14086D9B8 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x14086E740 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408778F0 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x140924F90 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x140930438 (IovpCancelRoutine.c)
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
