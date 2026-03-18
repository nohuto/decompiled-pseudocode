/*
 * XREFs of _strupr @ 0x14019F9F0
 * Callers:
 *     InbvDetermineFunction @ 0x140198C78 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 *     InbvDriverInitialize @ 0x140A1A1BC (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A1A270 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140A3F710 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
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
