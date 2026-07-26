/*
 * XREFs of NdisImmediateWriteSharedMemory @ 0x1C00EBB20
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00EC090 (ndisImmediateReadWriteSharedMemory.c)
 */

__int64 __fastcall NdisImmediateWriteSharedMemory(__int64 a1)
{
  return ndisImmediateReadWriteSharedMemory(a1);
}
