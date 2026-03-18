/*
 * XREFs of KeGetCurrentNodeNumber @ 0x140108FA0
 * Callers:
 *     ExAllocateCacheAwarePushLock @ 0x14015CEB0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016DD84 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaInitialize @ 0x140199FB8 (ExpSaInitialize.c)
 * Callees:
 *     <none>
 */

USHORT KeGetCurrentNodeNumber(void)
{
  return KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
}
