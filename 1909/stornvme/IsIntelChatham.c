/*
 * XREFs of IsIntelChatham @ 0x1C0007E44
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007F40 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x1C000A270 (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x1C0014250 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016B28 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
