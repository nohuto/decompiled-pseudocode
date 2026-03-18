/*
 * XREFs of ExAllocatePoolWithTagFromNode @ 0x14013D170
 * Callers:
 *     ExAllocateCacheAwarePushLock @ 0x14015D550 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016E474 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaInitialize @ 0x14019A618 (ExpSaInitialize.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1402D8B78 (MiLockWorkingSetForLargeMapping.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140037C50 (ExpAllocatePoolWithTagFromNode.c)
 */

__int64 __fastcall ExAllocatePoolWithTagFromNode(unsigned int a1, ULONG_PTR a2, unsigned int a3, int a4)
{
  return ExpAllocatePoolWithTagFromNode(a1, a2, a3, a4, 0);
}
