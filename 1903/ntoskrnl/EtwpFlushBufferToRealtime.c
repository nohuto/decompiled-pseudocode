/*
 * XREFs of EtwpFlushBufferToRealtime @ 0x14062FDF8
 * Callers:
 *     EtwpFlushBuffer @ 0x14062FCC0 (EtwpFlushBuffer.c)
 * Callees:
 *     EtwpRealtimeDeliverBuffer @ 0x14062F6B4 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406B9E14 (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpFlushBufferToRealtime(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( !*(_DWORD *)(a1 + 360) || *(_DWORD *)(a1 + 440) || (result = EtwpRealtimeDeliverBuffer(a1, a2), (int)result < 0) )
  {
    if ( !a3 )
      return EtwpRealtimeSaveBuffer(a1, a2);
  }
  else if ( !a3 )
  {
    return result;
  }
  if ( !*(_DWORD *)(a1 + 360) || *(_DWORD *)(a1 + 440) )
    return 0LL;
  return result;
}
