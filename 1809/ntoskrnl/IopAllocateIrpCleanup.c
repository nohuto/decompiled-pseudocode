/*
 * XREFs of IopAllocateIrpCleanup @ 0x14081A5B4
 * Callers:
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FB000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FB710 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     NtReadFile @ 0x14063B160 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x14065D960 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069C800 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406AA850 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406BAF80 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CDB00 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CE630 (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x140700510 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140702520 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081BE3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14081F3E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081FA40 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
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
