/*
 * XREFs of ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB31C
 * Callers:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0005E00 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C0054FC8 (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C9B94 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00D1A08 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00DB1C0 (BmlCompareTargetModesWithConstraint.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C012EB30 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C012ECE0 (DxgkConvertDisplayConfigToDevMode.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C01474F8 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkUpdateCddDevmodeExtraData @ 0x1C014B580 (DxgkUpdateCddDevmodeExtraData.c)
 *     DxgkCddVerifyCddDevMode @ 0x1C014B740 (DxgkCddVerifyCddDevMode.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C016DF24 (_PopulateDisplayModeFromPresentPath.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0236598 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C02376C4 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02B2D68 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000390C (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 */

__int64 __fastcall DmmMapVSyncFromRationalToInteger(const struct _D3DDDI_RATIONAL *a1, __int64 a2, unsigned __int8 *a3)
{
  int v4; // esi
  UINT Denominator; // r10d
  __int64 Numerator; // rdi
  unsigned int v8; // r9d
  unsigned __int64 v9; // r10
  unsigned int *v10; // rcx
  unsigned int v11; // r8d
  unsigned __int64 v12; // r11
  __int64 v13; // rbp
  unsigned __int64 v14; // r14
  __int64 v16; // rax

  v4 = a2;
  if ( !a1->Denominator )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( a3 )
    *a3 = 0;
  Denominator = a1->Denominator;
  Numerator = a1->Numerator;
  v8 = DMMVIDEOSIGNALMODE::DivideAndRound((unsigned int)Numerator, Denominator);
  v10 = (unsigned int *)&unk_1C006E160;
  v11 = 0;
  while ( 1 )
  {
    if ( (_DWORD)v9 )
    {
      v12 = v10[1];
      if ( (_DWORD)v12 )
      {
        v13 = *v10;
        v14 = 100000 * Numerator / v9;
        if ( v14 >= 99950 * v13 / v12 && v14 <= 100050 * v13 / v12 )
          break;
      }
    }
    ++v11;
    v10 += 2;
    if ( v11 >= 6 )
      goto LABEL_11;
  }
  if ( (unsigned int)Numerator / (unsigned int)v9 != v8 && a3 )
    *a3 = 1;
  v8 = (unsigned int)Numerator / (unsigned int)v9;
LABEL_11:
  if ( (unsigned int)(v4 - 2) <= 1 )
    v8 >>= 1;
  return v8;
}
