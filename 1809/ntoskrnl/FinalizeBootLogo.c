/*
 * XREFs of FinalizeBootLogo @ 0x14027D48C
 * Callers:
 *     StartFirstUserProcess @ 0x1409C5CC0 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x14027D1DC (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x14027D26C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14027D2F8 (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
