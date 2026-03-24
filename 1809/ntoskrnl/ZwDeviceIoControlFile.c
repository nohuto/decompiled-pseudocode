/*
 * XREFs of ZwDeviceIoControlFile @ 0x1401B8270
 * Callers:
 *     PopFlushAndHold @ 0x1402DE5C0 (PopFlushAndHold.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14065CCE0 (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x1406AECA4 (SiGetDiskPartitionInformation.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406C5C44 (EtwpUpdateFileInfoDriverRegistration.c)
 *     SiGetDriveLayoutInformation @ 0x140704224 (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140714680 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetPartitionInformation @ 0x1407147A4 (BiGetPartitionInformation.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140714948 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140714A18 (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073C21C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140761E80 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408657FC (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1408D0C60 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1408D0E7C (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1408D2E78 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1408F1A70 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1408F4F1C (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1408F5048 (SiIssueSynchronousIoctl.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     VhdiGetVolumeNumber @ 0x1409F9328 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1409F9480 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1409F9C84 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x1409F9D4C (RamdiskStart.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
