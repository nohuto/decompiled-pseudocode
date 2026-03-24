/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x14001557C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140014E94 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpReenableCompression @ 0x14031570C (EtwpReenableCompression.c)
 *     EtwpAdjustFreeBuffers @ 0x1405C1E48 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1405C2178 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x14065AD94 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x14065B12C (EtwpInitLoggerContext.c)
 *     EtwpUpdateFileHeader @ 0x140699E1C (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069A3FC (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x14069A628 (EtwpAddLogHeader.c)
 *     EtwpFreeTraceBufferPool @ 0x1406C0D24 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x1406D0004 (EtwpRealtimeSaveState.c)
 *     EtwpUpdateTrace @ 0x140725ADC (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x140759954 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1408BE018 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryUsedProcessorCount(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
    return (unsigned int)KeNumberProcessors_0;
  return result;
}
