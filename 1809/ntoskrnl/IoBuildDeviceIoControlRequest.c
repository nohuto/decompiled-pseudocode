/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x1400DDC90
 * Callers:
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140587074 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405A4540 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A4690 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140661A40 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140661CF0 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x14068C630 (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1406CA870 (FsRtlQueryCachedVdl.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406FC2D0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1407023A0 (FsRtlBalanceReads.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F4C (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140705A00 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x140706E1C (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14070B408 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071DE80 (FsRtlIssueFileNotificationFsctl.c)
 *     IopGetVolumeId @ 0x140819E24 (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x14081B4F8 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140822174 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x14088F884 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14088F9C0 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1408AD4D8 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x140905B8C (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCF0 (IopBuildDeviceIoControlRequest.c)
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
