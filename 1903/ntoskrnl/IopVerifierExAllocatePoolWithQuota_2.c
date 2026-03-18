/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_2 @ 0x140153A98
 * Callers:
 *     IopLoadDriverImage @ 0x1401538AC (IopLoadDriverImage.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400377B0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota_2(__int64 a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(PagedPool, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(
             PagedPool,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
