/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140003AC0
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140003444 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x1401358A0 (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x1403320A0 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x140333F60 (EtwpReenableCompression.c)
 *     EtwpAdjustFreeBuffers @ 0x1405C3D58 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1405C5018 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x1406B67BC (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1406B6BB4 (EtwpInitLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1406B7440 (EtwpFreeTraceBufferPool.c)
 *     EtwpFinalizeHeader @ 0x1406B827C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406B8B08 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406B91F0 (EtwpAddLogHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406B9D6C (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeRestoreState @ 0x14077ED74 (EtwpRealtimeRestoreState.c)
 *     EtwpUpdateTrace @ 0x14077F2B0 (EtwpUpdateTrace.c)
 *     EtwpBufferingModeFlush @ 0x1408FAC14 (EtwpBufferingModeFlush.c)
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
