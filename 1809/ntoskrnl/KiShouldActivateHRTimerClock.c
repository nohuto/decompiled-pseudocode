/*
 * XREFs of KiShouldActivateHRTimerClock @ 0x1400FBE28
 * Callers:
 *     KiTimer2Expiration @ 0x1400FB470 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14016FF34 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldActivateHRTimerClock(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( (KiVelocityFlags & 0x100) != 0 )
  {
    if ( a2 >= a1 + (unsigned __int64)KeMaximumIncrement
      || KiClockOwnerOneShotRequest
      && (a2 >= KiClockOwnerOneShotRequest || KiClockOwnerOneShotRequest - a2 <= (unsigned int)KeMinimumIncrement) )
    {
      return v2;
    }
    return 1;
  }
  if ( !KiHRTimerClockActive && a2 < a1 + (unsigned __int64)KeMaximumIncrement )
    return 1;
  return v2;
}
