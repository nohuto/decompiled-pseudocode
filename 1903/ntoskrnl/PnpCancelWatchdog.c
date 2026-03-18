/*
 * XREFs of PnpCancelWatchdog @ 0x1400B3928
 * Callers:
 *     PnpDisableWatchdog @ 0x1400B38B0 (PnpDisableWatchdog.c)
 * Callees:
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     PnpRecordBlackbox @ 0x1400B3978 (PnpRecordBlackbox.c)
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14029FDD0 (PnpQueryWatchdogBugcheckEnabled.c)
 *     PnpWatchdogBugcheck @ 0x1402A0050 (PnpWatchdogBugcheck.c)
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
