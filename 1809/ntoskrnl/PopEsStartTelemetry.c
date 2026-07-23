/*
 * XREFs of PopEsStartTelemetry @ 0x14071DD08
 * Callers:
 *     PopEsExitSleep @ 0x1406DE1DC (PopEsExitSleep.c)
 *     PopEsWorker @ 0x14071DB20 (PopEsWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14058EED4 (PopCurrentPowerState.c)
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
  PopEsLastBatteryThreshold = dword_1404191D0;
  result = byte_1404191D5;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_1404191D5;
  PopEsLastStateChangeTimeStamp = v0;
  return result;
}
