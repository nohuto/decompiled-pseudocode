/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x14001557C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140014E94 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpReenableCompression @ 0x14031560C (EtwpReenableCompression.c)
 *     EtwpAdjustFreeBuffers @ 0x1405C1E48 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1405C2178 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x14065ADB4 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x14065B14C (EtwpInitLoggerContext.c)
 *     EtwpUpdateFileHeader @ 0x140699E3C (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069A41C (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x14069A648 (EtwpAddLogHeader.c)
 *     EtwpFreeTraceBufferPool @ 0x1406C0D44 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x1406D0024 (EtwpRealtimeSaveState.c)
 *     EtwpUpdateTrace @ 0x140725AFC (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x140759974 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1408BE038 (EtwpBufferingModeFlush.c)
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
