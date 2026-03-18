/*
 * XREFs of ExAllocatePoolWithTagFromNode @ 0x14013CB90
 * Callers:
 *     ExAllocateCacheAwarePushLock @ 0x14015CEB0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016DD84 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaInitialize @ 0x140199FB8 (ExpSaInitialize.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1402D8E18 (MiLockWorkingSetForLargeMapping.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140037850 (ExpAllocatePoolWithTagFromNode.c)
 */

__int64 __fastcall ExAllocatePoolWithTagFromNode(unsigned int a1, ULONG_PTR a2, unsigned int a3, int a4)
{
  return ExpAllocatePoolWithTagFromNode(a1, a2, a3, a4, 0);
}
