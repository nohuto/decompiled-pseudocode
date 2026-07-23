/*
 * XREFs of ZwDeviceIoControlFile @ 0x1401C0D30
 * Callers:
 *     PopFlushAndHold @ 0x1402FAEDC (PopFlushAndHold.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14062A510 (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x1406D2B6C (SiGetDiskPartitionInformation.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406E8918 (EtwpUpdateFileInfoDriverRegistration.c)
 *     SiGetDriveLayoutInformation @ 0x14072C80C (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionInformation @ 0x1407409AC (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140740AF8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140740CF8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140740DD0 (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140755074 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x14078ABFC (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A1548 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x14090DED8 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14090E114 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x140910158 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14092F184 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1409326A0 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14093277C (SiIssueSynchronousIoctl.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A22B54 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140A3EC7C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A3EE10 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A3F650 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140A3F710 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
