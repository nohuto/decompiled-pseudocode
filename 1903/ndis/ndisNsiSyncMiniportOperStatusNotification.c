/*
 * XREFs of ndisNsiSyncMiniportOperStatusNotification @ 0x1C00FF438
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038D04 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C003DAF8 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C009D330 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisWdfDevicePowerDown @ 0x1C00A5784 (ndisWdfDevicePowerDown.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSyncMiniportOperStatusNotification(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 4040);
  v3[1] = 0;
  v3[0] = 1;
  v5 = 8;
  v6 = 536;
  v4 = v1 + 1112;
  return ndisNsiNotifyClientInterfaceChange(v1, 0LL, v3);
}
