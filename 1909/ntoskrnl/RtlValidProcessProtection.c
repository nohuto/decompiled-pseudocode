/*
 * XREFs of RtlValidProcessProtection @ 0x1406F1660
 * Callers:
 *     PspBuildCreateProcessContext @ 0x14060D280 (PspBuildCreateProcessContext.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidProcessProtection(PS_PROTECTION ProcessProtection)
{
  if ( ProcessProtection.Level <= 0x41u )
  {
    if ( ProcessProtection.Level == 65
      || !ProcessProtection.Level
      || ProcessProtection.Level == 49
      || ProcessProtection.Level == 8
      || ProcessProtection.Level == 18
      || ProcessProtection.Level == 33 )
    {
      return 1;
    }
  }
  else if ( ProcessProtection.Level >= 0x51u
         && (ProcessProtection.Level <= 0x52u
          || ProcessProtection.Level > 0x60u
          && (ProcessProtection.Level <= 0x62u || ProcessProtection.Level == 114 || ProcessProtection.Level == 0x81)) )
  {
    return 1;
  }
  return 0;
}
