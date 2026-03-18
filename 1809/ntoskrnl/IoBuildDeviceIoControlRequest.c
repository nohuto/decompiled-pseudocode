/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x1400DDC70
 * Callers:
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140587074 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405A4540 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A4690 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140661A60 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140661D10 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x14068C650 (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1406CA890 (FsRtlQueryCachedVdl.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406FC2F0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1407023C0 (FsRtlBalanceReads.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F6C (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140705A20 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x140706E3C (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14070B428 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071DEA0 (FsRtlIssueFileNotificationFsctl.c)
 *     IopGetVolumeId @ 0x140819E44 (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x14081B518 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140822194 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x14088F8A4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14088F9E0 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1408AD4F8 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x140905BAC (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCD0 (IopBuildDeviceIoControlRequest.c)
 */

PIRP __stdcall IoBuildDeviceIoControlRequest(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+58h] [rbp+0h]

  return (PIRP)IopBuildDeviceIoControlRequest(
                 IoControlCode,
                 DeviceObject,
                 InputBuffer,
                 InputBufferLength,
                 OutputBuffer,
                 OutputBufferLength,
                 InternalDeviceIoControl,
                 Event,
                 IoStatusBlock,
                 retaddr);
}
