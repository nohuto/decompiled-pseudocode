/*
 * XREFs of ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C00C4C6C
 * Callers:
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00C54B0 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00C58EC (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 * Callees:
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00C4D20 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00C6AB0 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisGetCombinedRSSParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_VPORT_BLOCK **a3,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a4,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a5,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a6)
{
  const struct _NDIS_OID_REQUEST *v9; // r11
  struct _NDIS_VPORT_BLOCK *v10; // r10
  struct _NDIS_RECEIVE_SCALE_PARAMETERS **v11; // rcx
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // rax

  ndisGetVPortBlockForRequest(a1, a2);
  if ( ndisShouldCacheRSSv2ParametersInMiniport(v9) )
  {
    *a4 = a1->CombinedNdisRSSParameters;
    if ( a5 )
      *a5 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer;
    v11 = a6;
    if ( a6 )
    {
      RssParametersBuffer = a1->RssParametersBuffer;
LABEL_10:
      *v11 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)RssParametersBuffer->Oid;
    }
  }
  else
  {
    *a4 = v10->CombinedNdisRSSParameters;
    if ( a5 )
      *a5 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)v10->RssParametersBuffer;
    v11 = a6;
    if ( a6 )
    {
      RssParametersBuffer = v10->RssParametersBuffer;
      goto LABEL_10;
    }
  }
  *a3 = v10;
}
