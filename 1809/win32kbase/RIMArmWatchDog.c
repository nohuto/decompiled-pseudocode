/*
 * XREFs of RIMArmWatchDog @ 0x1C010B1D0
 * Callers:
 *     RIMWatchDog @ 0x1C0032AE0 (RIMWatchDog.c)
 *     rimSignalReadComplete @ 0x1C0127738 (rimSignalReadComplete.c)
 * Callees:
 *     <none>
 */

BOOLEAN RIMArmWatchDog()
{
  BOOLEAN result; // al

  if ( gWatchDogTimer )
  {
    if ( !gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 1;
      return KeSetTimer(gWatchDogTimer, (LARGE_INTEGER)-50000000LL, 0LL);
    }
  }
  return result;
}
