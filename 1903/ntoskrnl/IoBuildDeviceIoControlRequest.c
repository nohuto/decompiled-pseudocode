/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x1400BB080
 * Callers:
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140621FBC (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToGuidPath @ 0x140661640 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1406617B0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140685F00 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x1406863A0 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x1406B0448 (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1406EAAC0 (FsRtlQueryCachedVdl.c)
 *     IopGetVolumeId @ 0x1406F7CA4 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x14072C088 (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14072C820 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x14072DCD8 (IopLoadFileSystemDriver.c)
 *     FsRtlIssueDeviceIoControl @ 0x140734C00 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x1407369D8 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x14073AE80 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074653C (FsRtlIssueFileNotificationFsctl.c)
 *     IopSetRemoteLink @ 0x1408554D8 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14085C244 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x1408CDC54 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1408CDDA0 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1408EA42C (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x1409441AC (VhdiVerifyBootDisk.c)
 *     IopGetBootDiskInformation @ 0x140A39FEC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A3F35C (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A3FCD8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A3FECC (SbpStartLanman.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1400BB0E0 (IopBuildDeviceIoControlRequest.c)
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
