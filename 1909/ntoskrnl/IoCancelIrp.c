/*
 * XREFs of IoCancelIrp @ 0x140128400
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x140128000 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1401282C8 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneDpc @ 0x140171560 (PopThermalZoneDpc.c)
 *     PopThermalPollingPowerSettingCallback @ 0x14019E2F0 (PopThermalPollingPowerSettingCallback.c)
 *     FsRtlpWaitOnIrp @ 0x140283BBC (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneTimerCallback @ 0x1402F7D10 (PopThermalZoneTimerCallback.c)
 *     IoCancelThreadIo @ 0x14060F660 (IoCancelThreadIo.c)
 *     FsRtlSetKernelEaFile @ 0x1406255B0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140625A60 (FsRtlQueryKernelEaFile.c)
 *     NtCancelIoFile @ 0x1406CFFA0 (NtCancelIoFile.c)
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x14084E8F0 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x140852F5C (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x14087527C (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x1408A8700 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x1408A8810 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1408A8954 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x1408A9890 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408B3230 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
