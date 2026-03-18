/*
 * XREFs of ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00E3D10
 * Callers:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000A924 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C004DDF8 (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C00B5CB0 (DxgkConvertDisplayConfigToDevMode.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00B7ED8 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C00BBCD0 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4904 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00D6D98 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00D7018 (BmlCompareTargetModesWithConstraint.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C00E3B50 (_PopulateDisplayModeFromPresentPath.c)
 *     DxgkCddVerifyCddDevMode @ 0x1C013AEA0 (DxgkCddVerifyCddDevMode.c)
 *     DxgkUpdateCddDevmodeExtraData @ 0x1C013B1E0 (DxgkUpdateCddDevmodeExtraData.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0204C20 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0205D30 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C027A994 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000F658 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 */

__int64 __fastcall DmmMapVSyncFromRationalToInteger(
        const struct _D3DDDI_RATIONAL *a1,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a2,
        unsigned __int8 *a3)
{
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

  if ( !a1->Denominator )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( a3 )
    *a3 = 0;
  Denominator = a1->Denominator;
  Numerator = a1->Numerator;
  v8 = DMMVIDEOSIGNALMODE::DivideAndRound((unsigned int)Numerator, Denominator);
  v10 = (unsigned int *)&unk_1C0065878;
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
  if ( (unsigned int)(a2 - 2) <= 1 )
    v8 >>= 1;
  return v8;
}
