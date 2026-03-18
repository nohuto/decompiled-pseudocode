/*
 * XREFs of EtwpResetBufferHeader @ 0x140003A68
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140003774 (EtwpDequeueFreeBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406B687C (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpUpdateFileHeader @ 0x1406B8B08 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1406B9150 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x140785BDC (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x14090761C (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall EtwpResetBufferHeader(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
  if ( (*(_WORD *)(a1 + 52) & 0x100) != 0 )
  {
    memset((void *)(a1 + *(unsigned int *)(a1 + 8)), 0, (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 8)));
    result = 65279LL;
    *(_WORD *)(a1 + 52) &= ~0x100u;
  }
  return result;
}
