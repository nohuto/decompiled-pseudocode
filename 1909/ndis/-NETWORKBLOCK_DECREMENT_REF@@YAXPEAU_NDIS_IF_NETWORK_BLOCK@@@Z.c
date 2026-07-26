/*
 * XREFs of ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00630CC
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C002A168 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0065030 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0065700 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065E50 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NETWORKBLOCK_DECREMENT_REF(struct _NDIS_IF_NETWORK_BLOCK *a1)
{
  struct _KEVENT *AsyncEvent; // rcx

  if ( a1->Ref-- == 1 )
  {
    AsyncEvent = a1->AsyncEvent;
    if ( AsyncEvent )
      KeSetEvent(AsyncEvent, 0, 0);
  }
}
