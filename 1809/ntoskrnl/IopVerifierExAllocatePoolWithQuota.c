/*
 * XREFs of IopVerifierExAllocatePoolWithQuota @ 0x14008C8C0
 * Callers:
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     NtQueryEaFile @ 0x1406A95D0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9D00 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x1406FF290 (NtSetVolumeInformationFile.c)
 *     NtSetEaFile @ 0x14081E200 (NtSetEaFile.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7650 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD810 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
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
