/*
 * XREFs of ?DeallocateBucket@InputObjectMap@@CAXPEAX0@Z @ 0x1C01A1670
 * Callers:
 *     ?AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01C7D14 (-AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     WmsgpPostMessage @ 0x1C0249654 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall InputObjectMap::DeallocateBucket(void *a1, void *a2)
{
  ExFreePoolWithTag(a1, 0);
}
