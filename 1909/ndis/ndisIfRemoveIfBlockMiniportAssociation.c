/*
 * XREFs of ndisIfRemoveIfBlockMiniportAssociation @ 0x1C0114E90
 * Callers:
 *     ndisPnPCompleteRemoveDevice @ 0x1C0118868 (ndisPnPCompleteRemoveDevice.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIfDetachMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0063A90 (-ndisIfDetachMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfRemoveIfBlockMiniportAssociation(
        char a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        _NET_IF_ADMIN_STATUS a3)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  _NDIS_IF_BLOCK *IfBlock; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edx
  char v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+40h] [rbp-20h] BYREF
  int v12; // [rsp+44h] [rbp-1Ch]
  __int64 v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+54h] [rbp-Ch]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      202,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      a1,
      v10);
  }
  v4->IfBlock->ifOperStatusFlags = 0;
  v4->IfBlock->ifAdminStatus = a3;
  IfBlock = v4->IfBlock;
  if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
  {
    v12 = 0;
    IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
    v7 = (__int64)v4->IfBlock;
    v11 = 1;
    v14 = 8;
    v15 = 536;
    v13 = v7 + 1112;
    ndisNsiNotifyClientInterfaceChange(v7, 0, (__int64)&v11, 1);
    IfBlock = v4->IfBlock;
  }
  if ( IfBlock->MediaConnectState )
  {
    IfBlock->MediaConnectState = MediaConnectStateUnknown;
    v8 = (__int64)v4->IfBlock;
    v12 = 0;
    v11 = 1;
    v14 = 4;
    v15 = 644;
    v13 = v8 + 1220;
    ndisNsiNotifyClientInterfaceChange(v8, 0, (__int64)&v11, 1);
  }
  ndisIfDetachMiniportBlock(v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      22,
      203,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      a1,
      (char)v4);
  }
}
