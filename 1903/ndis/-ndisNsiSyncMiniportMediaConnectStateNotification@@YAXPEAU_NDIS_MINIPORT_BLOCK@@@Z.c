/*
 * XREFs of ?ndisNsiSyncMiniportMediaConnectStateNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109908
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038D04 (ndisIfUpdateInterfaceOnInitialize.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiSyncMiniportMediaConnectStateNotification(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _DWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  _NET_IF_MEDIA_CONNECT_STATE *p_MediaConnectState; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]

  IfBlock = a1->IfBlock;
  v2[1] = 0;
  v2[0] = 1;
  v4 = 4;
  v5 = 644;
  p_MediaConnectState = &IfBlock->MediaConnectState;
  ndisNsiNotifyClientInterfaceChange((__int64)IfBlock, 0, (__int64)v2, 1);
}
