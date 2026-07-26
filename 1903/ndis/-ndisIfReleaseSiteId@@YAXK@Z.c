/*
 * XREFs of ?ndisIfReleaseSiteId@@YAXK@Z @ 0x1C0063B7C
 * Callers:
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C0063D54 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0065530 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065C80 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfReleaseSiteId(unsigned int a1)
{
  if ( ndisIfSiteIdWrapped )
  {
    if ( a1 > 0x7FFFFFF )
      ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)((ndisIfSiteScopeId.Value ^ (a1 - 1)) & 0xFFFFFFF ^ ndisIfSiteScopeId.Value);
  }
}
