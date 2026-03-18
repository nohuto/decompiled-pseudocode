/*
 * XREFs of IsIntelChatham @ 0x1C0008004
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0008100 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x1C000A420 (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x1C0014300 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016BD8 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
