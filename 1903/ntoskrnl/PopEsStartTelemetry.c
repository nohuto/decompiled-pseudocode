/*
 * XREFs of PopEsStartTelemetry @ 0x1407478D0
 * Callers:
 *     PopEsExitSleep @ 0x1407244C4 (PopEsExitSleep.c)
 *     PopEsWorker @ 0x14073A580 (PopEsWorker.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopCurrentPowerState @ 0x14067E620 (PopCurrentPowerState.c)
 */

char PopEsStartTelemetry()
{
  __int64 v0; // rbx
  int v1; // ecx
  char result; // al
  _OWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, sizeof(v3));
  v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PopCurrentPowerState(v3);
  v1 = 0;
  PopEsAcOnline = v3[0];
  if ( BYTE1(v3[0]) )
    v1 = HIDWORD(v3[0]);
  PopEsLastBatteryThreshold = dword_140443B10;
  result = byte_140443B15;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140443B15;
  PopEsLastStateChangeTimeStamp = v0;
  return result;
}
