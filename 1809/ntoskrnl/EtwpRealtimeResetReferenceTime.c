/*
 * XREFs of EtwpRealtimeResetReferenceTime @ 0x1408C3758
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405C0F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1405C12F0 (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     EtwpRealtimeUpdateReferenceTime @ 0x14075F49C (EtwpRealtimeUpdateReferenceTime.c)
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
