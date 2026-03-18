/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02554D8
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0254DF0 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000292C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00030C4 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0003174 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000EC9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00BAA10 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00BAB18 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00C25BC (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C024F278 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C0254BD4 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C0254D80 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0254FA0 (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02550C0 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C02552C0 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C02906D8 (MonitorGetEdidBaseBlockPtr.c)
 */

__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        void *const a3,
        UINT a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(const struct _DXGDMM_INTERFACE *, D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *, D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *); // rax
  DXGADAPTER *v7; // rsi
  __int64 v8; // r14
  int v10; // eax
  __int64 v11; // rcx
  _OWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  unsigned int v23; // edi
  int v24; // eax
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(_QWORD, _QWORD, _QWORD, unsigned __int64 *); // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  int v32; // r15d
  bool v33; // r14
  int VideoOutputTechnology; // eax
  __int64 v35; // rcx
  __int64 v36; // rbx
  _QWORD *v37; // rax
  int v38; // edi
  unsigned __int8 *EdidBaseBlockPtr; // r14
  int PreferredMode; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  _QWORD *v43; // rax
  UINT APSTriggerBits; // r13d
  UINT v45; // r12d
  UINT v46; // r14d
  UINT cy; // esi
  __int64 v48; // rcx
  __int64 v49; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE cx; // eax
  unsigned __int32 VidPnSourceId; // r15d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY VidPnTargetId; // ebx
  char v53; // al
  __int64 v54; // r8
  __int64 v55; // r13
  int v56; // edx
  __int64 v57; // rax
  struct tagSIZE v58; // rdx
  int IsAudioAvailableInEdid; // eax
  __int64 v60; // rcx
  unsigned int v61; // ebx
  __int64 v62; // rax
  char v63; // si
  __int64 v64; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE ImportanceOrdinal; // ecx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v66; // eax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v67; // eax
  __int64 v68; // rdx
  struct _DPI_INFORMATION *v69; // r9
  _QWORD *v70; // rax
  struct tagSIZE v71; // r8
  unsigned int v72; // eax
  __int64 v73; // rax
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  struct _D3DKMDT_2DREGION *v79; // [rsp+28h] [rbp-E0h]
  struct _D3DKMDT_2DREGION v80; // [rsp+48h] [rbp-C0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v81[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v82; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v83; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v84[6]; // [rsp+1C8h] [rbp+C0h] BYREF

  v6 = (__int64 (__fastcall *)(const struct _DXGDMM_INTERFACE *, D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *, D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *))*((_QWORD *)this + 6);
  v7 = a2;
  v8 = (unsigned int)a3;
  *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[36] = a2;
  v83.VidPnTargetColorCoeffDynamicRanges.FirstChannel = a4;
  *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[20] = (_DWORD)a3;
  *(_QWORD *)&v83.Content = 0LL;
  memset(&v83.CopyProtection.OEMCopyProtection[100], 0, 28);
  v83.CopyProtection.OEMCopyProtection[92] = 0;
  *(_QWORD *)&v83.ContentTransformation.ScalingSupport = 0LL;
  v10 = v6(a2, &v83.ContentTransformation.ScalingSupport, &v83.Content);
  v12 = (_OWORD *)v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v7;
LABEL_3:
    v13[4] = v12;
LABEL_96:
    WdLogEvent5_WdError(v13);
    goto LABEL_105;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v83.CopyProtection.OEMCopyProtection[92],
    *(__int64 *)&v83.ContentTransformation.ScalingSupport,
    *((_QWORD *)this + 8),
    (__int64)v7);
  v14 = *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[100];
  *(_QWORD *)&v83.ContentTransformation.RotationSupport = 0LL;
  *(_QWORD *)&v83.VidPnTargetColorCoeffDynamicRanges.ThirdChannel = 0LL;
  v15 = (**(__int64 (__fastcall ***)(_QWORD, D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *, UINT *))&v83.Content)(
          *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[100],
          &v83.ContentTransformation.RotationSupport,
          &v83.VidPnTargetColorCoeffDynamicRanges.ThirdChannel);
  v12 = (_OWORD *)v15;
  if ( v15 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v13[3] = v14;
    goto LABEL_3;
  }
  *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[28] = 0LL;
  v17 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, UCHAR *))&v83.VidPnTargetColorCoeffDynamicRanges.ThirdChannel)(
          *(_QWORD *)&v83.ContentTransformation.RotationSupport,
          (unsigned int)v8,
          &v83.CopyProtection.OEMCopyProtection[28]);
  v12 = (_OWORD *)v17;
  if ( v17 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v13[3] = v8;
    v19 = *(_QWORD *)&v83.ContentTransformation.RotationSupport;
LABEL_95:
    v13[4] = v19;
    v13[5] = v12;
    goto LABEL_96;
  }
  memset(v84, 0, sizeof(v84));
  v21 = *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[28];
  v12 = (_OWORD *)a6;
  v22 = 0LL;
  *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[84] = 0LL;
  *(_OWORD *)&v83.GammaRamp.Type = v84[4];
  v23 = (*(_QWORD *)&v83.CopyProtection.OEMCopyProtection[28] > 1uLL) | *(_DWORD *)(a6 + 92) & 0x20;
  HIDWORD(v84[5]) = v23;
  if ( !*(_QWORD *)&v83.CopyProtection.OEMCopyProtection[28] )
  {
    *(_OWORD *)&v83.CopyProtection.OEMCopyProtection[244] = v84[1];
LABEL_98:
    if ( (v23 & 2) == 0
      || (v71 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v84[5]), 4)),
          v71.cx == 1234568) )
    {
      v72 = DWORD2(v84[0]);
    }
    else
    {
      v72 = Win81::AdjustDesktopScaleFactorForOverride(
              (Win81 *)0x64,
              v84[2],
              v71,
              (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *)v20);
      DWORD2(v84[0]) = v72;
    }
    if ( !v72 )
    {
      v73 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v73 + 24) = 1048LL;
      WdLogEvent5_WdAssertion(v73);
    }
    v74 = *(_OWORD *)&v83.CopyProtection.OEMCopyProtection[244];
    *v12 = v84[0];
    v75 = v84[2];
    v12[1] = v74;
    v76 = v84[3];
    v12[2] = v75;
    v77 = *(_OWORD *)&v83.GammaRamp.Type;
    v12[3] = v76;
    v12[4] = v77;
    v12[5] = v84[5];
    LODWORD(v12) = 0;
    goto LABEL_105;
  }
  *(_OWORD *)&v83.CopyProtection.OEMCopyProtection[244] = v84[1];
  while ( 1 )
  {
    v80.cy = -1;
    BYTE2(v80.cx) = 0;
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, UINT *))(*(_QWORD *)&v83.VidPnTargetColorCoeffDynamicRanges.ThirdChannel
                                                                              + 8LL))(
            *(_QWORD *)&v83.ContentTransformation.RotationSupport,
            (unsigned int)v8,
            v22,
            &v80.cy);
    v12 = (_OWORD *)v24;
    if ( v24 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v19 = (unsigned int)v8;
      v13[3] = v22;
      goto LABEL_95;
    }
    v82 = 0LL;
    v26 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)&v83.VidPnTargetColorCoeffDynamicRanges.ThirdChannel
                                                                               + 24LL);
    memset(&v83.CopyProtection.OEMCopyProtection[52], 0, 28);
    v83.CopyProtection.OEMCopyProtection[44] = 0;
    v27 = v26(*(_QWORD *)&v83.ContentTransformation.RotationSupport, (unsigned int)v8, v80.cy, &v82);
    v12 = (_OWORD *)v27;
    if ( v27 < 0 )
      break;
    v29 = v82;
    if ( !v82 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v30 + 24) = 780LL;
      WdLogEvent5_WdAssertion(v30);
      v29 = v82;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v83.CopyProtection.OEMCopyProtection[44],
      v29,
      *(_QWORD *)(*(_QWORD *)&v83.VidPnTargetColorCoeffDynamicRanges.ThirdChannel + 32LL),
      *(__int64 *)&v83.ContentTransformation.RotationSupport);
    v31 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(*(_QWORD *)&v83.CopyProtection.OEMCopyProtection[52] + 20LL));
    LOBYTE(v80.cx) = 0;
    v81[0] = D3DKMDT_VOT_UNINITIALIZED;
    v32 = v31;
    v33 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, v80.cy, v81, 0LL);
    v36 = VideoOutputTechnology;
    if ( VideoOutputTechnology >= 0 )
    {
      v33 = IsInternalVideoOutput(v81[0]);
      LOBYTE(v80.cx) = v33;
    }
    else
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v37[3] = v7;
      v37[4] = v80.cy;
      v37[5] = v36;
      WdLogEvent5_WdError(v37);
    }
    *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[16] = v33;
    v82 = 0LL;
    v83.VidPnTargetColorBasis = D3DKMDT_CB_UNINITIALIZED;
    v38 = (v23 ^ (v23 | (4 * v33))) & 4 ^ v23;
    EdidBaseBlockPtr = (unsigned __int8 *)MonitorGetEdidBaseBlockPtr(v7, v80.cy);
    *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[236] = EdidBaseBlockPtr;
    HIBYTE(v80.cx) = 0;
    *(_QWORD *)&v83.CopyProtection.APSTriggerBits = 0LL;
    *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[4] = 0;
    PreferredMode = EDID_V1_GetPreferredMode(
                      EdidBaseBlockPtr,
                      (struct DISPLAY_PREFERRED_MODE_INFO *)&v83.CopyProtection.APSTriggerBits);
    v42 = PreferredMode;
    if ( PreferredMode >= 0 )
    {
      HIBYTE(v80.cx) = 1;
    }
    else
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v43[3] = v7;
      v43[4] = v80.cy;
      v43[5] = v42;
      WdLogEvent5_WdError(v43);
    }
    APSTriggerBits = v83.CopyProtection.APSTriggerBits;
    v45 = *(_DWORD *)v83.CopyProtection.OEMCopyProtection;
    v83.ContentTransformation.ScalingSupport = (D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)v83.CopyProtection.APSTriggerBits;
    v83.ContentTransformation.Rotation = *(_DWORD *)v83.CopyProtection.OEMCopyProtection;
    if ( ((v32 - 2) & 0xFFFFFFFD) == 0 )
    {
      APSTriggerBits = *(_DWORD *)v83.CopyProtection.OEMCopyProtection;
      v83.ContentTransformation.ScalingSupport = *(D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v83.CopyProtection.OEMCopyProtection;
      v45 = v83.CopyProtection.APSTriggerBits;
      v83.ContentTransformation.Rotation = v83.CopyProtection.APSTriggerBits;
    }
    if ( EdidBaseBlockPtr )
    {
      if ( (int)EDID_V1_GetPhysicalSize(
                  v41,
                  EdidBaseBlockPtr,
                  &v83.VisibleFromActiveBROffset.cy,
                  (unsigned int *)&v83.CopyProtection.OEMCopyProtection[12]) < 0 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v48);
        *(_QWORD *)(v49 + 24) = 839LL;
        WdLogEvent5_WdAssertion(v49);
      }
      cy = v83.VisibleFromActiveBROffset.cy;
      v46 = *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[12];
      v82 = __PAIR64__(*(unsigned int *)&v83.CopyProtection.OEMCopyProtection[12], v83.VisibleFromActiveBROffset.cy);
      if ( ((v32 - 2) & 0xFFFFFFFD) == 0 )
      {
        cy = *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[12];
        v82 = __PAIR64__(v83.VisibleFromActiveBROffset.cy, *(unsigned int *)&v83.CopyProtection.OEMCopyProtection[12]);
        v46 = v83.VisibleFromActiveBROffset.cy;
      }
      if ( cy && v46 )
      {
        if ( (int)(cy * v46) <= 16000 && !LOBYTE(v80.cx) )
        {
          v46 = 0;
          v83.VidPnTargetColorBasis = D3DKMDT_CB_INTENSITY;
          v38 |= 0x40u;
          v82 = 0LL;
          cy = 0;
LABEL_35:
          BYTE2(v80.cx) = (*(_BYTE *)(*(_QWORD *)&v83.CopyProtection.OEMCopyProtection[36] + 308LL) & 0x20) != 0;
          goto LABEL_36;
        }
      }
      else
      {
        v46 = 0;
        v82 = 0LL;
        cy = 0;
      }
    }
    else
    {
      v46 = HIDWORD(v82);
      v38 |= 8u;
      cy = v82;
    }
    if ( !cy )
      goto LABEL_35;
