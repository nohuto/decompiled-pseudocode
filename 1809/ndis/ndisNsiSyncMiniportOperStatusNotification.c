/*
 * XREFs of ndisNsiSyncMiniportOperStatusNotification @ 0x1C00BD698
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001589C (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C0016028 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C4184 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSyncMiniportOperStatusNotification(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 4072);
  v3[0] = 1LL;
  v3[1] = v1 + 1112;
  v4 = 8;
  v5 = 536;
  return ndisNsiNotifyClientInterfaceChange(v1, 0LL, v3, 1LL);
}
