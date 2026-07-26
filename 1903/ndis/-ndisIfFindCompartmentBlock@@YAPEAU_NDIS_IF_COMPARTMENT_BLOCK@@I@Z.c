/*
 * XREFs of ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368CC
 * Callers:
 *     ndisIfReferenceCompartmentForUser @ 0x1C0020380 (ndisIfReferenceCompartmentForUser.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C0024C80 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00361F8 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0036748 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     ndisGetNsiClientInfo @ 0x1C00367B8 (ndisGetNsiClientInfo.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BF0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0062F30 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C00632D8 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C0063D54 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0065530 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065C80 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfGetCompartmentJobObject @ 0x1C0067A74 (ndisIfGetCompartmentJobObject.c)
 *     ndisIfGetCompartmentNamespaceGuid @ 0x1C0067B40 (ndisIfGetCompartmentNamespaceGuid.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_COMPARTMENT_BLOCK *__fastcall ndisIfFindCompartmentBlock(unsigned int a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // rax
  __int64 v2; // rdx

  Flink = ndisIfCompartmentList;
  v2 = 0LL;
  while ( Flink != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
  {
    if ( Flink->CompartmentId == a1 )
      return Flink;
    if ( Flink->CompartmentId > a1 )
      return (struct _NDIS_IF_COMPARTMENT_BLOCK *)v2;
    Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
  }
  return (struct _NDIS_IF_COMPARTMENT_BLOCK *)v2;
}
