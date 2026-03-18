/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14009AEF0
 * Callers:
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140625E64 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToDosName @ 0x14064BE70 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x14064C310 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x1406902F0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140690460 (IoVolumeDeviceNameToGuidPath.c)
 *     IopGetSetObjectId @ 0x1406B2378 (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x1406EBD80 (FsRtlQueryCachedVdl.c)
 *     IopGetVolumeId @ 0x1406F9A64 (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x14072DF28 (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14072E6C0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x14072FBA8 (IopLoadFileSystemDriver.c)
 *     FsRtlIssueDeviceIoControl @ 0x140736E60 (FsRtlIssueDeviceIoControl.c)
 *     IopCreateArcName @ 0x140738C38 (IopCreateArcName.c)
 *     FsRtlBalanceReads @ 0x14073CDE0 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074843C (FsRtlIssueFileNotificationFsctl.c)
 *     IopSetRemoteLink @ 0x140854BD8 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14085B944 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x1408CD534 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1408CD680 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x1408E9D34 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x140943C1C (VhdiVerifyBootDisk.c)
 *     IopGetBootDiskInformation @ 0x140A39DBC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A3F12C (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A3FAA8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A3FC9C (SbpStartLanman.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14009AF50 (IopBuildDeviceIoControlRequest.c)
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
