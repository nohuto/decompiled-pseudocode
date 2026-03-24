/*
 * XREFs of IopExceptionCleanup @ 0x140819B28
 * Callers:
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x14065E460 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x14069B640 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406A95B0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9CE0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CC860 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD390 (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x1406FF270 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14081E1E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E840 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     IoFreeIrp @ 0x1400B9670 (IoFreeIrp.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     IoFreeMdl @ 0x1400E0B60 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
