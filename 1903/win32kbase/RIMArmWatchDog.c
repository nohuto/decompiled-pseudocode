/*
 * XREFs of RIMArmWatchDog @ 0x1C0135588
 * Callers:
 *     RIMWatchDog @ 0x1C0038190 (RIMWatchDog.c)
 *     rimSignalReadComplete @ 0x1C01542AC (rimSignalReadComplete.c)
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
