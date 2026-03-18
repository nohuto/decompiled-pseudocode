/*
 * XREFs of EtwpInitializeBufferHeader @ 0x1400DD2BC
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x1400DD134 (EtwpAllocateFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x14065AE74 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpUpdateFileHeader @ 0x140699E3C (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1407021C0 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x14075F49C (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x1408CA0EC (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
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
