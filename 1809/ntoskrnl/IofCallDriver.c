/*
 * XREFs of IofCallDriver @ 0x1400B8DF0
 * Callers:
 *     IopCallDriverReference @ 0x1400B6BB0 (IopCallDriverReference.c)
 *     IoCallDriverWithTracing @ 0x1400B8EA0 (IoCallDriverWithTracing.c)
 *     IoPageReadEx @ 0x1400DE740 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA20 (IoSynchronousPageWriteEx.c)
 *     CcSetValidData @ 0x140126AA4 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x140128210 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x140135014 (IoAsynchronousPageWrite.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14015FC30 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopDequeueQuerySetIrp @ 0x140171084 (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140172A8C (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x140176310 (PoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x140307524 (SmKmIssueVolumeIo.c)
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
 *     RawReadWriteDeviceControl @ 0x14064B378 (RawReadWriteDeviceControl.c)
 *     IopQueryXxxInformation @ 0x140661720 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140661910 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140661A40 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140661CF0 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x14068C630 (IopGetSetObjectId.c)
 *     IopGetSetSecurityObject @ 0x1406990D0 (IopGetSetSecurityObject.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A50E0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2830 (FsRtlKernelFsControlFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B878C (CmpFileFlushAndPurge.c)
 *     FsRtlSetKernelEaFile @ 0x1406C7ED0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1406CA870 (FsRtlQueryCachedVdl.c)
 *     FsRtlSetFileSize @ 0x1406CAA60 (FsRtlSetFileSize.c)
 *     PnpQueryInterface @ 0x1406F9178 (PnpQueryInterface.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FBAF0 (IopFilterResourceRequirementsCall.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406FC2D0 (FsRtlIssueDeviceIoControl.c)
 *     PnpAsynchronousCall @ 0x1406FCC04 (PnpAsynchronousCall.c)
 *     IoSetInformation @ 0x140701280 (IoSetInformation.c)
 *     FsRtlBalanceReads @ 0x1407023A0 (FsRtlBalanceReads.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F4C (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140705A00 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x140706E1C (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14070B408 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071DE80 (FsRtlIssueFileNotificationFsctl.c)
 *     PopThermalWorker @ 0x140750F60 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140751380 (PopFanWorker.c)
 *     PiPagePathSetState @ 0x14075C1DC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140814530 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x1408156F0 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140819E24 (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x14081B4F8 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x14081CBB0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140822150 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x1408228FC (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x14083AE00 (IopEjectDevice.c)
 *     PopBatteryQueryStatus @ 0x14086D2DC (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x14086D8B0 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x14088F884 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14088F9C0 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14088FD40 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1408ABA2C (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1408AD4D8 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1408AD58C (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x140905B8C (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x140930534 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140943190 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140943260 (ViFilterDispatchPnp.c)
 *     IopAssignBootDriveLetter @ 0x1409D65AC (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x1409D6910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F4AA4 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1409F9784 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1409FA08C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FA274 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140171B4C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x140285378 (IopPerfCallDriver.c)
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
