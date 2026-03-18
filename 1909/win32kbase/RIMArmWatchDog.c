/*
 * XREFs of RIMArmWatchDog @ 0x1C0132F18
 * Callers:
 *     RIMWatchDog @ 0x1C0037120 (RIMWatchDog.c)
 *     rimSignalReadComplete @ 0x1C01520B4 (rimSignalReadComplete.c)
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
