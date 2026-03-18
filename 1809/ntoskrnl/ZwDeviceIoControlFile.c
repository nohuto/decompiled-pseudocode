/*
 * XREFs of ZwDeviceIoControlFile @ 0x1401B8250
 * Callers:
 *     PopFlushAndHold @ 0x1402DE4C0 (PopFlushAndHold.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14065CD00 (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x1406AECC4 (SiGetDiskPartitionInformation.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406C5C64 (EtwpUpdateFileInfoDriverRegistration.c)
 *     SiGetDriveLayoutInformation @ 0x140704244 (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407146A0 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetPartitionInformation @ 0x1407147C4 (BiGetPartitionInformation.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140714968 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140714A38 (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073C23C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140761EA0 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x14086581C (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1408D0C80 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1408D0E9C (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1408D2E98 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1408F1A90 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1408F4F3C (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1408F5068 (SiIssueSynchronousIoctl.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     VhdiGetVolumeNumber @ 0x1409F9318 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1409F9470 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1409F9C74 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x1409F9D3C (RamdiskStart.c)
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
