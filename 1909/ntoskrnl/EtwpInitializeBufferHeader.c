/*
 * XREFs of EtwpInitializeBufferHeader @ 0x1400FCFCC
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x1400FCE88 (EtwpAllocateFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406AA07C (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1406ADEC4 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1406AE298 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x140787F3C (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x14090704C (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall EtwpInitializeBufferHeader(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // ax
  __int64 result; // rax

  memset(a2, 0, 0x48uLL);
  a2[2] = 72;
  a2[12] = a2[2];
  *a2 = *((_DWORD *)a1 + 1);
  v4 = *a1;
  *((_WORD *)a2 + 21) = *a1;
  if ( !v4 )
    *((_WORD *)a2 + 21) = -1;
  result = 256LL;
  *((_WORD *)a2 + 26) |= 0x100u;
  return result;
}
