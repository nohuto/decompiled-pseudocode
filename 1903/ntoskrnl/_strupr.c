/*
 * XREFs of _strupr @ 0x14019F2D0
 * Callers:
 *     InbvDetermineFunction @ 0x140198618 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     InbvDriverInitialize @ 0x140A1A02C (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A1A0E0 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
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
