/*
 * XREFs of IopVerifierExAllocatePool_3 @ 0x14029B758
 * Callers:
 *     IopErrorLogThread @ 0x140737B10 (IopErrorLogThread.c)
 *     IopErrorLogQueueRequest @ 0x14085B20C (IopErrorLogQueueRequest.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400377B0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_3(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
