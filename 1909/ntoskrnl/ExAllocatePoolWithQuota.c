/*
 * XREFs of ExAllocatePoolWithQuota @ 0x140338C30
 * Callers:
 *     VerifierExAllocatePoolWithQuota @ 0x1409723E0 (VerifierExAllocatePoolWithQuota.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
