/*
 * XREFs of ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C0063A94
 * Callers:
 *     ndisIfReferenceCompartmentForUser @ 0x1C0020380 (ndisIfReferenceCompartmentForUser.c)
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0023C4C (ndisIfReadNetworkGuidFromKey.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0062F30 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     NdisMSetInterfaceCompartment @ 0x1C0066720 (NdisMSetInterfaceCompartment.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0011F54 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

struct _NDIS_IF_COMPARTMENT_BLOCK *__fastcall ndisIfFindCompartmentBlockByGuid(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // rbx
  __int64 v3; // rdi

  Flink = ndisIfCompartmentList;
  v3 = 0LL;
  while ( Flink != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
  {
    if ( !(unsigned int)ndisCompareGuid(&Flink->LoopbackInfo.CompartmentGuid, a1) )
      return Flink;
    Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
  }
  return (struct _NDIS_IF_COMPARTMENT_BLOCK *)v3;
}
