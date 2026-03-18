/*
 * XREFs of PnpCancelWatchdog @ 0x1400EFCD0
 * Callers:
 *     PnpDisableWatchdog @ 0x1400EFC58 (PnpDisableWatchdog.c)
 * Callees:
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     PnpRecordBlackbox @ 0x1400EFD20 (PnpRecordBlackbox.c)
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14029FB30 (PnpQueryWatchdogBugcheckEnabled.c)
 *     PnpWatchdogBugcheck @ 0x14029FDB0 (PnpWatchdogBugcheck.c)
 */

char __fastcall PnpCancelWatchdog(__int64 a1)
{
  char v1; // di

  v1 = 0;
  if ( a1 )
  {
    *(_BYTE *)(a1 + 136) = 0;
    if ( !KeCancelTimer((PKTIMER)(a1 + 8)) )
    {
      v1 = 1;
      if ( *(_BYTE *)(a1 + 137) )
      {
        if ( (unsigned __int8)PnpQueryWatchdogBugcheckEnabled() )
          PnpWatchdogBugcheck(a1);
      }
    }
    PnpRecordBlackbox(0LL, *(unsigned int *)(a1 + 200));
  }
  return v1;
}
