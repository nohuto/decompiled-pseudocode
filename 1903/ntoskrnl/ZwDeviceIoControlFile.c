/*
 * XREFs of ZwDeviceIoControlFile @ 0x1401C01B0
 * Callers:
 *     PopFlushAndHold @ 0x1402FB42C (PopFlushAndHold.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140626660 (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x1406D36BC (SiGetDiskPartitionInformation.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406E7818 (EtwpUpdateFileInfoDriverRegistration.c)
 *     SiGetDriveLayoutInformation @ 0x14072A96C (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionInformation @ 0x14073EAAC (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14073EBF8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x14073EDF8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14073EED0 (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407545E4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x14078879C (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A1D08 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x14090E478 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14090E6B4 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409106F8 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14092F710 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140932C2C (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140932D08 (SiIssueSynchronousIoctl.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A22A74 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140A3EEAC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A3F040 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A3F880 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
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
