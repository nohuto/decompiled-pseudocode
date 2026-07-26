/*
 * XREFs of ndisIfFindInterfaceByNetLuid @ 0x1C00241D4
 * Callers:
 *     ?ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0023F7C (-ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0023FDC (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0024140 (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003F6A0 (-ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003FBE0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003FE90 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040B00 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     NdisIfGetInterfaceIndexFromNetLuid @ 0x1C0041570 (NdisIfGetInterfaceIndexFromNetLuid.c)
 *     ndisIfSetIfDescr @ 0x1C0042C40 (ndisIfSetIfDescr.c)
 *     ndisInvokeDeviceReset @ 0x1C00500CC (ndisInvokeDeviceReset.c)
 *     ndisQueryDeviceReset @ 0x1C0050914 (ndisQueryDeviceReset.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0078C34 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall ndisIfFindInterfaceByNetLuid(_LIST_ENTRY *a1)
{
  _LIST_ENTRY *Flink; // rax
  __int64 v2; // rdx
  _LIST_ENTRY *v3; // r9

  Flink = ndisIfList.Flink;
  v2 = 0LL;
  while ( Flink != &ndisIfList )
  {
    v3 = Flink[5].Flink;
    if ( v3 == a1 )
      return Flink - 77;
    if ( v3 > a1 )
      return (_LIST_ENTRY *)v2;
    Flink = Flink->Flink;
  }
  return (_LIST_ENTRY *)v2;
}
