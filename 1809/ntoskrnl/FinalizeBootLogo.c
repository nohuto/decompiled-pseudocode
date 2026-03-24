/*
 * XREFs of FinalizeBootLogo @ 0x14027D58C
 * Callers:
 *     StartFirstUserProcess @ 0x1409C5CC0 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x14027D2DC (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x14027D36C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14027D3F8 (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
