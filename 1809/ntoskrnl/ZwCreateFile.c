/*
 * XREFs of ZwCreateFile @ 0x1401B8C30
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1400F4ED4 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x140176BFC (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x14056D9E0 (PopFlushVolumeWorker.c)
 *     PspIoRateEntryActivate @ 0x140585150 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x14069A1D4 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x140741020 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x140759050 (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140759810 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x14075F708 (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140761E80 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpInitBackupHive @ 0x1407F4420 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F67DC (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x140819440 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x140824FC8 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AE2E0 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1408AFC2C (SmpUtilsGetControlDevice.c)
 *     WheapWriteTriageDump @ 0x1408DC7E8 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14091967C (KdPullRemoteFile.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D12A0 (BapdpProcessVsmKeyBlobs.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1409D9820 (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x1409F9784 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
