/*
 * XREFs of ndisIovFindVPortByVPortIdInternal @ 0x1C00B1C18
 * Callers:
 *     ndisOidPreRcvFilterEnumFilters @ 0x1C005FED0 (ndisOidPreRcvFilterEnumFilters.c)
 *     ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B0584 (-ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisIovFindVPortByVPortId @ 0x1C00B1BA0 (ndisIovFindVPortByVPortId.c)
 *     ndisOidPostIovVPortParameters @ 0x1C00B2980 (ndisOidPostIovVPortParameters.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00C4D20 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C5B64 (-ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisIovFindVPortByVPortIdInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 *i; // rax

  v2 = 0LL;
  for ( i = *(__int64 **)(a1 + 4744); i != (__int64 *)(a1 + 4744); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 31) == a2 )
      return i;
    if ( *((_DWORD *)i + 31) > a2 )
      return (__int64 *)v2;
  }
  return (__int64 *)v2;
}
