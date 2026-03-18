/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x1403099A0
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140935008 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409350E8 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x14093F370 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x14016C310 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(struct _SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
