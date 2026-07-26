/*
 * XREFs of NdisImmediateReadSharedMemory @ 0x1C00EBA70
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00EC090 (ndisImmediateReadWriteSharedMemory.c)
 */

__int64 __fastcall NdisImmediateReadSharedMemory(__int64 a1)
{
  return ndisImmediateReadWriteSharedMemory(a1);
}
