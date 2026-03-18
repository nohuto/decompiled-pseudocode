/*
 * XREFs of KiGetClockIntervalOneShot @ 0x140113084
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140033740 (KiCheckForTimerExpiration.c)
 *     KiRestoreClockTickRate @ 0x14011297C (KiRestoreClockTickRate.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140112DEC (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetClockIntervalOneShot(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = KeMinimumIncrement;
  if ( a1 > a2 + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    return (KeMinimumIncrement - (int)a2 + (int)a1 - 1) / (unsigned int)KeMinimumIncrement * KeMinimumIncrement;
  return v2;
}
