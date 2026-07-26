/*
 * XREFs of ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C0115E70
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisPowerSaveClearStop @ 0x1C00144F8 (ndisPowerSaveClearStop.c)
 *     ndisPowerSaveStop @ 0x1C0014940 (ndisPowerSaveStop.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0067A40 (ndisIfCreateOrUpdateInterface.c)
 *     ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007D030 (-ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C01080E0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 */

void __fastcall ndisPnpRefresh(struct _GUID *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rax
  Ndis::BindRegistry *v3; // rbx
  enum Ndis::ReadBindingsOptions::Flags v4; // r8d

  ndisIfCreateOrUpdateInterface(a1);
  v2 = ndisReferenceMiniportByGuid(a1, MPREF_PNP_REFRESH);
  v3 = (Ndis::BindRegistry *)v2;
  if ( v2 )
  {
    ndisPowerSaveStop(v2, NdisSSPnPOp);
    Ndis::BindRegistry::Reload(v3, 0LL, v4);
    ndisPowerSaveClearStop((struct _NDIS_MINIPORT_BLOCK *)v3, 8);
    ndisDereferenceMiniport((__int64)v3, 0x22u);
  }
}
