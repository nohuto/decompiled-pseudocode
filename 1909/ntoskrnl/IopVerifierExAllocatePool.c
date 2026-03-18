/*
 * XREFs of IopVerifierExAllocatePool @ 0x140089464
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14072D700 (NtSetVolumeInformationFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140037BB0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID IopVerifierExAllocatePool()
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             0x18uLL,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
}
