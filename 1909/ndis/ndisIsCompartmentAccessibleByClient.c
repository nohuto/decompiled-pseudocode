/*
 * XREFs of ndisIsCompartmentAccessibleByClient @ 0x1C003671C
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0011500 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00200C0 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0064240 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0065030 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0065700 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065BD0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065E50 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisEnumerateInterfaces@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF@@IPEAI@Z @ 0x1C012FB08 (-ndisEnumerateInterfaces@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF@@IPEAI@Z.c)
 *     ?ndisEnumerateInterfaces32@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF32@@IPEAI@Z @ 0x1C0135A98 (-ndisEnumerateInterfaces32@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF32@@IPEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCompartmentAccessibleByClient(__int64 a1, __int64 a2, char a3)
{
  int v3; // r10d
  __int64 v6; // rcx

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 == *(_DWORD *)(a1 + 16) )
    return 1;
  if ( a3 || *(_DWORD *)a2 == -1 )
  {
    v6 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(a1 + 1684);
    if ( !v6 )
      v6 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a1 + 1692);
    if ( !v6 )
      return 1;
  }
  return (*(_DWORD *)(a1 + 1680) & 2) == 0 && v3 == 1;
}
