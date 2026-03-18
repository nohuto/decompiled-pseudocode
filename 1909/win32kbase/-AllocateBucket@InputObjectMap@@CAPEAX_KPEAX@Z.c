/*
 * XREFs of ?AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z @ 0x1C01C60C0
 * Callers:
 *     ?AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01C5D74 (-AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall InputObjectMap::AllocateBucket(SIZE_T NumberOfBytes, void *a2)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x766E6355u);
}
