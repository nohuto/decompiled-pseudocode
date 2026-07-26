/*
 * XREFs of NdisGetVersion @ 0x1C0025CD0
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 * Callees:
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 */

UINT NdisGetVersion(void)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_D(71LL, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, 393298LL);
  return 393298;
}
