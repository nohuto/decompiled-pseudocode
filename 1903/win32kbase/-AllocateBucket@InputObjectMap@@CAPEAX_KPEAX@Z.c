/*
 * XREFs of ?AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z @ 0x1C01C8060
 * Callers:
 *     ?AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01C7D14 (-AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall InputObjectMap::AllocateBucket(SIZE_T NumberOfBytes, void *a2)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x766E6355u);
}
