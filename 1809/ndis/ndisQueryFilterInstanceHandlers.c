/*
 * XREFs of ndisQueryFilterInstanceHandlers @ 0x1C00D0488
 * Callers:
 *     ndisHandleFilterHandlersChange @ 0x1C0024818 (ndisHandleFilterHandlersChange.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisFInvokeSetFilterModuleOptions @ 0x1C00D04E8 (ndisFInvokeSetFilterModuleOptions.c)
 */

void __fastcall ndisQueryFilterInstanceHandlers(__int64 a1)
{
  __int64 i; // rbx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x19u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  if ( a1 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2064LL); i; i = *(_QWORD *)(i + 112) )
    {
      ndisFInvokeSetFilterModuleOptions(i);
      if ( i == a1 )
        break;
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Au, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
}
