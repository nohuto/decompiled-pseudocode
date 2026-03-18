/*
 * XREFs of IopAllocateIrpCleanup @ 0x140853634
 * Callers:
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
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
 *     NtSetEaFile @ 0x140858120 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408587D0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x14003B880 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(volatile __int32 *Object, PVOID a2)
{
  if ( a2 )
    ObfDereferenceObject(a2);
  if ( (Object[20] & 2) != 0 )
    IopReleaseFileObjectLock(Object);
  return ObfDereferenceObject((PVOID)Object);
}
