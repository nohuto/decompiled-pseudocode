/*
 * XREFs of IopVerifierExAllocatePoolWithQuota @ 0x14008C8B0
 * Callers:
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FB710 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     NtQueryEaFile @ 0x1406AA850 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406BAF80 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x140700510 (NtSetVolumeInformationFile.c)
 *     NtSetEaFile @ 0x14081F3E0 (NtSetEaFile.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota(__int64 a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(NonPagedPoolNx, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
