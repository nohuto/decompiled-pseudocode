/*
 * XREFs of IopAllocateIrpCleanup @ 0x1408193B4
 * Callers:
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x14065C7A0 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14065E460 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140661720 (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x1406990D0 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069B640 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406A95B0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9CE0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CC860 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD390 (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x1406FF270 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140701280 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14081E1E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E840 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(char *Object, PVOID a2)
{
  if ( a2 )
    ObfDereferenceObject(a2);
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)(Object + 128), 0, 0);
    ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  return ObfDereferenceObject(Object);
}
