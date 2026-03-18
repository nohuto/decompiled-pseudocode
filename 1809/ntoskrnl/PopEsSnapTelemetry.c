/*
 * XREFs of PopEsSnapTelemetry @ 0x1406E19D0
 * Callers:
 *     PopEsEnterSleepShutdown @ 0x1406E198C (PopEsEnterSleepShutdown.c)
 *     PopEsUpdateState @ 0x14071C9D4 (PopEsUpdateState.c)
 * Callees:
 *     PopTraceEsState @ 0x140158E18 (PopTraceEsState.c)
 */

char __fastcall PopEsSnapTelemetry(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rsi
  char result; // al

  v1 = 0;
  v3 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( *(_BYTE *)(a1 + 1) )
    v1 = *(_DWORD *)(a1 + 12);
  if ( PopEsLastStateChangeTimeStamp )
    PopTraceEsState();
  PopEsAcOnline = *(_BYTE *)a1;
  PopEsLastBatteryThreshold = dword_140418150;
  result = byte_140418155;
  PopEsLastStateChangeTimeStamp = v3;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140418155;
  return result;
}
