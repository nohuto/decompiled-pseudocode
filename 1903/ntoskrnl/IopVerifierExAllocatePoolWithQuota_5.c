/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_5 @ 0x14029AE80
 * Callers:
 *     NtQueryQuotaInformationFile @ 0x1408587D0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400377B0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota_5(POOL_TYPE a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(a1, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
