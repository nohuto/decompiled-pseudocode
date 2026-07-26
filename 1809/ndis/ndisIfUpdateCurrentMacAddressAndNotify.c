/*
 * XREFs of ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00E35B8
 * Callers:
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00EF0D0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0042EBC (ndisIfUpdateCurrentMacAddress.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00BA990 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C4184 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfUpdateCurrentMacAddressAndNotify(struct _NDIS_IF_BLOCK *a1, unsigned __int16 *a2)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-10h]

  if ( ndisIfUpdateCurrentMacAddress((__int64)a1, a2) )
  {
    v3[0] = 1LL;
    v3[1] = &a1->ifPhysAddress;
    v4 = 0x22400000022LL;
    ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v3, 1);
    LODWORD(v3[0]) = 0;
    v4 = 0x21800000022LL;
    ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v3, 0);
    if ( a1->Source == NdisIfBlockSourcePersistedNetSetup )
      ndisIfWriteBackPersistedInterface(a1);
  }
}
