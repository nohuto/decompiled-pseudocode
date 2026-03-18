/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_4 @ 0x14029AA78
 * Callers:
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406C02D0 (NtUnlockFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x140037BB0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID IopVerifierExAllocatePoolWithQuota_4()
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
