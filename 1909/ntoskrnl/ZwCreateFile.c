/*
 * XREFs of ZwCreateFile @ 0x1401C16F0
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x140154528 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14017FF2C (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x14059CC40 (PopFlushVolumeWorker.c)
 *     PspIoRateEntryActivate @ 0x1405B36C0 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x1406AE6C8 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x14074E1D0 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x1407811E8 (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140782A58 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x14078884C (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x14078ABFC (ExpGetSystemWriteConstraintInformation.c)
 *     CmpInitBackupHive @ 0x14082D274 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14082F398 (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x140852DA0 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14085EB40 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1408EABA8 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1408EC59C (SmpUtilsGetControlDevice.c)
 *     WheapWriteTriageDump @ 0x14091A4DC (WheapWriteTriageDump.c)
 *     KdpCreateFileCallback @ 0x140954100 (KdpCreateFileCallback.c)
 *     EmInitSystem @ 0x1409F93E0 (EmInitSystem.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A0A0AC (BapdpProcessVsmKeyBlobs.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A0FF08 (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x140A3F12C (VhdiMountVhdFile.c)
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
