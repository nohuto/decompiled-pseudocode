/*
 * XREFs of IofCallDriver @ 0x1400B8DD0
 * Callers:
 *     IopCallDriverReference @ 0x1400B6B90 (IopCallDriverReference.c)
 *     IoCallDriverWithTracing @ 0x1400B8E80 (IoCallDriverWithTracing.c)
 *     IoPageReadEx @ 0x1400DE720 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA00 (IoSynchronousPageWriteEx.c)
 *     CcSetValidData @ 0x140126A84 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x1401281F0 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x140134FF4 (IoAsynchronousPageWrite.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14015FC10 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopDequeueQuerySetIrp @ 0x140171064 (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140172A6C (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x1401762F0 (PoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x140307424 (SmKmIssueVolumeIo.c)
 *     IoShutdownSystem @ 0x140577C68 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140577E88 (IopShutdownBaseFileSystems.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140587074 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IopSynchronousCall @ 0x1405A2CE0 (IopSynchronousCall.c)
 *     IopMountVolume @ 0x1405A2E64 (IopMountVolume.c)
 *     CmpGetVolumeClusterSize @ 0x1405A4094 (CmpGetVolumeClusterSize.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405A4540 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A4690 (IoVolumeDeviceNameToGuidPath.c)
 *     WmipForwardWmiIrp @ 0x1405FB974 (WmipForwardWmiIrp.c)
 *     FsRtlGetFileSize @ 0x14061B4A0 (FsRtlGetFileSize.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x14063B620 (IopSynchronousServiceTail.c)
 *     RawReadWriteDeviceControl @ 0x14064B398 (RawReadWriteDeviceControl.c)
 *     IopQueryXxxInformation @ 0x140661740 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140661930 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140661A60 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140661D10 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x14068C650 (IopGetSetObjectId.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A5100 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2850 (FsRtlKernelFsControlFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B87AC (CmpFileFlushAndPurge.c)
 *     FsRtlSetKernelEaFile @ 0x1406C7EF0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1406CA890 (FsRtlQueryCachedVdl.c)
 *     FsRtlSetFileSize @ 0x1406CAA80 (FsRtlSetFileSize.c)
 *     PnpQueryInterface @ 0x1406F9198 (PnpQueryInterface.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FBB10 (IopFilterResourceRequirementsCall.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406FC2F0 (FsRtlIssueDeviceIoControl.c)
 *     PnpAsynchronousCall @ 0x1406FCC24 (PnpAsynchronousCall.c)
 *     IoSetInformation @ 0x1407012A0 (IoSetInformation.c)
 *     FsRtlBalanceReads @ 0x1407023C0 (FsRtlBalanceReads.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F6C (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140705A20 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x140706E3C (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14070B428 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071DEA0 (FsRtlIssueFileNotificationFsctl.c)
 *     PopThermalWorker @ 0x140750F80 (PopThermalWorker.c)
 *     PopFanWorker @ 0x1407513A0 (PopFanWorker.c)
 *     PiPagePathSetState @ 0x14075C1FC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140814550 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x140815710 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140819E44 (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x14081B518 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x14081CBD0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140822170 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x14082291C (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x14083AE20 (IopEjectDevice.c)
 *     PopBatteryQueryStatus @ 0x14086D2FC (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x14086D8D0 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x14088F8A4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14088F9E0 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14088FD60 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1408ABA4C (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1408AD4F8 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1408AD5AC (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x140905BAC (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x140930534 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140943190 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140943260 (ViFilterDispatchPnp.c)
 *     IopAssignBootDriveLetter @ 0x1409D65AC (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x1409D6910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F4A94 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1409F9774 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1409FA07C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FA264 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140171B2C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x140285278 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140923CD4 (IovCallDriver.c)
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
