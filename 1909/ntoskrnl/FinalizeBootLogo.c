/*
 * XREFs of FinalizeBootLogo @ 0x140291D6C
 * Callers:
 *     StartFirstUserProcess @ 0x1409FD234 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x140291ABC (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x140291B4C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x140291BD8 (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
