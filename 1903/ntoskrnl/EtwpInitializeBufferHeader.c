/*
 * XREFs of EtwpInitializeBufferHeader @ 0x140108BA8
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x140108A64 (EtwpAllocateFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406B687C (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpUpdateFileHeader @ 0x1406B8B08 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1406B9150 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x140785BDC (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x14090761C (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
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
