/*
 * XREFs of PnpQueryWatchdogTimeout @ 0x1400EF12C
 * Callers:
 *     PnpProcessWatchdogWorkItem @ 0x14029FA78 (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14029FB30 (PnpQueryWatchdogBugcheckEnabled.c)
 */

__int64 __fastcall PnpQueryWatchdogTimeout(char a1)
{
  if ( a1 )
    return 10LL;
  else
    return (unsigned __int8)PnpQueryWatchdogBugcheckEnabled() != 0 ? 0x168 : 0;
}
