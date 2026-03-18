/*
 * XREFs of EtwpRealtimeResetReferenceTime @ 0x1409002B8
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x1406AD1F0 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406AD46C (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     EtwpRealtimeUpdateReferenceTime @ 0x140787F3C (EtwpRealtimeUpdateReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeResetReferenceTime(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 448) = *(_OWORD *)(a1 + 320);
  if ( *(_DWORD *)(a1 + 360) )
    return EtwpRealtimeUpdateReferenceTime(a1, (__int128 *)(a1 + 448));
  return result;
}
