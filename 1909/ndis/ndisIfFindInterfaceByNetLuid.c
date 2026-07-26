/*
 * XREFs of ndisIfFindInterfaceByNetLuid @ 0x1C0039EE8
 * Callers:
 *     ?ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0039B80 (-ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BE0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0039D7C (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0064470 (-ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0064A80 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064D70 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065BD0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     NdisIfGetInterfaceIndexFromNetLuid @ 0x1C00667B0 (NdisIfGetInterfaceIndexFromNetLuid.c)
 *     ndisIfSetIfDescr @ 0x1C0067FF8 (ndisIfSetIfDescr.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007C2D8 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C007CE10 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00BCCE4 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall ndisIfFindInterfaceByNetLuid(_LIST_ENTRY *a1)
{
  _LIST_ENTRY *Flink; // rax
  __int64 v2; // rdx

  Flink = ndisIfList.Flink;
  v2 = 0LL;
  while ( Flink != &ndisIfList )
  {
    if ( Flink[5].Flink == a1 )
      return Flink - 77;
    if ( Flink[5].Flink > a1 )
      return (_LIST_ENTRY *)v2;
    Flink = Flink->Flink;
  }
  return (_LIST_ENTRY *)v2;
}
