/*
 * XREFs of FinalizeBootLogo @ 0x14029200C
 * Callers:
 *     StartFirstUserProcess @ 0x1409FCD18 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x140291D5C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x140291DEC (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x140291E78 (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
