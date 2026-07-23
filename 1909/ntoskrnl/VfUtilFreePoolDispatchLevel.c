/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x140327060
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140974608 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409746F4 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x14097EC18 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x14017EEB0 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
