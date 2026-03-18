/*
 * XREFs of IofCallDriver @ 0x140037100
 * Callers:
 *     CcSetValidData @ 0x14009990C (CcSetValidData.c)
 *     IoPageReadEx @ 0x1400A7640 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400A794C (IoSynchronousPageWriteEx.c)
 *     IopCallDriverReference @ 0x1400BAD70 (IopCallDriverReference.c)
 *     IoCallDriverWithTracing @ 0x14010A3D0 (IoCallDriverWithTracing.c)
 *     IoSynchronousCallDriver @ 0x14012A600 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x140137438 (IoAsynchronousPageWrite.c)
 *     PopDequeueQuerySetIrp @ 0x140172130 (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140173474 (PopQueueQuerySetIrp.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1401756B0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PoCallDriver @ 0x140176F30 (PoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x140324F9C (SmKmIssueVolumeIo.c)
 *     IoShutdownSystem @ 0x1405A7988 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CE4 (IopShutdownBaseFileSystems.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140621FBC (ExpHwidSendSynchronousIrpToDevice.c)
 *     IopGetFileInformation @ 0x140627E84 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 *     RawReadWriteDeviceControl @ 0x1406582EC (RawReadWriteDeviceControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140661640 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1406617B0 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpFileFlushAndPurge @ 0x140663994 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140663B30 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x140663D44 (IopSynchronousCall.c)
 *     WmipForwardWmiIrp @ 0x14066982C (WmipForwardWmiIrp.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     IoVolumeDeviceToDosName @ 0x140685F00 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x1406863A0 (NtApphelpCacheControl.c)
 *     FsRtlGetFileSize @ 0x14068A6A0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x14069CFA0 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x14069D0C0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14069D260 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14069D570 (FsRtlQueryKernelEaFile.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     IopGetSetObjectId @ 0x1406B0448 (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1406EAAC0 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 *     IopGetVolumeId @ 0x1406F7CA4 (IopGetVolumeId.c)
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x140718D4C (PnpAsynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140722700 (IopFilterResourceRequirementsCall.c)
 *     IopInvalidateVolumesForDevice @ 0x14072C088 (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14072C820 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x14072DCD8 (IopLoadFileSystemDriver.c)
 *     FsRtlIssueDeviceIoControl @ 0x140734C00 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x1407369D8 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x14073AE80 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074653C (FsRtlIssueFileNotificationFsctl.c)
 *     PopFanWorker @ 0x140778910 (PopFanWorker.c)
 *     PopThermalWorker @ 0x140778A10 (PopThermalWorker.c)
 *     PiPagePathSetState @ 0x14078175C (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14084DF9C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14084F1F0 (FsRtlQueryInformationFile.c)
 *     IopSetRemoteLink @ 0x1408554D8 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140856C30 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x14085C220 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x14085CBD4 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x140875BC4 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x140877EAC (PipSendGuestAssignedNotification.c)
 *     PopBatteryQueryStatus @ 0x1408A9E24 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1408AA400 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x1408CDC54 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1408CDDA0 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1408CE154 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1408E8AF8 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1408EA42C (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1408EA4E0 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x1409441AC (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x14096EDB0 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140982B30 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140982C00 (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x1409F51F8 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1409F5A3C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A39FEC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A3F35C (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A3FCD8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A3FECC (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140174AB8 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x14029A534 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140962E34 (IovCallDriver.c)
 */

NTSTATUS __stdcall IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *v2; // rax
  UCHAR MajorFunction; // r8

  if ( IopDispatchCallDriver )
  {
    if ( IopDispatchCallDriver == 3 )
      return IopPerfCallDriver(DeviceObject);
    else
      return IovCallDriver(DeviceObject);
  }
  else
  {
    if ( --Irp->CurrentLocation <= 0 )
      KeBugCheckEx(0x35u, (ULONG_PTR)Irp, 0LL, 0LL, 0LL);
    v2 = Irp->Tail.Overlay.CurrentStackLocation - 1;
    Irp->Tail.Overlay.CurrentStackLocation = v2;
    MajorFunction = v2->MajorFunction;
    v2->DeviceObject = DeviceObject;
    if ( MajorFunction == 22 && (unsigned __int8)(v2->MinorFunction - 2) <= 1u )
      return IopPoHandleIrp(Irp);
    else
      return ((__int64 (__fastcall *)(PDEVICE_OBJECT))DeviceObject->DriverObject->MajorFunction[MajorFunction])(DeviceObject);
  }
}
