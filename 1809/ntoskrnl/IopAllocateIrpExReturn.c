/*
 * XREFs of IopAllocateIrpExReturn @ 0x1400B92C0
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x1400B9280 (IopAllocateIrpMustSucceed.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCD0 (IopBuildDeviceIoControlRequest.c)
 *     IoPageReadEx @ 0x1400DE720 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA00 (IoSynchronousPageWriteEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E05F0 (IopBuildAsynchronousFsdRequest.c)
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     IoAsynchronousPageWrite @ 0x140134FF4 (IoAsynchronousPageWrite.c)
 *     IopAllocateBackpocketIrp @ 0x14027E320 (IopAllocateBackpocketIrp.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x14065C7C0 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140661740 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140661930 (IopGetFileInformation.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069B660 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406A95D0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9D00 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CC880 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD3B0 (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x1406FF290 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1407012A0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x14081CBD0 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x14081E200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E860 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14000EB44 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400B92F0 (IopAllocateIrpPrivate.c)
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
