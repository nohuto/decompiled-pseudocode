/*
 * XREFs of MiSessionPoolVector @ 0x140703DC0
 * Callers:
 *     ExFreeLargePool @ 0x14009ADD0 (ExFreeLargePool.c)
 *     ExpAllocateBigPool @ 0x1400E69D0 (ExpAllocateBigPool.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD810 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiSessionPoolVector()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3456;
}
