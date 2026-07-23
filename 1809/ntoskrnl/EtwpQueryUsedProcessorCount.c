/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x14001557C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140014E94 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpReenableCompression @ 0x1403158FC (EtwpReenableCompression.c)
 *     EtwpAdjustFreeBuffers @ 0x1405C2E48 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1405C3178 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x14065BF54 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x14065C2EC (EtwpInitLoggerContext.c)
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x14069B7E8 (EtwpAddLogHeader.c)
 *     EtwpFreeTraceBufferPool @ 0x1406C1FC4 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x1406D12A4 (EtwpRealtimeSaveState.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x14075AB44 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1408BF2D8 (EtwpBufferingModeFlush.c)
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
