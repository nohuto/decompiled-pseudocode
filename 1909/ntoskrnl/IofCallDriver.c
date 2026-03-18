/*
 * XREFs of IofCallDriver @ 0x140037500
 * Callers:
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 *     IopCallDriverReference @ 0x14009ABE0 (IopCallDriverReference.c)
 *     CcSetValidData @ 0x1400ED764 (CcSetValidData.c)
 *     IoCallDriverWithTracing @ 0x140109FA0 (IoCallDriverWithTracing.c)
 *     IoAsynchronousPageWrite @ 0x14011A258 (IoAsynchronousPageWrite.c)
 *     IoSynchronousCallDriver @ 0x14012B020 (IoSynchronousCallDriver.c)
 *     PopDequeueQuerySetIrp @ 0x140172860 (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140173BA4 (PopQueueQuerySetIrp.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140175DE0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PoCallDriver @ 0x140177620 (PoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x1403249EC (SmKmIssueVolumeIo.c)
 *     IoShutdownSystem @ 0x1405A7968 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CC4 (IopShutdownBaseFileSystems.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405F1150 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     FsRtlSetFileSize @ 0x140625490 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406255B0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140625A60 (FsRtlQueryKernelEaFile.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140625E64 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IopGetFileInformation @ 0x14062BCD4 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14064BE70 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x14064C310 (NtApphelpCacheControl.c)
 *     FsRtlGetFileSize @ 0x1406507C0 (FsRtlGetFileSize.c)
 *     RawReadWriteDeviceControl @ 0x14066B30C (RawReadWriteDeviceControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x1406902F0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140690460 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpFileFlushAndPurge @ 0x140690A7C (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140690C18 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x140690E2C (IopSynchronousCall.c)
 *     WmipForwardWmiIrp @ 0x140696C4C (WmipForwardWmiIrp.c)
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 *     IopGetSetObjectId @ 0x1406B2378 (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1406EBD80 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1406EDE60 (IoSetInformation.c)
 *     IopGetVolumeId @ 0x1406F9A64 (IopGetVolumeId.c)
 *     PnpQueryInterface @ 0x1407164D0 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x14071AB3C (PnpAsynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1407245A0 (IopFilterResourceRequirementsCall.c)
 *     IopInvalidateVolumesForDevice @ 0x14072DF28 (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14072E6C0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x14072FBA8 (IopLoadFileSystemDriver.c)
 *     FsRtlIssueDeviceIoControl @ 0x140736E60 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x140738C38 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x14073CDE0 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074843C (FsRtlIssueFileNotificationFsctl.c)
 *     PopFanWorker @ 0x14077BEF0 (PopFanWorker.c)
 *     PopThermalWorker @ 0x14077BFF0 (PopThermalWorker.c)
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14084D69C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14084E8F0 (FsRtlQueryInformationFile.c)
 *     IopSetRemoteLink @ 0x140854BD8 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x140856330 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x14085B920 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x14085C2D4 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1408752C4 (IopEjectDevice.c)
 *     PipSendGuestAssignedNotification @ 0x1408775AC (PipSendGuestAssignedNotification.c)
 *     PopBatteryQueryStatus @ 0x1408A9684 (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1408A9C60 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x1408CD534 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1408CD680 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1408CDA34 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1408E8400 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x1408E9D34 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1408E9DE8 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x140943C1C (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x14096EDB0 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140982B30 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140982C00 (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x1409F5108 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1409F594C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A39DBC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A3F12C (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A3FAA8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A3FC9C (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x1401751E8 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x14029A294 (IopPerfCallDriver.c)
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
