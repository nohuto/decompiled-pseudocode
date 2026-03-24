/*
 * XREFs of IopAllocateIrpExReturn @ 0x1400B92E0
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x1400B92A0 (IopAllocateIrpMustSucceed.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCF0 (IopBuildDeviceIoControlRequest.c)
 *     IoPageReadEx @ 0x1400DE740 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA20 (IoSynchronousPageWriteEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E0610 (IopBuildAsynchronousFsdRequest.c)
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     IoAsynchronousPageWrite @ 0x140135014 (IoAsynchronousPageWrite.c)
 *     IopAllocateBackpocketIrp @ 0x14027E420 (IopAllocateBackpocketIrp.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x14065C7A0 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14065E460 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140661720 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140661910 (IopGetFileInformation.c)
 *     IopGetSetSecurityObject @ 0x1406990D0 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069B640 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406A95B0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9CE0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CC860 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD390 (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x1406FF270 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140701280 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC3C (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x14081CBB0 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x14081E1E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E840 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14000EB44 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400B9310 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140923810 (IovAllocateIrp.c)
 */

__int64 __fastcall IopAllocateIrpExReturn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2);
  return IovAllocateIrp(a1, a2, a3, a4);
}
