/*
 * XREFs of IsIntelChatham @ 0x1C000ABD8
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x1C000CEBC (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x1C0014A14 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016438 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
