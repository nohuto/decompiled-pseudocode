/*
 * XREFs of ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D339C
 * Callers:
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D331C (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C0129C74 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0131300 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02B5890 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C001B4DC (-IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0131D04 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C014A718 (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C014F1C8 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(
        DMMVIDPNPRESENTPATH *this,
        D3DDDI_GAMMA_RAMP_RGB256x3x16 **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  DXGADAPTER **v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v13; // rdx
  __int64 v14; // rcx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v15; // xmm1_8
  _D3DKMDT_VIDPN_PRESENT_PATH *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  int updated; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // rax
  _D3DKMDT_VIDPN_PRESENT_PATH v37; // [rsp+20h] [rbp-308h] BYREF
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v38; // [rsp+190h] [rbp-198h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
    v5 = *(_QWORD *)(v4 + 40);
  }
  v7 = *(_QWORD *)(v5 + 88);
  v8 = *(DXGADAPTER ***)(v7 + 8);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
    v8 = *(DXGADAPTER ***)(v7 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a2 )
    return 0LL;
  if ( !DMMVIDEOPRESENTTARGET::IsTargetCurrentActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL)) )
    return 0LL;
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
  DMMVIDPNPRESENTPATH::Serialize(this, &v37);
  v13 = &v38;
  v14 = 2LL;
  v15 = a2[4];
  v16 = &v37;
  *(_OWORD *)&v37.GammaRamp.Type = *((_OWORD *)a2 + 1);
  v37.GammaRamp.Data.pRgb256x3x16 = v15;
  do
  {
    v17 = *(_OWORD *)&v16->ContentTransformation.ScalingSupport;
    *(_OWORD *)&v13->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v16->VidPnSourceId;
    v18 = *(_OWORD *)&v16->VisibleFromActiveTLOffset.cy;
    *(_OWORD *)&v13->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v17;
    VidPnTargetColorCoeffDynamicRanges = v16->VidPnTargetColorCoeffDynamicRanges;
    *(_OWORD *)&v13->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v18;
    v20 = *(_OWORD *)&v16->Content;
    v13->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
    v21 = *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[4];
    *(_OWORD *)&v13->VidPnPresentPathInfo.Content = v20;
    v22 = *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[20];
    *(_OWORD *)&v13->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v21;
    v23 = *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[36];
    v16 = (_D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v16 + 128);
    *(_OWORD *)&v13->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v22;
    v13 = (_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v13 + 128);
    *(_OWORD *)&v13[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v23;
    --v14;
  }
  while ( v14 );
  v24 = *(_OWORD *)&v16->ContentTransformation.ScalingSupport;
  *(_OWORD *)&v13->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v16->VidPnSourceId;
  v25 = *(_OWORD *)&v16->VisibleFromActiveTLOffset.cy;
  *(_OWORD *)&v13->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v24;
  v26 = v16->VidPnTargetColorCoeffDynamicRanges;
  *(_OWORD *)&v13->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v25;
  v27 = *(_OWORD *)&v16->Content;
  v13->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v26;
  v28 = *(_OWORD *)&v16->CopyProtection.OEMCopyProtection[4];
  v29 = *(_QWORD *)&v16->CopyProtection.OEMCopyProtection[20];
  *(_OWORD *)&v13->VidPnPresentPathInfo.Content = v27;
  *(_OWORD *)&v13->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v28;
  *(_QWORD *)&v13->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v29;
  v38.VidPnPresentPathInfo.ContentTransformation.Rotation = DMMVIDPNPRESENTPATH::GetContentRotationHw(this);
  updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath((ADAPTER_DISPLAY *)v8, &v38);
  v34 = updated;
  if ( updated >= 0 )
    return 0LL;
  v35 = WdLogNewEntry5_WdError(v32, v31, v33);
  *(_QWORD *)(v35 + 24) = this;
  *(_QWORD *)(v35 + 32) = v34;
  WdLogEvent5_WdError(v35);
  return (unsigned int)v34;
}
