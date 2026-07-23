/*
 * XREFs of IopExceptionCleanup @ 0x14081AD28
 * Callers:
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FB000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FB710 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     NtReadFile @ 0x14063B160 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x14069C800 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406AA850 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406BAF80 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CDB00 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CE630 (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x140700510 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081BE3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14081F3E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081FA40 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall IopExceptionCleanup(char *Object, PIRP Irp, PVOID a3, PVOID P)
{
  struct _IRP *MasterIrp; // rcx
  struct _MDL *MdlAddress; // rcx

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( MasterIrp )
    ExFreePoolWithTag(MasterIrp, 0);
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
    IoFreeMdl(MdlAddress);
  IoFreeIrp(Irp);
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)(Object + 128), 0, 0);
    ObfDereferenceObject(Object);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( a3 )
    ObfDereferenceObject(a3);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ObfDereferenceObject(Object);
}
