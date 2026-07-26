/*
 * XREFs of ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0081658
 * Callers:
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C007F568 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C007FB14 (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00804A8 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0080B98 (-ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPO.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisShouldCacheRSSv2ParametersInMiniport(const struct _NDIS_OID_REQUEST *a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 != (const struct _NDIS_OID_REQUEST *)-72LL && (*(_DWORD *)&a1->NdisReserved[16] & 0x4000) != 0 )
    a1 = *(const struct _NDIS_OID_REQUEST **)&a1->NdisReserved[24];
  if ( (a1[1].RequestType & 1) == 0 || (unsigned int)(*(_DWORD *)&a1[1].Header - 1) > 0xFFFFFFFD )
    return 1;
  return v1;
}
