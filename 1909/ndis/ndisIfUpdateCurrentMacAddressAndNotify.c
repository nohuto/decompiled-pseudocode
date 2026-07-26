/*
 * XREFs of ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C0115010
 * Callers:
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C01172C4 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisIfUpdateCurrentMacAddress @ 0x1C00682B0 (ndisIfUpdateCurrentMacAddress.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0100580 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

char __fastcall ndisIfUpdateCurrentMacAddressAndNotify(struct _NDIS_IF_BLOCK *a1, unsigned __int16 *a2)
{
  char result; // al
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  _IF_PHYSICAL_ADDRESS_LH *p_ifPhysAddress; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]

  result = ndisIfUpdateCurrentMacAddress((__int64)a1, a2);
  if ( result )
  {
    v4[1] = 0;
    p_ifPhysAddress = &a1->ifPhysAddress;
    v4[0] = 1;
    v6 = 34;
    v7 = 548;
    ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v4, 1);
    v4[0] = 0;
    v7 = 536;
    result = ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v4, 0);
    if ( a1->Source == NdisIfBlockSourcePersistedNetSetup )
      return ndisIfWriteBackPersistedInterface(a1);
  }
  return result;
}
