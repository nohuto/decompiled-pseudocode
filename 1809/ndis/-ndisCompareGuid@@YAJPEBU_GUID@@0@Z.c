/*
 * XREFs of ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C000988C
 * Callers:
 *     ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0009780 (-ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C001BD74 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001C2F0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C001E404 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C001EE2C (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0022BD0 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1C003EE88 (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003EF20 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0040110 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00B3EDC (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCompareGuid(const struct _GUID *a1, const struct _GUID *a2)
{
  unsigned __int16 Data2; // ax
  unsigned __int16 v5; // cx
  unsigned __int16 Data3; // ax
  unsigned __int16 v7; // cx
  SIZE_T v8; // rax

  if ( a1->Data1 > a2->Data1 )
    return 1LL;
  if ( a1->Data1 < a2->Data1 )
    return 0xFFFFFFFFLL;
  Data2 = a1->Data2;
  v5 = a2->Data2;
  if ( Data2 > v5 )
    return 1LL;
  if ( Data2 < v5 )
    return 0xFFFFFFFFLL;
  Data3 = a1->Data3;
  v7 = a2->Data3;
  if ( Data3 > v7 )
    return 1LL;
  if ( Data3 < v7 )
    return 0xFFFFFFFFLL;
  v8 = RtlCompareMemory(a1->Data4, a2->Data4, 8uLL);
  if ( v8 == 8 )
    return 0LL;
  if ( a1->Data4[v8] > a2->Data4[v8] )
    return 1LL;
  else
    return 0xFFFFFFFFLL;
}
