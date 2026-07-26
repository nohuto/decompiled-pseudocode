/*
 * XREFs of ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0080B98
 * Callers:
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0080340 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0080BFC (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisIsTargetTheMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00267C0 (-ndisIsTargetTheMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0081658 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisSetCombinedRSSParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_VPORT_BLOCK *a3,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS *a4)
{
  const struct _NDIS_OID_REQUEST *v5; // r11
  _NDIS_RECEIVE_SCALE_PARAMETERS *v6; // r9
  __int64 v7; // r10

  v5 = a2;
  if ( (a4->Flags & 0x10) != 0 || !LOBYTE(a4->HashInformation) )
    ndisIsTargetTheMiniport(a2);
  if ( ndisShouldCacheRSSv2ParametersInMiniport(v5) )
    *(_QWORD *)(v7 + 552) = v6;
  else
    a3->CombinedNdisRSSParameters = v6;
}
