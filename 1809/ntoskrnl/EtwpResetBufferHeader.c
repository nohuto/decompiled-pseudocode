/*
 * XREFs of EtwpResetBufferHeader @ 0x140015524
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140015278 (EtwpDequeueFreeBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x14065AE74 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpUpdateFileHeader @ 0x140699E3C (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1407021C0 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x14075F49C (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x1408CA0EC (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
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
