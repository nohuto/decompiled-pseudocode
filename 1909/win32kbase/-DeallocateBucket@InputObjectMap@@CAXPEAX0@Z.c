/*
 * XREFs of ?DeallocateBucket@InputObjectMap@@CAXPEAX0@Z @ 0x1C019F3C0
 * Callers:
 *     ?AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01C5D74 (-AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     WmsgpPostMessage @ 0x1C0246224 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall InputObjectMap::DeallocateBucket(void *a1, void *a2)
{
  ExFreePoolWithTag(a1, 0);
}