LABEL_36:
    LODWORD(v12) = DpiInternal::GetCurrentSourceResolution(
                     *(DpiInternal **)&v83.CopyProtection.OEMCopyProtection[100],
                     *(struct D3DKMDT_HVIDPN__ *const *)&v83.Content,
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v83.CopyProtection.OEMCopyProtection[52],
                     &v83);
    if ( (int)v12 < 0 )
      goto LABEL_92;
    BYTE1(v80.cx) = 0;
    LODWORD(v12) = DpiInternal::GetCurrentTargetResolution(
                     *(DpiInternal **)&v83.CopyProtection.OEMCopyProtection[100],
                     *(struct D3DKMDT_HVIDPN__ *const *)&v83.Content,
                     *(const struct _DXGDMM_VIDPN_INTERFACE **)&v83.CopyProtection.OEMCopyProtection[52],
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v83.VisibleFromActiveTLOffset.cy,
                     (struct _D3DKMDT_2DREGION *)((char *)&v80 + 1));
    if ( (int)v12 < 0 )
      goto LABEL_92;
    cx = v83.VisibleFromActiveBROffset.cx;
    if ( ((v32 - 2) & 0xFFFFFFFD) != 0 )
    {
      v81[0] = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v83.VisibleFromActiveBROffset.cx;
      cx = v83.VisibleFromActiveTLOffset.cy;
    }
    else
    {
      v81[0] = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v83.VisibleFromActiveTLOffset.cy;
      v83.VisibleFromActiveTLOffset.cy = v83.VisibleFromActiveBROffset.cx;
      v83.VisibleFromActiveBROffset.cx = v81[0];
    }
    VidPnSourceId = v83.VidPnSourceId;
    v83.ImportanceOrdinal = cx;
    if ( (v38 & 1) != 0 && APSTriggerBits && v45 )
    {
      VidPnTargetId = v83.VidPnTargetId;
      if ( BYTE1(v80.cx) )
      {
        VidPnTargetId = v83.VidPnTargetId >> 1;
        v83.VidPnTargetId >>= 1;
      }
      if ( v83.VidPnSourceId >= 2 * APSTriggerBits || VidPnTargetId >= 2 * v45 )
        v53 = 2;
      else
        v53 = 0;
      v38 ^= ((unsigned __int8)v38 ^ (unsigned __int8)(v38 | v53)) & 2;
      if ( BYTE1(v80.cx) )
      {
        VidPnTargetId *= 2;
        v83.VidPnTargetId = VidPnTargetId;
      }
    }
    else
    {
      VidPnTargetId = v83.VidPnTargetId;
    }
    memset(&v83.CopyProtection.OEMCopyProtection[140], 0, 0x60uLL);
    v55 = *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[52];
    *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[224] = a5;
    *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[172] = v83.VidPnSourceId;
    v56 = *(_DWORD *)(*(_QWORD *)&v83.CopyProtection.OEMCopyProtection[52] + 12LL);
    *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[176] = VidPnTargetId;
    if ( v56 != 1 )
    {
      switch ( v56 )
      {
        case 2:
          goto LABEL_81;
        case 3:
          break;
        case 4:
LABEL_81:
          v54 = (unsigned int)v81[0];
          if ( v56 == 4 )
          {
            ImportanceOrdinal = v83.ImportanceOrdinal;
            if ( cy * VidPnTargetId <= v46 * v83.VidPnSourceId )
            {
              v83.VidPnSourceId = v83.ImportanceOrdinal;
              v67 = VidPnTargetId * v83.ImportanceOrdinal / VidPnSourceId;
              VidPnSourceId = v83.ImportanceOrdinal;
              VidPnTargetId = v67;
              v83.VidPnTargetId = v67;
            }
            else
            {
              v66 = v83.VidPnSourceId * v81[0] / VidPnTargetId;
              VidPnTargetId = v81[0];
              VidPnSourceId = v66;
              v83.VidPnSourceId = v66;
              v83.VidPnTargetId = v81[0];
            }
          }
          else
          {
            ImportanceOrdinal = v83.ImportanceOrdinal;
          }
          cy = cy * VidPnSourceId / ImportanceOrdinal;
          v46 = v46 * VidPnTargetId / v81[0];
          break;
        default:
          if ( v56 != 5 )
          {
            if ( v56 == 255 )
              break;
            v57 = WdLogNewEntry5_WdAssertion((unsigned int)(v56 - 5));
            *(_QWORD *)(v57 + 24) = *(int *)(v55 + 12);
            WdLogEvent5_WdAssertion(v57);
          }
          v38 |= 0x100u;
          break;
      }
    }
    v58 = (struct tagSIZE)*(unsigned int *)(v55 + 20);
    *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[164] = cy;
    *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[168] = v46;
    if ( (unsigned int)(v58.cx - 5) <= 0xB )
      v58 = (struct tagSIZE)(unsigned int)((v58.cx - 1) % 4 + 1);
    v23 = (((v58.cx - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v38 & 0xFFFFFF7F;
    HIDWORD(v84[5]) = v23;
    if ( !BYTE2(v80.cx)
      && v83.VidPnTargetColorBasis == D3DKMDT_CB_UNINITIALIZED
      && *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[236]
      && HIBYTE(v80.cx) )
    {
      IsAudioAvailableInEdid = DpiInternal::IsAudioAvailableInEdid(
                                 *(DpiInternal **)&v83.CopyProtection.OEMCopyProtection[36],
                                 (void *)v80.cy,
                                 v54,
                                 4LL);
      LODWORD(v79) = v83.CopyProtection.OEMCopyProtection[4];
      v23 = v23 & 0xFFFFFFEF | (16
                              * (unsigned __int8)Win81::DetermineViewDistance(
                                                   *(Win81 **)&v83.CopyProtection.OEMCopyProtection[36],
                                                   &v82,
                                                   (const struct tagSIZE *)*(unsigned int *)&v83.CopyProtection.OEMCopyProtection[16],
                                                   (int)&v83.ContentTransformation.ScalingSupport,
                                                   (const struct tagSIZE *)v79,
                                                   IsAudioAvailableInEdid,
                                                   (unsigned int *)&v83.CopyProtection.OEMCopyProtection[204]));
      v61 = *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[204];
      HIDWORD(v84[5]) = v23;
      if ( !*(_DWORD *)&v83.CopyProtection.OEMCopyProtection[204] )
      {
        v62 = WdLogNewEntry5_WdAssertion(v60);
        *(_QWORD *)(v62 + 24) = 1004LL;
        WdLogEvent5_WdAssertion(v62);
      }
LABEL_69:
      v63 = v80.cx;
      goto LABEL_70;
    }
    v61 = 0;
    *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[204] = 0;
    if ( !BYTE2(v80.cx) )
      goto LABEL_69;
    v63 = v80.cx;
    if ( LOBYTE(v80.cx) )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(Win81 **)&v83.CopyProtection.OEMCopyProtection[172],
        v58,
        (__int64)&v83.CopyProtection.OEMCopyProtection[140],
        (struct _DPI_INFORMATION *)4);
      Win81::FillOverridesAndAdjustedScaleFactor(
        (Win81 *)v83.VidPnTargetColorCoeffDynamicRanges.FirstChannel,
        v68,
        (__int64)&v83.CopyProtection.OEMCopyProtection[140],
        v69);
      v23 |= 0x400u;
      HIDWORD(v84[5]) = v23;
      goto LABEL_71;
    }
LABEL_70:
    Win81::FillDpiInfo(
      (Win81 *)&v83.CopyProtection.OEMCopyProtection[164],
      (const struct tagSIZE *)&v83.CopyProtection.OEMCopyProtection[172],
      (const struct tagSIZE *)v61,
      v83.VidPnTargetColorCoeffDynamicRanges.FirstChannel,
      (unsigned int)v79,
      (__int64)&v83.CopyProtection.OEMCopyProtection[140]);
LABEL_71:
    if ( *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[232] )
    {
      v64 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v64 + 24) = 1021LL;
      WdLogEvent5_WdAssertion(v64);
    }
    *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[232] = v23;
    if ( v63
      || (v23 & 4) == 0
      && (v20 = 2LL,
          (DWORD2(v84[3]) + HIDWORD(v84[3])) / 2 <= (*(_DWORD *)&v83.CopyProtection.OEMCopyProtection[196]
                                                   + *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[200])
                                                  / 2) )
    {
      v84[0] = *(_OWORD *)&v83.CopyProtection.OEMCopyProtection[140];
      *(_OWORD *)&v83.CopyProtection.OEMCopyProtection[244] = *(_OWORD *)&v83.CopyProtection.OEMCopyProtection[156];
      v84[2] = *(_OWORD *)&v83.CopyProtection.OEMCopyProtection[172];
      *(_OWORD *)&v83.GammaRamp.Type = *(_OWORD *)&v83.CopyProtection.OEMCopyProtection[204];
      v84[5] = *(_OWORD *)&v83.CopyProtection.OEMCopyProtection[220];
      v23 = *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[232];
      v84[3] = *(_OWORD *)&v83.CopyProtection.OEMCopyProtection[188];
    }
    if ( v83.CopyProtection.OEMCopyProtection[44] )
      (*(void (__fastcall **)(_QWORD, __int64))&v83.CopyProtection.OEMCopyProtection[60])(
        *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[68],
        v55);
    v7 = *(DXGADAPTER **)&v83.CopyProtection.OEMCopyProtection[36];
    v22 = *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[84] + 1LL;
    LODWORD(v8) = *(_DWORD *)&v83.CopyProtection.OEMCopyProtection[20];
    *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[84] = v22;
    if ( v22 >= *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[28] )
    {
      v12 = (_OWORD *)a6;
      goto LABEL_98;
    }
  }
  v70 = (_QWORD *)WdLogNewEntry5_WdError(v28);
  v70[3] = (unsigned int)v8;
  v70[4] = v80.cy;
  v70[5] = v12;
  WdLogEvent5_WdError(v70);
LABEL_92:
  if ( v83.CopyProtection.OEMCopyProtection[44] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v83.CopyProtection.OEMCopyProtection[60])(
      *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[68],
      *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[52]);
LABEL_105:
  if ( v83.CopyProtection.OEMCopyProtection[92] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v83.CopyProtection.OEMCopyProtection[108])(
      *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[116],
      *(_QWORD *)&v83.CopyProtection.OEMCopyProtection[100]);
  return (unsigned int)v12;
}
