/*
 * XREFs of PnpQueryWatchdogTimeout @ 0x14009B11C
 * Callers:
 *     PnpProcessWatchdogWorkItem @ 0x14029FD18 (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14029FDD0 (PnpQueryWatchdogBugcheckEnabled.c)
 */

__int64 __fastcall PnpQueryWatchdogTimeout(char a1)
{
  if ( a1 )
    return 10LL;
  else
    return (unsigned __int8)PnpQueryWatchdogBugcheckEnabled() != 0 ? 0x168 : 0;
}
