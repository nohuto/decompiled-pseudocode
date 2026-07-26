/*
 * XREFs of ?NdisGetVersion640Shim@@YAIXZ @ 0x1C007D240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 */

__int64 NdisGetVersion640Shim(void)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xCu, &WPP_38e351531fd3379a277386d5a19dba54_Traceguids);
  return 393256LL;
}
