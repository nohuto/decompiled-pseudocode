/*
 * XREFs of ndisSetupLwfMiniportHandlers @ 0x1C001B3F8
 * Callers:
 *     ndisSetupNdis6OpenHandlers @ 0x1C001B388 (ndisSetupNdis6OpenHandlers.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0024818 (ndisHandleFilterHandlersChange.c)
 *     NdisFSetAttributes @ 0x1C0025530 (NdisFSetAttributes.c)
 *     ndisFilterAttachCleanUp @ 0x1C005C06C (ndisFilterAttachCleanUp.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C010C328 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisSetMiniportHandlers @ 0x1C010E9D0 (ndisSetMiniportHandlers.c)
 * Callees:
 *     ndisSetupUpwardHandlers @ 0x1C001B450 (ndisSetupUpwardHandlers.c)
 *     ndisSetupDownwardHandlers @ 0x1C001B750 (ndisSetupDownwardHandlers.c)
 *     ndisSetupNoFilterHandlers @ 0x1C0024B54 (ndisSetupNoFilterHandlers.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupLwfMiniportHandlers(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(67LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  if ( *(_QWORD *)(a1 + 2056) )
  {
    ndisSetupDownwardHandlers(a1);
    result = ndisSetupUpwardHandlers(a1);
  }
  else
  {
    *(_BYTE *)(a1 + 2007) = 0;
    result = ndisSetupNoFilterHandlers(a1);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return WPP_SF_q(68LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  return result;
}
