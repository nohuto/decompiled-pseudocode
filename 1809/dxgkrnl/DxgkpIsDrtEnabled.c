/*
 * XREFs of DxgkpIsDrtEnabled @ 0x1C0208860
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C01E1670 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C020C050 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x1C020D524 (-InternalEscapeEnabled@@YAEXZ.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char DxgkpIsDrtEnabled()
{
  struct DXGPROCESS *Current; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+38h] [rbp-11h]
  const wchar_t *v7; // [rsp+40h] [rbp-9h]
  int *v8; // [rsp+48h] [rbp-1h]
  int v9; // [rsp+50h] [rbp+7h]
  int *v10; // [rsp+58h] [rbp+Fh]
  int v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+70h] [rbp+27h]
  _BYTE v14[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v15; // [rsp+B0h] [rbp+67h] BYREF

  Current = DXGPROCESS::GetCurrent();
  if ( Current && (*((_BYTE *)Current + 323) & 0x40) != 0 )
    return 1;
  v15 = 0;
  v5 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v7 = L"DRTTestEnable";
  v8 = &v15;
  v10 = &v15;
  v6 = 288;
  v9 = 67108868;
  v11 = 4;
  memset(v14, 0, sizeof(v14));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v5, 0LL, 0LL);
  if ( v15 == 1484026436 )
    return 1;
  v4 = WdLogNewEntry5_WdEvent(v2, v1);
  *(_QWORD *)(v4 + 24) = 51LL;
  WdLogEvent5_WdEvent(v4);
  return 0;
}
