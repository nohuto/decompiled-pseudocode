/*
 * XREFs of ZwCreateFile @ 0x1401B8C10
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1400F4EB4 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x140176BDC (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x14056D9E0 (PopFlushVolumeWorker.c)
 *     PspIoRateEntryActivate @ 0x140585150 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x14069A1F4 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x140741040 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x140759070 (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140759830 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x14075F728 (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140761EA0 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpInitBackupHive @ 0x1407F4440 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F67FC (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x140819460 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x140824FE8 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AE300 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1408AFC4C (SmpUtilsGetControlDevice.c)
 *     WheapWriteTriageDump @ 0x1408DC808 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14091967C (KdPullRemoteFile.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D12A0 (BapdpProcessVsmKeyBlobs.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1409D9820 (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x1409F9774 (VhdiMountVhdFile.c)
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
