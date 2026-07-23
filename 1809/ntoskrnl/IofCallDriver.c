/*
 * XREFs of IofCallDriver @ 0x1400B8D30
 * Callers:
 *     IopCallDriverReference @ 0x1400B6AF0 (IopCallDriverReference.c)
 *     IoCallDriverWithTracing @ 0x1400B8DE0 (IoCallDriverWithTracing.c)
 *     IoPageReadEx @ 0x1400DE7C0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEAA0 (IoSynchronousPageWriteEx.c)
 *     CcSetValidData @ 0x140126B74 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x1401282E0 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x1401350E4 (IoAsynchronousPageWrite.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14015FD30 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopDequeueQuerySetIrp @ 0x140171184 (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140172B8C (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x140176410 (PoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x140307714 (SmKmIssueVolumeIo.c)
 *     IoShutdownSystem @ 0x140578C68 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140578E88 (IopShutdownBaseFileSystems.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140588074 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IopSynchronousCall @ 0x1405A3CE0 (IopSynchronousCall.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     CmpGetVolumeClusterSize @ 0x1405A5094 (CmpGetVolumeClusterSize.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405A5540 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A5690 (IoVolumeDeviceNameToGuidPath.c)
 *     WmipForwardWmiIrp @ 0x1405FC974 (WmipForwardWmiIrp.c)
 *     FsRtlGetFileSize @ 0x14061C4A0 (FsRtlGetFileSize.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     RawReadWriteDeviceControl @ 0x14064C538 (RawReadWriteDeviceControl.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140662AD0 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140662C00 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140662EB0 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x14068D7F0 (IopGetSetObjectId.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A6380 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B3AD0 (FsRtlKernelFsControlFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 *     FsRtlSetKernelEaFile @ 0x1406C9170 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1406CBB10 (FsRtlQueryCachedVdl.c)
 *     FsRtlSetFileSize @ 0x1406CBD00 (FsRtlSetFileSize.c)
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FCD90 (IopFilterResourceRequirementsCall.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406FD570 (FsRtlIssueDeviceIoControl.c)
 *     PnpAsynchronousCall @ 0x1406FDEA4 (PnpAsynchronousCall.c)
 *     IoSetInformation @ 0x140702520 (IoSetInformation.c)
 *     FsRtlBalanceReads @ 0x140703640 (FsRtlBalanceReads.c)
 *     IopInvalidateVolumesForDevice @ 0x1407061EC (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140706CA0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x1407080BC (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14070C6A8 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071F120 (FsRtlIssueFileNotificationFsctl.c)
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140752570 (PopFanWorker.c)
 *     PiPagePathSetState @ 0x14075D3CC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140815730 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x1408168F0 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x14081B024 (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x14081C6F8 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x14081DDB0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140823350 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x140823AFC (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x14083C060 (IopEjectDevice.c)
 *     PopBatteryQueryStatus @ 0x14086E53C (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x14086EB10 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x140890AE4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140890C20 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x140890FA0 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1408ACC8C (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1408AE738 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1408AE7EC (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x140906E4C (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x140931534 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140944190 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140944260 (ViFilterDispatchPnp.c)
 *     IopAssignBootDriveLetter @ 0x1409D75AC (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x1409D7910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1409FA784 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1409FB08C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FB274 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140171C4C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x140285568 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140924CD4 (IovCallDriver.c)
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
