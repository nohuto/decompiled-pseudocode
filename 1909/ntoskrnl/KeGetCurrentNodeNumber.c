/*
 * XREFs of KeGetCurrentNodeNumber @ 0x140107FA0
 * Callers:
 *     ExAllocateCacheAwarePushLock @ 0x14015D550 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016E474 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaInitialize @ 0x14019A618 (ExpSaInitialize.c)
 * Callees:
 *     <none>
 */

USHORT KeGetCurrentNodeNumber(void)
{
  return KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
}
