/*
 * XREFs of ndisIfUpdateL2MtuSizeAndNotify @ 0x1C011509C
 * Callers:
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C01172C4 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisIfUpdateL2MtuSize @ 0x1C0068198 (ndisIfUpdateL2MtuSize.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

char __fastcall ndisIfUpdateL2MtuSizeAndNotify(__int64 a1, int a2)
{
  char result; // al
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]

  result = ndisIfUpdateL2MtuSize(a1, a2);
  if ( result )
  {
    v4[1] = 0;
    v5 = a1 + 1120;
    v4[0] = 1;
    v6 = 4;
    v7 = 544;
    return ndisNsiNotifyClientInterfaceChange(a1, 0, (__int64)v4, 1);
  }
  return result;
}
