/*
 * XREFs of ndisIfReferenceMiniport @ 0x1C0002E20
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C002A178 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00636DC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00643EC (-ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERA.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00648B0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064BA0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007C108 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C007CC40 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00BCB14 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F9F90 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA7E0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00FAED0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 */

__int64 __fastcall ndisIfReferenceMiniport(__int64 a1)
{
  __int64 v2; // rbx
  KIRQL v3; // si

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a1 + 1395) )
  {
    v2 = *(_QWORD *)(a1 + 1408);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 1440));
    ++*(_DWORD *)(a1 + 1396);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v3);
  return v2;
}
