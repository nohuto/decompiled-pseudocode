/*
 * XREFs of IopVerifierExAllocatePool_3 @ 0x1402862F8
 * Callers:
 *     IopErrorLogThread @ 0x14070C3B0 (IopErrorLogThread.c)
 *     IopErrorLogQueueRequest @ 0x140821154 (IopErrorLogQueueRequest.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD810 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_3(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
