/*
 * XREFs of ExAllocatePool @ 0x14013A730
 * Callers:
 *     EtwTimLogRedirectionTrustPolicy @ 0x140582AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     VerifierExAllocatePool @ 0x140925260 (VerifierExAllocatePool.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePool(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
