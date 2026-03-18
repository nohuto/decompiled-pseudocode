/*
 * XREFs of ExAllocatePoolWithQuota @ 0x14031A360
 * Callers:
 *     VerifierExAllocatePoolWithQuota @ 0x1409253D0 (VerifierExAllocatePoolWithQuota.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7650 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
