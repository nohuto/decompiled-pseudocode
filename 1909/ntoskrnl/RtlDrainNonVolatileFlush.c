/*
 * XREFs of RtlDrainNonVolatileFlush @ 0x14030B1E0
 * Callers:
 *     RtlFlushNonVolatileMemory @ 0x14030B210 (RtlFlushNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x140312680 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlDrainNonVolatileFlush(PVOID NvToken)
{
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( RtlpIsDrainRequired )
  {
    if ( ((unsigned __int8)NvToken & 2) != 0 )
      _mm_sfence();
  }
  return 0;
}
