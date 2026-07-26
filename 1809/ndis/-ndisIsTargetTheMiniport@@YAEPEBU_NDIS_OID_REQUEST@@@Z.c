/*
 * XREFs of ?ndisIsTargetTheMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00267C0
 * Callers:
 *     ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0080B98 (-ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPO.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIsTargetTheMiniport(const struct _NDIS_OID_REQUEST *a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 != (const struct _NDIS_OID_REQUEST *)-72LL && (*(_DWORD *)&a1->NdisReserved[16] & 0x4000) != 0 )
    a1 = *(const struct _NDIS_OID_REQUEST **)&a1->NdisReserved[24];
  if ( a1->Header.Revision < 2u || (a1[1].RequestType & 1) == 0 )
    return 1;
  return v1;
}
