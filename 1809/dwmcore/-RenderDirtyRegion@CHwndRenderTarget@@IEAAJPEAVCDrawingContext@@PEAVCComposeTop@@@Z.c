/*
 * XREFs of ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180018ADC (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180030B48 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180030C68 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180031C88 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x180031CE0 (-GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180031EFC (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180032028 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180045FF0 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180046F68 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18005CB5C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18005FB00 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180064198 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ @ 0x18007A218 (-NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008BF90 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18015AE90 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18015B0CC (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     McTemplateU0qdffff @ 0x18015BA74 (McTemplateU0qdffff.c)
 *     McTemplateU0xqq @ 0x18015BBB4 (McTemplateU0xqq.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18016589C (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180179214 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180179534 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BE164 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDirtyRegion(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  CHwndRenderTarget *v3; // rdi
  struct CDrawingContext *v4; // r15
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // r13d
  int v8; // r12d
  unsigned int v9; // r14d
  bool v10; // cf
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  COcclusionContext *v24; // rcx
  COcclusionContext *v25; // rsi
  __int64 v26; // r14
  COcclusionContext *v27; // r14
  COverlayContext *v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // rax
  bool v35; // al
  unsigned int v36; // r12d
  const __m128i *v37; // rsi
  _DWORD *v38; // r14
  __m128 v39; // xmm0
  float v40; // xmm3_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  CDisplay *v43; // rcx
  char v44; // si
  float v45; // xmm7_4
  float v46; // xmm6_4
  float v47; // xmm5_4
  __m128i *v48; // rax
  float v49; // xmm4_4
  unsigned __int64 v50; // xmm0_8
  float v51; // xmm1_4
  float v52; // xmm5_4
  float v53; // xmm3_4
  __m128 v54; // xmm0
  __m128 v55; // xmm2
  float v56; // xmm1_4
  float v57; // xmm0_4
  char HasVirtualModeScale; // al
  CDisplay *v59; // rcx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // r8d
  __m128 v64; // xmm1
  __m128 v65; // xmm2
  float v66; // xmm0_4
  int v67; // edx
  __m128 v68; // xmm1
  __m128 v69; // xmm2
  float v70; // xmm0_4
  int v71; // ecx
  __m128 v72; // xmm1
  __m128 v73; // xmm2
  float v74; // xmm0_4
  int v75; // eax
  float v76; // xmm0_4
  __int64 v77; // rcx
  int v78; // eax
  COcclusionContext *v80; // rbx
  __int64 v81; // r12
  void *v82; // r13
  __int64 v83; // rcx
  struct COcclusionInfo *OcclusionInfo; // rax
  int CurrentRealizationAsRenderTarget; // eax
  unsigned int v86; // ecx
  int v87; // eax
  int v88; // eax
  int v89; // eax
  float v90; // xmm1_4
  unsigned int v91; // ecx
  __int64 v92; // r8
  int v93; // r9d
  __int64 v94; // rax
  __m128 v95; // rt1
  __m128 v96; // xmm1
  __m128 v97; // rt1
  __m128 v98; // xmm1
  __m128 v99; // rt1
  __m128 v100; // xmm0
  __m128 v101; // rt1
  __m128 v102; // xmm0
  unsigned int v103; // [rsp+28h] [rbp-E0h]
  __int64 v104; // [rsp+38h] [rbp-D0h]
  int v105; // [rsp+48h] [rbp-C0h]
  float v106; // [rsp+48h] [rbp-C0h]
  float v107; // [rsp+48h] [rbp-C0h]
  float v108; // [rsp+48h] [rbp-C0h]
  float v109; // [rsp+48h] [rbp-C0h]
  bool v110[8]; // [rsp+50h] [rbp-B8h] BYREF
  COcclusionContext *v111; // [rsp+58h] [rbp-B0h] BYREF
  COcclusionContext *v112; // [rsp+60h] [rbp-A8h]
  __int64 v113; // [rsp+68h] [rbp-A0h]
  struct IRenderTarget *v114; // [rsp+70h] [rbp-98h] BYREF
  __int64 v115; // [rsp+78h] [rbp-90h]
  struct CComposeTop *v116; // [rsp+80h] [rbp-88h]
  __m128 v117; // [rsp+88h] [rbp-80h] BYREF
  __int128 v118; // [rsp+98h] [rbp-70h] BYREF
  __int128 v119; // [rsp+A8h] [rbp-60h]
  CHwndRenderTarget *v120; // [rsp+B8h] [rbp-50h]
  float v121; // [rsp+C0h] [rbp-48h]
  float v122; // [rsp+C4h] [rbp-44h]
  __int128 v123; // [rsp+C8h] [rbp-40h] BYREF
  char v124; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v125[8]; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v126[8]; // [rsp+168h] [rbp+60h] BYREF

  v3 = this;
  *(_QWORD *)&v119 = a2;
  v4 = a2;
  v120 = this;
  v116 = a3;
  v5 = 0;
  LODWORD(v115) = 0;
  v6 = *((_QWORD *)this + 25);
  v7 = 0;
  v8 = *((_DWORD *)this + 107);
  v113 = 0x7FFFFFFF00000000LL;
  v112 = 0LL;
  v9 = *(_DWORD *)(v6 + 1276);
  v10 = *(_BYTE *)(v6 + 2883) != 0;
  v114 = 0LL;
  v110[0] = *(_BYTE *)(v6 + 2883);
  v110[3] = 0;
  v11 = *((_QWORD *)this + 22);
  v12 = v6 + (v10 ? 2860LL : 1116LL);
  v13 = v8 & 0x10000;
  v105 = v13;
  v110[2] = v13 != 0;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 48LL))(v11, &v118);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v3 + 22) + 496LL))(*((_QWORD *)v3 + 22), 0LL);
  v17 = 1LL;
  if ( v110[0] )
  {
    v126[0] = 0;
    v7 = 1;
    LODWORD(v113) = 1;
    v125[0] = v118;
  }
  else
  {
    v14 = 0LL;
    if ( v9 )
    {
      v18 = *((float *)&v118 + 3);
      v15 = 0LL;
      v19 = *((float *)&v118 + 2);
      v20 = *((float *)&v118 + 1);
      v21 = *(float *)&v118;
      do
      {
        v117 = *(__m128 *)(v15 + v12);
        v16 = v7;
        v125[v7] = v117;
        if ( v21 > *(float *)&v125[v7] )
          *(float *)&v125[v7] = v21;
        if ( v20 > *((float *)&v125[v7] + 1) )
          *((float *)&v125[v7] + 1) = v20;
        v22 = *((float *)&v125[v7] + 2);
        if ( v22 > v19 )
        {
          *((float *)&v125[v7] + 2) = v19;
          v22 = v19;
        }
        v23 = *((float *)&v125[v7] + 3);
        if ( v23 > v18 )
        {
          *((float *)&v125[v7] + 3) = v18;
          v23 = v18;
          v22 = *((float *)&v125[v7] + 2);
        }
        if ( v22 <= *(float *)&v125[v7] || v23 <= *((float *)&v125[v7] + 1) )
        {
          HIDWORD(v125[v7]) = 0;
          DWORD2(v125[v7]) = 0;
          DWORD1(v125[v7]) = 0;
          LODWORD(v125[v7]) = 0;
        }
        else
        {
          v126[v7++] = v14;
        }
        v14 = (unsigned int)(v14 + 1);
        v15 += 16LL;
      }
      while ( (unsigned int)v14 < v9 );
      LODWORD(v113) = v7;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xqq(v15, (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (_DWORD)v4, 0, v7);
    v17 = 1LL;
  }
  if ( !v7 )
  {
LABEL_103:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, v4, v17);
    goto LABEL_105;
  }
  v110[5] = 1;
  if ( !v13 )
    goto LABEL_27;
  v24 = (COcclusionContext *)*((_QWORD *)v4 + 784);
  v112 = v24;
  v111 = v24;
  if ( v24 )
  {
    v25 = v24;
    v111 = (COcclusionContext *)*((_QWORD *)v3 + 15);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Start);
      v25 = (COcclusionContext *)*((_QWORD *)v4 + 784);
    }
    v26 = 0LL;
    if ( *((_DWORD *)v25 + 294) )
    {
      v80 = v111;
      do
      {
        v81 = *((_QWORD *)v25 + 144);
        v82 = *(void **)(v81 + 40 * v26);
        v110[1] = *(_BYTE *)(v81 + 40 * v26 + 16);
        v111 = *(COcclusionContext **)(v81 + 40 * v26 + 8);
        if ( (int)CThreadContext::RegisterGraphWalkRoot(v82) >= 0 )
        {
          if ( v110[1] || !(unsigned __int8)CDrawingContext::IsNodeOccluded(v4, v80, v82, v81 + 40 * v26 + 20) )
            CCachedVisualImage::EnsureRenderTargetBitmapInfo(
              v111,
              *((_QWORD *)v4 + 49),
              *((unsigned int *)v4 + 100),
              &v117);
          CThreadContext::UnregisterGraphWalkRoot();
        }
        v26 = (unsigned int)(v26 + 1);
      }
      while ( (unsigned int)v26 < *((_DWORD *)v25 + 294) );
      v5 = v115;
      v3 = v120;
      v4 = (struct CDrawingContext *)v119;
      v13 = v105;
      v7 = v113;
    }
    *((_DWORD *)v25 + 294) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)v25 + 1152, 40LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Stop);
LABEL_27:
    v27 = v112;
    goto LABEL_28;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xq(0LL, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, v4, 0LL);
  CDrawingContext::CalculateOcclusion(v4, *((struct CVisualTree **)v3 + 15), 0, 0, (__int64)&v111);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xq(v83, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, v4, 0LL);
  v27 = v111;
  v112 = v111;
LABEL_28:
  v28 = (COverlayContext *)*((_QWORD *)v3 + 106);
  if ( v28 )
  {
    v110[4] = 0;
    v110[1] = 0;
    v29 = COverlayContext::ApplyOverlayOrDirectFlipConfiguration(v28, &v110[4], &v110[1]);
    v5 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v28, 0LL, 0, v29, 0x330u);
      goto LABEL_107;
    }
    v17 = 1LL;
    if ( !v110[0] )
    {
      v28 = (COverlayContext *)*((_QWORD *)v3 + 25);
      if ( v110[4] && !*((_BYTE *)v28 + 2883) )
      {
        v126[0] = 0;
        v7 = 1;
        v110[0] = 1;
        v125[0] = v118;
        if ( v13 )
        {
          CDirtyRegion::SetFullDirty(v28);
          CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)(*((_QWORD *)v3 + 24) + 168LL), 0);
          v27 = (COcclusionContext *)*((_QWORD *)v4 + 784);
          v17 = 1LL;
          v112 = v27;
        }
      }
    }
    v30 = *((_QWORD *)v3 + 106);
    v16 = 0LL;
    v31 = *(_QWORD *)(v30 + 13288);
    if ( v31 )
    {
      v16 = *(unsigned int *)(v31 + 68);
      if ( (_DWORD)v16 == 3 && !CDirectFlipInfo::RenderingRealizationChanged(*(CDirectFlipInfo **)(v30 + 13288)) )
        v16 = (unsigned int)v17;
    }
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == (_DWORD)v17 )
      {
        v7 = 0;
        dword_180308094 |= 2u;
      }
      else if ( (int)v16 - 2 <= (unsigned int)v17 )
      {
        OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v31 + 24), *((const struct CVisualTree **)v3 + 15));
        HIDWORD(v113) = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
        CurrentRealizationAsRenderTarget = CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
                                             (CDirectFlipInfo *)v31,
                                             &v114);
        v5 = CurrentRealizationAsRenderTarget;
        if ( CurrentRealizationAsRenderTarget < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, CurrentRealizationAsRenderTarget, 0x372u);
          goto LABEL_107;
        }
        (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v114 + 160LL))(v114);
        v87 = CDrawingContext::PushRenderTarget(v4, v114);
        v5 = v87;
        if ( v87 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v28, 0LL, 0, v87, 0x377u);
          goto LABEL_107;
        }
        v110[5] = 0;
        v110[3] = 1;
      }
    }
    else if ( v110[1] )
    {
      v88 = CDrawingContext::PushRenderTarget(v4, *((struct IRenderTarget **)v3 + 22));
      v5 = v88;
      if ( v88 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v28, 0LL, 0, v88, 0x353u);
        goto LABEL_107;
      }
      v110[3] = 1;
    }
  }
  if ( v27 )
  {
    v32 = *((_QWORD *)v3 + 106);
    if ( !v32 || (v33 = *(_BYTE *)(v32 + 13423) == 0, v34 = 288LL, v33) )
      v34 = 220LL;
    COcclusionContext::SetDeviceTransform(v27, (CHwndRenderTarget *)((char *)v3 + v34));
  }
  else
  {
    v110[2] = 0;
  }
  v35 = v110[0];
  if ( !v110[0] )
    goto LABEL_41;
  if ( !CHwndRenderTarget::NeedsBlackBars(v3) )
  {
LABEL_122:
    v35 = v110[0];
LABEL_41:
    v36 = 0;
    if ( v7 )
    {
      v37 = (const __m128i *)v125;
      v111 = (COcclusionContext *)v125;
      v38 = v126;
      while ( 1 )
      {
        v39 = (__m128)_mm_loadu_si128(v37);
        v117.m128_i32[0] = v39.m128_i32[0];
        LODWORD(v40) = _mm_shuffle_ps(v39, v39, 85).m128_u32[0];
        LODWORD(v41) = _mm_shuffle_ps(v39, v39, 170).m128_u32[0];
        LODWORD(v42) = _mm_shuffle_ps(v39, v39, 255).m128_u32[0];
        *(unsigned __int64 *)((char *)v117.m128_u64 + 4) = __PAIR64__(LODWORD(v41), LODWORD(v40));
        v117.m128_f32[3] = v42;
        if ( !v35 && v110[2] )
        {
          v43 = (CDisplay *)*((_QWORD *)v3 + 21);
          v44 = 0;
          if ( v43 )
          {
            if ( CDisplay::HasVirtualModeScale(v43)
              && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v3 + 224LL))(v3) )
            {
              v94 = *((_QWORD *)v3 + 106);
              if ( v94 )
                v44 = *(_BYTE *)(v94 + 13423) == 0;
            }
          }
          v39 = (__m128)_mm_loadu_si128((const __m128i *)CDirtyRegion::GetUnOccludedDirtyRegion(
                                                           *((_QWORD *)v3 + 25),
                                                           (unsigned int)&v124,
                                                           (_DWORD)v112,
                                                           *((_QWORD *)v3 + 15),
                                                           v44,
                                                           *v38,
                                                           (__int64)&v118));
          v117 = v39;
          v117.m128_i32[0] = v39.m128_i32[0];
          if ( *(float *)&v118 > v39.m128_f32[0] )
          {
            v117.m128_i32[0] = v118;
            v39.m128_i32[0] = v118;
          }
          v40 = v117.m128_f32[1];
          v45 = v117.m128_f32[1];
          if ( *((float *)&v118 + 1) > v117.m128_f32[1] )
          {
            v117.m128_i32[1] = DWORD1(v118);
            v40 = *((float *)&v118 + 1);
            v45 = *((float *)&v118 + 1);
          }
          v41 = v117.m128_f32[2];
          v46 = v117.m128_f32[2];
          if ( v117.m128_f32[2] > *((float *)&v118 + 2) )
          {
            v117.m128_i32[2] = DWORD2(v118);
            v41 = *((float *)&v118 + 2);
            v46 = *((float *)&v118 + 2);
          }
          v42 = v117.m128_f32[3];
          v47 = v117.m128_f32[3];
          if ( v117.m128_f32[3] > *((float *)&v118 + 3) )
          {
            v117.m128_i32[3] = HIDWORD(v118);
            v42 = *((float *)&v118 + 3);
            v47 = *((float *)&v118 + 3);
          }
          if ( v46 <= v39.m128_f32[0] || v47 <= v45 )
          {
            v42 = 0.0;
            v41 = 0.0;
            v40 = 0.0;
            v39.m128_i32[0] = 0;
            v117 = 0uLL;
          }
          v37 = (const __m128i *)v111;
        }
        if ( v41 > v39.m128_f32[0] && v42 > v40 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
          {
            McTemplateU0qdffff(
              (_DWORD)v28,
              (unsigned int)&EVTDESC_ETWGUID_DIRTYREGIONEVENT,
              *v38,
              v17,
              v39.m128_i8[0],
              SLOBYTE(v40),
              SLOBYTE(v41),
              SLOBYTE(v42));
            v42 = v117.m128_f32[3];
            v41 = v117.m128_f32[2];
            v40 = v117.m128_f32[1];
            v39.m128_i32[0] = v117.m128_i32[0];
          }
          dword_1803080A8 += (int)(float)((float)(v41 - v39.m128_f32[0]) * (float)(v42 - v40));
          if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v3 + 224LL))(v3)
            || *(_BYTE *)(*((_QWORD *)v3 + 2) + 1257LL) )
          {
            v48 = (__m128i *)(*((_QWORD *)v3 + 21) + 120LL);
          }
          else
          {
            v48 = (__m128i *)((char *)v3 + 468);
          }
          v49 = v117.m128_f32[0];
          v50 = _mm_srli_si128(*v48, 8).m128i_u64[0];
          v51 = (float)(int)v48->m128i_i64[0];
          v52 = (float)SHIDWORD(v50);
          v53 = (float)(int)v50;
          v54 = (__m128)COERCE_UNSIGNED_INT((float)(int)HIDWORD(v48->m128i_i64[0]));
          if ( v51 > v117.m128_f32[0] )
          {
            v117.m128_f32[0] = (float)(int)v48->m128i_i64[0];
            v49 = v51;
          }
          v55 = (__m128)v117.m128_u32[1];
          if ( v54.m128_f32[0] > v117.m128_f32[1] )
          {
            v117.m128_i32[1] = v54.m128_i32[0];
            v55 = v54;
          }
          v56 = v117.m128_f32[2];
          if ( v117.m128_f32[2] > v53 )
          {
            v117.m128_f32[2] = v53;
            v56 = v53;
          }
          v57 = v117.m128_f32[3];
          if ( v117.m128_f32[3] > v52 )
          {
            v117.m128_f32[3] = v52;
            v57 = v52;
          }
          if ( v56 <= v49 || v57 <= v55.m128_f32[0] )
            v117 = 0uLL;
          HasVirtualModeScale = *((_BYTE *)v3 + 160);
          if ( !HasVirtualModeScale )
          {
            v59 = (CDisplay *)*((_QWORD *)v3 + 21);
            if ( v59 )
              HasVirtualModeScale = CDisplay::HasVirtualModeScale(v59);
          }
          v60 = CHwndRenderTarget::DrawVisualTree(
                  (__int64)v3,
                  v4,
                  (__int64)&v117,
                  SHIDWORD(v113),
                  HasVirtualModeScale,
                  v110[2],
                  v104,
                  v110[5]);
          v5 = v60;
          if ( v60 < 0 )
          {
            v103 = 994;
            goto LABEL_158;
          }
          v61 = *((_QWORD *)v3 + 106);
          if ( !v61 || (v33 = *(_BYTE *)(v61 + 13423) == 0, v62 = 288LL, v33) )
            v62 = 220LL;
          CMILMatrix::Transform2DBoundsHelper<0>((CHwndRenderTarget *)((char *)v3 + v62));
          if ( ((unsigned int)v120 & 0x7FFFFFFF) > 0x497FFFF0 )
          {
            v55.m128_f32[0] = (float)(int)*(float *)&v120 - *(float *)&v120;
            v95.m128_f32[0] = FLOAT_N0_5;
            v63 = (int)*(float *)&v120 - _mm_cmple_ss(v55, v95).m128_u32[0];
          }
          else
          {
            v106 = *(float *)&v120 + 6291456.25;
            v63 = (int)(LODWORD(v106) << 10) >> 11;
          }
          v64 = (__m128)(unsigned int)v120;
          v64.m128_f32[0] = *(float *)&v120 - (float)v63;
          v65 = _mm_and_ps((__m128)_mm_cvtps_pd(v64), (__m128)_xmm);
          v66 = *(double *)v65.m128_u64;
          if ( v66 > 0.00390625 )
          {
            v96.m128_f32[0] = (float)(int)*(float *)&v120;
            v63 = (int)*(float *)&v120 + _mm_cmplt_ss((__m128)(unsigned int)v120, v96).m128_u32[0];
          }
          if ( (HIDWORD(v120) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v65.m128_f32[0] = (float)(int)*((float *)&v120 + 1) - *((float *)&v120 + 1);
            v97.m128_f32[0] = FLOAT_N0_5;
            v67 = (int)*((float *)&v120 + 1) - _mm_cmple_ss(v65, v97).m128_u32[0];
          }
          else
          {
            v107 = *((float *)&v120 + 1) + 6291456.25;
            v67 = (int)(LODWORD(v107) << 10) >> 11;
          }
          v68 = (__m128)HIDWORD(v120);
          v68.m128_f32[0] = *((float *)&v120 + 1) - (float)v67;
          v69 = _mm_and_ps((__m128)_mm_cvtps_pd(v68), (__m128)_xmm);
          v70 = *(double *)v69.m128_u64;
          if ( v70 > 0.00390625 )
          {
            v98.m128_f32[0] = (float)(int)*((float *)&v120 + 1);
            v67 = (int)*((float *)&v120 + 1) + _mm_cmplt_ss((__m128)HIDWORD(v120), v98).m128_u32[0];
          }
          if ( (LODWORD(v121) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v69.m128_f32[0] = (float)(int)v121 - v121;
            v99.m128_f32[0] = FLOAT_N0_5;
            v71 = (int)v121 - _mm_cmple_ss(v69, v99).m128_u32[0];
          }
          else
          {
            v108 = v121 + 6291456.25;
            v71 = (int)(LODWORD(v108) << 10) >> 11;
          }
          v72 = (__m128)LODWORD(v121);
          v72.m128_f32[0] = v121 - (float)v71;
          v73 = _mm_and_ps((__m128)_mm_cvtps_pd(v72), (__m128)_xmm);
          v74 = *(double *)v73.m128_u64;
          if ( v74 > 0.00390625 )
          {
            v100 = 0LL;
            v100.m128_f32[0] = (float)(int)v121;
            v71 = (int)v121 - _mm_cmplt_ss(v100, (__m128)LODWORD(v121)).m128_u32[0];
          }
          if ( (LODWORD(v122) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v73.m128_f32[0] = (float)(int)v122 - v122;
            v101.m128_f32[0] = FLOAT_N0_5;
            v75 = (int)v122 - _mm_cmple_ss(v73, v101).m128_u32[0];
          }
          else
          {
            v109 = v122 + 6291456.25;
            v75 = (int)(LODWORD(v109) << 10) >> 11;
          }
          v76 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v122 - (float)v75)) & _xmm);
          if ( v76 > 0.00390625 )
          {
            v102 = (__m128)LODWORD(v122);
            v102.m128_f32[0] = (float)(int)v122;
            v75 = (int)v122 - _mm_cmplt_ss(v102, (__m128)LODWORD(v122)).m128_u32[0];
          }
          *((_QWORD *)&v119 + 1) = __PAIR64__(v75, v71);
          v77 = *((_QWORD *)v3 + 22);
          *(_QWORD *)&v119 = __PAIR64__(v67, v63);
          v123 = v119;
          v78 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v77 + 168LL))(v77, &v123);
          v5 = v78;
          if ( v78 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v28, 0LL, 0, v78, 0x96Eu);
          else
            *((_BYTE *)v3 + 858) = 1;
          if ( v5 < 0 )
          {
            v103 = 998;
            v93 = v5;
            goto LABEL_160;
          }
          if ( v116 )
          {
            v60 = CComposeTop::SubtractOverdraw(v116, &v117);
            v5 = v60;
            if ( v60 < 0 )
            {
              v103 = 1004;
              goto LABEL_158;
            }
          }
        }
        ++v37;
        ++v36;
        v111 = (COcclusionContext *)v37;
        ++v38;
        if ( v36 >= v7 )
          goto LABEL_103;
        v35 = v110[0];
      }
    }
    goto LABEL_103;
  }
  v89 = *((_DWORD *)v3 + 22);
  v117.m128_u64[0] = 0LL;
  v90 = (float)*((int *)v3 + 23);
  v117.m128_f32[2] = (float)v89;
  v117.m128_f32[3] = v90;
  v60 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v4, 0, (unsigned int)&v117, 1, 1);
  v5 = v60;
  if ( v60 < 0 )
  {
    v103 = 926;
    goto LABEL_158;
  }
  v5 = CDrawingContext::Clear(v4, &stru_1802BC240);
  CDrawingContext::PopGpuClipRectInternal(v4, 0);
  if ( v5 >= 0 )
  {
    LOBYTE(v92) = 1;
    v60 = CHwndRenderTarget::NotifyRenderedRect(v3, 0LL, v92);
    v5 = v60;
    if ( v60 >= 0 )
      goto LABEL_122;
    v103 = 938;
LABEL_158:
    v93 = v60;
LABEL_160:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v28, 0LL, 0, v93, v103);
    goto LABEL_105;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, v5, 0x3A6u);
LABEL_105:
  if ( v110[3] )
    CDrawingContext::PopRenderTargetInternal(v4, 0);
LABEL_107:
  if ( v114 )
    (*(void (__fastcall **)(struct IRenderTarget *, __int64, __int64, __int64))(*(_QWORD *)v114 + 16LL))(
      v114,
      v14,
      v16,
      v17);
  return (unsigned int)v5;
}
