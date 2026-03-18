/*
 * XREFs of PopEsStartTelemetry @ 0x14071CA88
 * Callers:
 *     PopEsExitSleep @ 0x1406DCF5C (PopEsExitSleep.c)
 *     PopEsWorker @ 0x14071C8A0 (PopEsWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14058DED4 (PopCurrentPowerState.c)
 */

char PopEsStartTelemetry()
{
  __int64 v0; // rbx
  int v1; // ecx
  char result; // al
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PopCurrentPowerState(&v3);
  v1 = 0;
  PopEsAcOnline = v3;
  if ( BYTE1(v3) )
    v1 = HIDWORD(v3);
  PopEsLastBatteryThreshold = dword_140418150;
  result = byte_140418155;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140418155;
  PopEsLastStateChangeTimeStamp = v0;
  return result;
}
