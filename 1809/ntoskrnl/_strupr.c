/*
 * XREFs of _strupr @ 0x140194BD0
 * Callers:
 *     InbvDetermineFunction @ 0x14018E454 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140915140 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     InbvDriverInitialize @ 0x1409D6F70 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x1409D7020 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x1409F9D4C (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176800 (xHalTimerWatchdogStop.c)
 */

char *__cdecl strupr(char *String)
{
  char v3; // cl
  char *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int8)(v3 - 97) <= 0x19u )
        *v4 = v3 - 32;
      v3 = *++v4;
    }
    return String;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
