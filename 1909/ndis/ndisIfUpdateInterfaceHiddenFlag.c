/*
 * XREFs of ndisIfUpdateInterfaceHiddenFlag @ 0x1C0109958
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038CF4 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisMUpdateHiddenFlag @ 0x1C003F3C0 (ndisMUpdateHiddenFlag.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

char __fastcall ndisIfUpdateInterfaceHiddenFlag(__int64 a1, char a2)
{
  char result; // al
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  result = a2;
  if ( a2 != (*(_BYTE *)(a1 + 1218) != 0) )
  {
    v3[1] = 0;
    *(_BYTE *)(a1 + 1218) = a2;
    v3[0] = 1;
    v5 = 1;
    v4 = a1 + 1218;
    v6 = 642;
    return ndisNsiNotifyClientInterfaceChange(a1, 0, (__int64)v3, 1);
  }
  return result;
}
