/*
 * XREFs of IopAllocateIrpExReturn @ 0x140037180
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140037030 (IopAllocateIrpMustSucceed.c)
 *     IoPageReadEx @ 0x1400A7640 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400A794C (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400BB0E0 (IopBuildDeviceIoControlRequest.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127260 (IopBuildAsynchronousFsdRequest.c)
 *     IoAsynchronousPageWrite @ 0x140137438 (IoAsynchronousPageWrite.c)
 *     IopAllocateBackpocketIrp @ 0x140292EB0 (IopAllocateBackpocketIrp.c)
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopGetFileInformation @ 0x140627E84 (IopGetFileInformation.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x14062B1F0 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x140679180 (BuildQueryDirectoryIrp.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     NtWriteFileGather @ 0x1406A3D30 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406A4400 (NtReadFileScatter.c)
 *     NtUnlockFile @ 0x1406C1390 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406CC660 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406CF9A0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DB3A0 (NtNotifyChangeDirectoryFileEx.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 *     NtSetVolumeInformationFile @ 0x14072B860 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854B90 (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x140856C30 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x140858120 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408587D0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400371B0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1400B54F8 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140962970 (IovAllocateIrp.c)
 */

__int64 IopAllocateIrpExReturn()
{
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate();
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension();
  return IovAllocateIrp();
}
