/*
 * XREFs of IopAllocateIrpExReturn @ 0x140037580
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140037420 (IopAllocateIrpMustSucceed.c)
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x14009AF50 (IopBuildDeviceIoControlRequest.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     IoAsynchronousPageWrite @ 0x14011A258 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127C80 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateBackpocketIrp @ 0x140292C10 (IopAllocateBackpocketIrp.c)
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405F0890 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     IopGetFileInformation @ 0x14062BCD4 (IopGetFileInformation.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 *     NtReadFileScatter @ 0x140674200 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 *     BuildQueryDirectoryIrp @ 0x14067EAF0 (BuildQueryDirectoryIrp.c)
 *     NtUnlockFile @ 0x1406C02D0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406CB490 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406CEC10 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DC110 (NtNotifyChangeDirectoryFileEx.c)
 *     IoSetInformation @ 0x1406EDE60 (IoSetInformation.c)
 *     NtSetVolumeInformationFile @ 0x14072D700 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854290 (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x140856330 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x140857820 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140857ED0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400375B0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1400F1600 (IopAllocateIrpWithExtension.c)
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
