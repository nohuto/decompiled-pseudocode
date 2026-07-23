/*
 * XREFs of ZwDeviceIoControlFile @ 0x1401B83D0
 * Callers:
 *     PopFlushAndHold @ 0x1402DE7B0 (PopFlushAndHold.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14065DEA0 (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x1406AFF44 (SiGetDiskPartitionInformation.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406C6EE4 (EtwpUpdateFileInfoDriverRegistration.c)
 *     SiGetDriveLayoutInformation @ 0x1407054C4 (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140715920 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetPartitionInformation @ 0x140715A44 (BiGetPartitionInformation.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140715BE8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140715CB8 (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073D40C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140763070 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140866A5C (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1408D1F20 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1408D213C (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1408D4138 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1408F2D30 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1408F61DC (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1408F6308 (SiIssueSynchronousIoctl.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     VhdiGetVolumeNumber @ 0x1409FA328 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1409FA480 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1409FAC84 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
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
