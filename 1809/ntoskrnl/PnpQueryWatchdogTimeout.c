/*
 * XREFs of PnpQueryWatchdogTimeout @ 0x140005D00
 * Callers:
 *     PnpProcessWatchdogWorkItem @ 0x140289A8C (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     PnpQueryWatchdogBugcheckEnabled @ 0x140289B54 (PnpQueryWatchdogBugcheckEnabled.c)
 */

__int64 __fastcall PnpQueryWatchdogTimeout(char a1)
{
  if ( a1 )
    return 10LL;
  else
    return (unsigned __int8)PnpQueryWatchdogBugcheckEnabled() != 0 ? 0x168 : 0;
}
