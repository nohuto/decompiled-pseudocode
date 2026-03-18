/*
 * XREFs of DxgkpIsDrtEnabled @ 0x1C023A3D0
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C02109C8 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02386DC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023EC84 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x1C02404F0 (-InternalEscapeEnabled@@YAEXZ.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DxgkpIsDrtEnabled(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+38h] [rbp-11h]
  const wchar_t *v8; // [rsp+40h] [rbp-9h]
  int *v9; // [rsp+48h] [rbp-1h]
  int v10; // [rsp+50h] [rbp+7h]
  int *v11; // [rsp+58h] [rbp+Fh]
  int v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+70h] [rbp+27h]
  _BYTE v15[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v16; // [rsp+B0h] [rbp+67h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current && (*((_BYTE *)Current + 299) & 0x40) != 0 )
    return 1;
  v16 = 0;
  v6 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v8 = L"DRTTestEnable";
  v9 = &v16;
  v11 = &v16;
  v7 = 288;
  v10 = 67108868;
  v12 = 4;
  memset(v15, 0, sizeof(v15));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v6, 0LL, 0LL);
  if ( v16 == 1484026436 )
    return 1;
  v5 = WdLogNewEntry5_WdEvent(v3);
  *(_QWORD *)(v5 + 24) = 51LL;
  WdLogEvent5_WdEvent(v5);
  return 0;
}
