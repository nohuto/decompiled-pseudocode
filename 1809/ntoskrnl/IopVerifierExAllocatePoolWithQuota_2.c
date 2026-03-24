/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_2 @ 0x14013FC3C
 * Callers:
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     NtUnlockFile @ 0x14069B640 (NtUnlockFile.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7670 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD830 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 */

PVOID IopVerifierExAllocatePoolWithQuota_2()
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(NonPagedPoolNx, 8uLL, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             8uLL,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
