/*
 * XREFs of ZwCreateFile @ 0x1401C0B70
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x140153E88 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14017F83C (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x14059D3C0 (PopFlushVolumeWorker.c)
 *     PspIoRateEntryActivate @ 0x1405B32E4 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x1406B8F38 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x14074D740 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x14077E7C8 (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140780038 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x1407864EC (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x14078879C (ExpGetSystemWriteConstraintInformation.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14082F528 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpInitBackupHive @ 0x140831660 (CmpInitBackupHive.c)
 *     IopBootLogToFile @ 0x1408536A0 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14085F440 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1408EB2A0 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1408ECC8C (SmpUtilsGetControlDevice.c)
 *     WheapWriteTriageDump @ 0x14091AA7C (WheapWriteTriageDump.c)
 *     KdpCreateFileCallback @ 0x140954100 (KdpCreateFileCallback.c)
 *     EmInitSystem @ 0x1409F94D0 (EmInitSystem.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A09B80 (BapdpProcessVsmKeyBlobs.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A0F770 (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x140A3F35C (VhdiMountVhdFile.c)
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
