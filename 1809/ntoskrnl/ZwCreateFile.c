/*
 * XREFs of ZwCreateFile @ 0x1401B8D90
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1400F4F54 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x140176CFC (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x14056E9E0 (PopFlushVolumeWorker.c)
 *     PspIoRateEntryActivate @ 0x140586150 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x14069B394 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x140742210 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x14075A240 (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x14075AA00 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x1407608F8 (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140763070 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpInitBackupHive @ 0x1407F5620 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F79DC (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x14081A640 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x1408261C8 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AF540 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1408B0E8C (SmpUtilsGetControlDevice.c)
 *     WheapWriteTriageDump @ 0x1408DDAA8 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14091A67C (KdPullRemoteFile.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D22A0 (BapdpProcessVsmKeyBlobs.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1409DA820 (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x1409FA784 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
