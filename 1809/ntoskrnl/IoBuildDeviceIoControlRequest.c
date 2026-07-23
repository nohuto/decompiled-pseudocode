/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x1400DDD10
 * Callers:
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140588074 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405A5540 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A5690 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140662C00 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140662EB0 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x14068D7F0 (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1406CBB10 (FsRtlQueryCachedVdl.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406FD570 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x140703640 (FsRtlBalanceReads.c)
 *     IopInvalidateVolumesForDevice @ 0x1407061EC (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140706CA0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x1407080BC (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14070C6A8 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071F120 (FsRtlIssueFileNotificationFsctl.c)
 *     IopGetVolumeId @ 0x14081B024 (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x14081C6F8 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140823374 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x140890AE4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140890C20 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1408AE738 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x140906E4C (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
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
