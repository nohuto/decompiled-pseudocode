/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140003B44
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140003444 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x140136260 (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x140331B00 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x1403339C0 (EtwpReenableCompression.c)
 *     EtwpAdjustFreeBuffers @ 0x1405C4228 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1405C5518 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x1406A9FBC (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1406AA3B4 (EtwpInitLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1406AC9A4 (EtwpFreeTraceBufferPool.c)
 *     EtwpFinalizeHeader @ 0x1406AD96C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406AE298 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406AE8E0 (EtwpAddLogHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406AF45C (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeRestoreState @ 0x140781794 (EtwpRealtimeRestoreState.c)
 *     EtwpUpdateTrace @ 0x140781CD0 (EtwpUpdateTrace.c)
 *     EtwpBufferingModeFlush @ 0x1408FA5F4 (EtwpBufferingModeFlush.c)
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
