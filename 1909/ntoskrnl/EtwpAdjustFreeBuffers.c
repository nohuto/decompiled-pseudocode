/*
 * XREFs of EtwpAdjustFreeBuffers @ 0x1405C4228
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1405C5518 (EtwpFlushActiveBuffers.c)
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140003B44 (EtwpQueryUsedProcessorCount.c)
 *     EtwpAllocateFreeBuffers @ 0x1400FCE88 (EtwpAllocateFreeBuffers.c)
 */

__int64 __fastcall EtwpAdjustFreeBuffers(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edx
  __int64 v3; // rcx
  unsigned int UsedProcessorCount; // edi

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) == 0 )
  {
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    if ( v2 < UsedProcessorCount
      && UsedProcessorCount - v2 != (unsigned int)EtwpAllocateFreeBuffers(v3, UsedProcessorCount - v2) )
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}
