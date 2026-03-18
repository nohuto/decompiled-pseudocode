/*
 * XREFs of ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180049B50
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180048830 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18004281C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180049A44 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x18004ABC0 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x18004B230 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18004BBA0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180057308 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180068030 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18007AD30 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180086C40 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180086D88 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A1C50 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A2930 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800B09FC (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800B908C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ @ 0x1800D7FD0 (-NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 *     McTemplateU0xq @ 0x18015ED28 (McTemplateU0xq.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18016FC08 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18016FD90 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180170084 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180172228 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1801785B4 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     McTemplateU0qdffff @ 0x180178754 (McTemplateU0qdffff.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180194834 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180194BF4 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801A9270 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     McTemplateU0xqq @ 0x1801A9D58 (McTemplateU0xqq.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FFAB8 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDirtyRegion(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  __int64 v3; // rax
  int v4; // r15d
  __int64 v5; // rbx
  bool v6; // zf
  unsigned int v7; // edi
  CHwndRenderTarget *v8; // r12
  __int64 v9; // rbx
  __int64 *v10; // rcx
  COcclusionContext *v11; // rsi
  int v12; // r14d
  __int64 v13; // r13
  int v14; // r14d
  __int64 v15; // rax
  void (__fastcall *v16)(__int64 *, __m128 *); // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _OWORD *m128_f32; // rcx
  __int64 v21; // r8
  int v22; // r9d
  CDrawingContext *v23; // rdi
  COcclusionContext *v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rsi
  void *v27; // r15
  char v28; // r12
  __int64 v29; // r13
  COverlayContext *v30; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  CDirtyRegion *v33; // rcx
  unsigned int v34; // r14d
  int v35; // ebx
  CDirectFlipInfo *v36; // rcx
  CVisual **v37; // rbx
  struct COcclusionInfo *OcclusionInfo; // rax
  int CurrentRealizationAsRenderTarget; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // rcx
  unsigned int v44; // ebx
  int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rax
  char v49; // r13
  BOOL v50; // ecx
  int v51; // eax
  float v52; // xmm1_4
  int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  __int64 v56; // r8
  int v57; // eax
  unsigned int v58; // ecx
  __int64 v59; // rsi
  __m128 v60; // xmm1
  float v61; // xmm3_4
  float v62; // xmm0_4
  __m128 v63; // xmm2
  CDisplay *v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rsi
  __int32 v69; // xmm7_4
  __int32 v70; // xmm6_4
  __int64 v71; // rcx
  _QWORD *v72; // r13
  _QWORD *v73; // r14
  COcclusionContext *v74; // r15
  _QWORD *v75; // rdi
  CVisual *v76; // rcx
  struct _LIST_ENTRY *v77; // rbx
  _DWORD *v78; // rcx
  __int64 v79; // rax
  unsigned int v80; // ebx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __m128 v83; // xmm0
  float v84; // xmm1_4
  __int64 v85; // r8
  __int64 v86; // r9
  __m128i *v87; // rax
  __int64 v88; // rcx
  unsigned __int64 v89; // xmm1_8
  char HasVirtualModeScale; // al
  CDisplay *v91; // rcx
  int v92; // eax
  unsigned int v93; // ecx
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // r8d
  __m128 v97; // xmm1
  __m128 v98; // xmm1
  __m128 v99; // xmm2
  float v100; // xmm0_4
  __m128 v101; // xmm1
  int v102; // edx
  __m128 v103; // xmm1
  __m128 v104; // xmm1
  __m128 v105; // xmm2
  float v106; // xmm0_4
  __m128 v107; // xmm1
  int v108; // ecx
  __m128 v109; // xmm1
  __m128 v110; // xmm1
  __m128 v111; // xmm2
  float v112; // xmm0_4
  __m128 v113; // xmm0
  int v114; // eax
  __m128 v115; // xmm1
  float v116; // xmm0_4
  __m128 v117; // xmm0
  __int64 v118; // rcx
  int v119; // eax
  unsigned int v120; // ecx
  int v121; // eax
  unsigned int v122; // ecx
  __int64 v124; // [rsp+38h] [rbp-D0h]
  bool v125[4]; // [rsp+48h] [rbp-C0h] BYREF
  bool v126[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v127; // [rsp+50h] [rbp-B8h]
  int v128; // [rsp+54h] [rbp-B4h]
  int v129; // [rsp+58h] [rbp-B0h]
  float v130; // [rsp+60h] [rbp-A8h]
  float v131; // [rsp+68h] [rbp-A0h]
  CDrawingContext *v132[3]; // [rsp+70h] [rbp-98h]
  COcclusionContext *v133; // [rsp+88h] [rbp-80h] BYREF
  int v134; // [rsp+90h] [rbp-78h]
  struct IRenderTarget *v135; // [rsp+98h] [rbp-70h] BYREF
  __int64 v136; // [rsp+A0h] [rbp-68h]
  CHwndRenderTarget *v137; // [rsp+A8h] [rbp-60h]
  unsigned __int32 v138; // [rsp+B0h] [rbp-58h]
  unsigned __int32 v139; // [rsp+B4h] [rbp-54h]
  unsigned __int32 v140; // [rsp+B8h] [rbp-50h]
  unsigned __int32 v141; // [rsp+BCh] [rbp-4Ch]
  __m128 v142; // [rsp+C0h] [rbp-48h] BYREF
  struct CComposeTop *v143; // [rsp+D0h] [rbp-38h]
  __int64 v144; // [rsp+D8h] [rbp-30h] BYREF
  __int32 v145; // [rsp+E0h] [rbp-28h] BYREF
  __int32 v146; // [rsp+E4h] [rbp-24h]
  float v147; // [rsp+E8h] [rbp-20h]
  unsigned __int32 v148; // [rsp+ECh] [rbp-1Ch]
  __m128 v149; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v150; // [rsp+100h] [rbp-8h] BYREF
  __m128 v151; // [rsp+110h] [rbp+8h] BYREF
  __int64 v152; // [rsp+120h] [rbp+18h] BYREF
  float v153; // [rsp+128h] [rbp+20h]
  float v154; // [rsp+12Ch] [rbp+24h]
  float v155[4]; // [rsp+130h] [rbp+28h] BYREF
  float v156; // [rsp+140h] [rbp+38h]
  float v157; // [rsp+144h] [rbp+3Ch]
  float v158; // [rsp+148h] [rbp+40h]
  float v159; // [rsp+14Ch] [rbp+44h]
  __int128 v160; // [rsp+158h] [rbp+50h]
  __int128 v161; // [rsp+168h] [rbp+60h] BYREF
  _DWORD v162[8]; // [rsp+178h] [rbp+70h]
  __m128 v163[8]; // [rsp+198h] [rbp+90h] BYREF

  v3 = *((_QWORD *)this + 25);
  v4 = 0;
  v5 = 2860LL;
  v6 = *(_BYTE *)(v3 + 2883) == 0;
  v7 = *(_DWORD *)(v3 + 1276);
  v8 = this;
  v137 = this;
  if ( v6 )
    v5 = 1116LL;
  v9 = v3 + v5;
  v10 = (__int64 *)*((_QWORD *)this + 22);
  v11 = 0LL;
  v12 = *((_DWORD *)v8 + 107);
  v13 = 0LL;
  v135 = 0LL;
  v14 = v12 & 0x10000;
  v125[0] = *(_BYTE *)(v3 + 2883);
  v125[1] = v14 != 0;
  v15 = *v10;
  v132[2] = a2;
  v143 = a3;
  v128 = 0;
  v16 = *(void (__fastcall **)(__int64 *, __m128 *))(v15 + 48);
  v127 = 0;
  v133 = 0LL;
  v125[2] = 0;
  v129 = v14;
  v134 = 0x7FFFFFFF;
  v16(v10, &v151);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v8 + 22) + 504LL))(*((_QWORD *)v8 + 22), 0LL);
  if ( v125[0] )
  {
    LODWORD(v13) = 1;
    v127 = 1;
    v162[0] = 0;
    v163[0] = v151;
  }
  else
  {
    v19 = 0LL;
    if ( v7 )
    {
      v18 = 0LL;
      do
      {
        m128_f32 = (_OWORD *)v163[(unsigned int)v13].m128_f32;
        v150 = *(_OWORD *)(v18 + v9);
        *m128_f32 = v150;
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                                m128_f32,
                                &v151,
                                v18,
                                v19) )
        {
          v162[v13] = v22;
          v13 = (unsigned int)(v13 + 1);
        }
        v19 = (unsigned int)(v22 + 1);
        v18 = v21 + 16;
      }
      while ( (unsigned int)v19 < v7 );
      v127 = v13;
    }
  }
  v23 = v132[2];
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(v17, (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, v132[2], 0, v13);
  if ( !(_DWORD)v13 )
    goto LABEL_173;
  v126[1] = 1;
  if ( v14 )
  {
    v11 = (COcclusionContext *)*((_QWORD *)v132[2] + 784);
    v133 = v11;
    if ( v11 )
    {
      v24 = v11;
      v136 = *((_QWORD *)v8 + 15);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Start);
        v24 = (COcclusionContext *)*((_QWORD *)v132[2] + 784);
      }
      v25 = 0LL;
      if ( *((_DWORD *)v24 + 296) )
      {
        while ( 1 )
        {
          v26 = *((_QWORD *)v24 + 145);
          v27 = *(void **)(v26 + 40 * v25);
          v28 = *(_BYTE *)(v26 + 40 * v25 + 16);
          v29 = *(_QWORD *)(v26 + 40 * v25 + 8);
          if ( (int)CThreadContext::RegisterGraphWalkRoot(v27) < 0 )
          {
            v23 = v132[2];
            goto LABEL_27;
          }
          if ( v28 )
            break;
          v23 = v132[2];
          if ( !(unsigned __int8)CDrawingContext::IsNodeOccluded(v132[2], v136, v27, v26 + 40 * v25 + 20) )
            goto LABEL_24;
LABEL_25:
          CThreadContext::UnregisterGraphWalkRoot();
LABEL_27:
          v25 = (unsigned int)(v25 + 1);
          if ( (unsigned int)v25 >= *((_DWORD *)v24 + 296) )
          {
            v11 = v133;
            v4 = v128;
            v8 = v137;
            goto LABEL_29;
          }
        }
        v23 = v132[2];
LABEL_24:
        CCachedVisualImage::EnsureRenderTargetBitmapInfo(v29, *((_QWORD *)v23 + 49), *((_DWORD *)v23 + 100), &v144);
        goto LABEL_25;
      }
LABEL_29:
      *((_DWORD *)v24 + 296) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)v24 + 1160, 40LL);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Stop);
      v14 = v129;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xq(v17, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, v132[2], 0LL);
      CDrawingContext::CalculateOcclusion(v132[2], *((struct CVisualTree **)v8 + 15), 0, 0, (__int64)&v133);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xq(v43, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, v132[2], 0LL);
      v11 = v133;
    }
  }
  v30 = (COverlayContext *)*((_QWORD *)v8 + 106);
  if ( v30 )
  {
    v125[3] = 0;
    v126[0] = 0;
    v31 = COverlayContext::ApplyOverlayOrDirectFlipConfiguration(v30, &v125[3], v126);
    v128 = v31;
    v4 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x335u, 0LL);
      goto LABEL_177;
    }
    if ( !v125[0] )
    {
      v33 = (CDirtyRegion *)*((_QWORD *)v8 + 25);
      if ( !*((_BYTE *)v33 + 2883) && v125[3] )
      {
        v125[0] = 1;
        v127 = 1;
        v162[0] = 0;
        v163[0] = v151;
        if ( v14 )
        {
          CDirtyRegion::SetFullDirty(v33);
          CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)(*((_QWORD *)v8 + 24) + 168LL), 0);
          v11 = (COcclusionContext *)*((_QWORD *)v23 + 784);
          v133 = v11;
        }
      }
    }
    v34 = 0;
    v35 = 0;
    v36 = *(CDirectFlipInfo **)(*((_QWORD *)v8 + 106) + 13304LL);
    if ( v36 )
    {
      v35 = *((_DWORD *)v36 + 17);
      if ( v35 == 4 && !CDirectFlipInfo::RenderingRealizationChanged(v36) )
        v35 = 2;
    }
    if ( v35 )
    {
      if ( v35 != 1 )
      {
        if ( v35 == 2 )
        {
          dword_18033C774 |= 2u;
          v44 = 0;
          v127 = 0;
          goto LABEL_67;
        }
        if ( (unsigned int)(v35 - 3) <= 1 )
        {
          v37 = *(CVisual ***)(*((_QWORD *)v8 + 106) + 13304LL);
          OcclusionInfo = CVisual::GetOcclusionInfo(v37[3], *((const struct CVisualTree **)v8 + 15));
          v134 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
          CurrentRealizationAsRenderTarget = CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
                                               (CDirectFlipInfo *)v37,
                                               &v135);
          v4 = CurrentRealizationAsRenderTarget;
          if ( CurrentRealizationAsRenderTarget < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, CurrentRealizationAsRenderTarget, 0x382u, 0LL);
            goto LABEL_177;
          }
          (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v135 + 160LL))(v135);
          v41 = CDrawingContext::PushRenderTarget(v23, v135);
          v128 = v41;
          v4 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x387u, 0LL);
            goto LABEL_177;
          }
          v125[2] = 1;
          v126[1] = 0;
        }
        goto LABEL_66;
      }
      if ( !CDirectFlipInfo::RenderingRealizationChanged(*(CDirectFlipInfo **)(*((_QWORD *)v8 + 106) + 13304LL)) )
      {
        v44 = 0;
        v127 = 0;
        goto LABEL_67;
      }
    }
    if ( v126[0] )
    {
      v45 = CDrawingContext::PushRenderTarget(v23, *((struct IRenderTarget **)v8 + 22));
      v128 = v45;
      v4 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x363u, 0LL);
        goto LABEL_177;
      }
      v125[2] = 1;
    }
  }
  else
  {
    v34 = 0;
  }
LABEL_66:
  v44 = v127;
LABEL_67:
  if ( v11 )
  {
    v47 = *((_QWORD *)v8 + 106);
    if ( !v47 || (v6 = *(_BYTE *)(v47 + 13439) == 0, v48 = 288LL, v6) )
      v48 = 220LL;
    COcclusionContext::SetDeviceTransform(v11, (CHwndRenderTarget *)((char *)v8 + v48));
    v49 = v125[1];
  }
  else
  {
    v49 = 0;
    v125[1] = 0;
  }
  v50 = v125[0];
  if ( !v125[0] )
  {
LABEL_82:
    v129 = 0;
    if ( v44 )
    {
      v59 = 0LL;
      v136 = 0LL;
      while ( 1 )
      {
        v60 = v163[v59];
        v145 = v60.m128_i32[0];
        LODWORD(v61) = _mm_shuffle_ps(v60, v60, 85).m128_u32[0];
        LODWORD(v62) = _mm_shuffle_ps(v60, v60, 170).m128_u32[0];
        v63 = _mm_shuffle_ps(v60, v60, 255);
        *(float *)&v146 = v61;
        v147 = v62;
        v148 = v63.m128_i32[0];
        if ( !v50 )
        {
          if ( v49 )
            break;
        }
LABEL_125:
        if ( v62 <= v60.m128_f32[0] || v63.m128_f32[0] <= v61 )
        {
          v23 = v132[2];
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
          {
            McTemplateU0qdffff(
              v50,
              (unsigned int)&EVTDESC_ETWGUID_DIRTYREGIONEVENT,
              v162[v59],
              v19,
              v60.m128_i8[0],
              SLOBYTE(v61),
              SLOBYTE(v62),
              v63.m128_i8[0]);
            v63 = (__m128)v148;
            v62 = v147;
            v61 = *(float *)&v146;
            v60.m128_i32[0] = v145;
          }
          dword_18033C788 += (int)(float)((float)(v62 - v60.m128_f32[0]) * (float)(v63.m128_f32[0] - v61));
          if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v8 + 248LL))(v8)
            || *(_BYTE *)(*((_QWORD *)v8 + 2) + 1274LL) )
          {
            v87 = (__m128i *)(*((_QWORD *)v8 + 21) + 120LL);
          }
          else
          {
            v87 = (__m128i *)((char *)v8 + 468);
          }
          v88 = v87->m128i_i64[0];
          v89 = _mm_srli_si128(*v87, 8).m128i_u64[0];
          v155[0] = (float)(int)v87->m128i_i64[0];
          v155[2] = (float)(int)v89;
          v155[1] = (float)SHIDWORD(v88);
          v155[3] = (float)SHIDWORD(v89);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v145, v155, v85, v86);
          HasVirtualModeScale = *((_BYTE *)v8 + 160);
          if ( !HasVirtualModeScale )
          {
            v91 = (CDisplay *)*((_QWORD *)v8 + 21);
            if ( v91 )
              HasVirtualModeScale = CDisplay::HasVirtualModeScale(v91);
          }
          v23 = v132[2];
          v92 = CHwndRenderTarget::DrawVisualTree(
                  (__int64)v8,
                  v132[2],
                  (__int64)&v145,
                  v134,
                  HasVirtualModeScale,
                  v49,
                  v124,
                  v126[1]);
          v4 = v92;
          if ( v92 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0x3F2u, 0LL);
            goto LABEL_175;
          }
          v94 = *((_QWORD *)v8 + 106);
          if ( !v94 || (v6 = *(_BYTE *)(v94 + 13439) == 0, v95 = 288LL, v6) )
            v95 = 220LL;
          CMILMatrix::Transform2DBoundsHelper<0>((CHwndRenderTarget *)((char *)v8 + v95));
          v130 = v156;
          if ( (LODWORD(v156) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v97.m128_f32[0] = -0.5;
            v63.m128_f32[0] = (float)(int)v156 - v156;
            v138 = _mm_cmple_ss(v63, v97).m128_u32[0];
            v96 = (int)v156 - v138;
          }
          else
          {
            v130 = v156 + 6291456.25;
            v96 = (int)(LODWORD(v130) << 10) >> 11;
          }
          v98 = (__m128)LODWORD(v156);
          v98.m128_f32[0] = v156 - (float)v96;
          v99 = _mm_and_ps((__m128)_mm_cvtps_pd(v98), (__m128)(unsigned __int64)_xmm);
          v100 = *(double *)v99.m128_u64;
          if ( v100 > 0.00390625 )
          {
            v101.m128_f32[0] = (float)(int)v156;
            LODWORD(v132[0]) = _mm_cmplt_ss((__m128)LODWORD(v156), v101).m128_u32[0];
            v96 = (int)v156 + LODWORD(v132[0]);
          }
          *(float *)v132 = v157;
          if ( (LODWORD(v157) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v103.m128_f32[0] = -0.5;
            v99.m128_f32[0] = (float)(int)v157 - v157;
            v139 = _mm_cmple_ss(v99, v103).m128_u32[0];
            v102 = (int)v157 - v139;
          }
          else
          {
            *(float *)v132 = v157 + 6291456.25;
            v102 = (int)(LODWORD(v132[0]) << 10) >> 11;
          }
          v104 = (__m128)LODWORD(v157);
          v104.m128_f32[0] = v157 - (float)v102;
          v105 = _mm_and_ps((__m128)_mm_cvtps_pd(v104), (__m128)(unsigned __int64)_xmm);
          v106 = *(double *)v105.m128_u64;
          if ( v106 > 0.00390625 )
          {
            v107.m128_f32[0] = (float)(int)v157;
            LODWORD(v131) = _mm_cmplt_ss((__m128)LODWORD(v157), v107).m128_u32[0];
            v102 = (int)v157 + LODWORD(v131);
          }
          v131 = v158;
          if ( (LODWORD(v158) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v109.m128_f32[0] = -0.5;
            v105.m128_f32[0] = (float)(int)v158 - v158;
            v140 = _mm_cmple_ss(v105, v109).m128_u32[0];
            v108 = (int)v158 - v140;
          }
          else
          {
            v131 = v158 + 6291456.25;
            v108 = (int)(LODWORD(v131) << 10) >> 11;
          }
          v110 = (__m128)LODWORD(v158);
          v110.m128_f32[0] = v158 - (float)v108;
          v111 = _mm_and_ps((__m128)_mm_cvtps_pd(v110), (__m128)(unsigned __int64)_xmm);
          v112 = *(double *)v111.m128_u64;
          if ( v112 > 0.00390625 )
          {
            v113 = 0LL;
            v113.m128_f32[0] = (float)(int)v158;
            LODWORD(v132[1]) = _mm_cmplt_ss(v113, (__m128)LODWORD(v158)).m128_u32[0];
            v108 = (int)v158 - LODWORD(v132[1]);
          }
          *(float *)&v132[1] = v159;
          if ( (LODWORD(v159) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v115.m128_f32[0] = -0.5;
            v111.m128_f32[0] = (float)(int)v159 - v159;
            v141 = _mm_cmple_ss(v111, v115).m128_u32[0];
            v114 = (int)v159 - v141;
          }
          else
          {
            *(float *)&v132[1] = v159 + 6291456.25;
            v114 = (int)(LODWORD(v132[1]) << 10) >> 11;
          }
          v116 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v159 - (float)v114)) & _xmm);
          if ( v116 > 0.00390625 )
          {
            v117 = (__m128)LODWORD(v159);
            v117.m128_f32[0] = (float)(int)v159;
            LODWORD(v137) = _mm_cmplt_ss(v117, (__m128)LODWORD(v159)).m128_u32[0];
            v114 = (int)v159 - (_DWORD)v137;
          }
          *((_QWORD *)&v160 + 1) = __PAIR64__(v114, v108);
          v118 = *((_QWORD *)v8 + 22);
          *(_QWORD *)&v160 = __PAIR64__(v102, v96);
          v161 = v160;
          v119 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v118 + 168LL))(v118, &v161);
          v128 = v119;
          v4 = v119;
          if ( v119 >= 0 )
            *((_BYTE *)v8 + 858) = 1;
          else
            MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, v119, 0x961u, 0LL);
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, v4, 0x3F6u, 0LL);
            goto LABEL_175;
          }
          if ( v143 )
          {
            v121 = CComposeTop::SubtractOverdraw(v143, &v145);
            v128 = v121;
            v4 = v121;
            if ( v121 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v122, 0LL, 0, v121, 0x3FCu, 0LL);
              goto LABEL_175;
            }
          }
        }
        ++v34;
        ++v59;
        v129 = v34;
        v136 = v59;
        if ( v34 >= v44 )
          goto LABEL_173;
        v50 = v125[0];
      }
      v64 = (CDisplay *)*((_QWORD *)v8 + 21);
      LOBYTE(v23) = 0;
      v65 = *((_QWORD *)v8 + 25);
      v130 = *(float *)&v23;
      if ( v64 )
      {
        if ( CDisplay::HasVirtualModeScale(v64)
          && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v8 + 248LL))(v8) )
        {
          v66 = *((_QWORD *)v8 + 106);
          if ( v66 )
          {
            LOBYTE(v23) = *(_BYTE *)(v66 + 13439) == 0;
            LODWORD(v130) = (unsigned __int8)v23;
          }
        }
      }
      v67 = (unsigned int)v162[v59];
      v68 = *((_QWORD *)v8 + 15);
      if ( *(_BYTE *)(v65 + 2883) )
      {
        v149 = *(__m128 *)(v65 + 2860);
        v69 = v149.m128_i32[0];
        v70 = _mm_shuffle_ps(v149, v149, 170).m128_u32[0];
LABEL_124:
        v146 = v149.m128_i32[1];
        v148 = v149.m128_u32[3];
        v145 = v69;
        v147 = *(float *)&v70;
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v145, &v151, v18, v19);
        v63 = (__m128)v148;
        v62 = v147;
        v61 = *(float *)&v146;
        v60.m128_i32[0] = v145;
        v44 = v127;
        v59 = v136;
        goto LABEL_125;
      }
      v70 = 0;
      v149.m128_i32[3] = 0;
      v69 = 0;
      v149.m128_i32[1] = 0;
      if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 1276) )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v64, 0LL, 0, -2147024809, 0x37Au, 0LL);
        goto LABEL_124;
      }
      _mm_lfence();
      v71 = 16LL * *(unsigned int *)(v65 + 4 * v67 + 1244);
      v72 = (_QWORD *)(v71 + v65 + 280);
      v73 = (_QWORD *)*v72;
      v149 = *(__m128 *)(v71 + v65 + 152);
      if ( v73 == v72 )
      {
LABEL_118:
        v70 = v149.m128_i32[2];
        v69 = v149.m128_i32[0];
        if ( v149.m128_f32[2] > v149.m128_f32[0] && v149.m128_f32[3] > v149.m128_f32[1] )
        {
          if ( (_BYTE)v23 )
            InflateRectF_InPlace(&v149);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v149, &v151, v18, v19);
          v70 = v149.m128_i32[2];
          v69 = v149.m128_i32[0];
        }
        v34 = v129;
        v49 = v125[1];
        goto LABEL_124;
      }
      v74 = v133;
      while ( 1 )
      {
        v75 = v73;
        v76 = (CVisual *)v73[2];
        v73 = (_QWORD *)*v73;
        if ( *(_BYTE *)(v68 + 32) )
        {
          v77 = (struct _LIST_ENTRY *)((char *)v76 + 328);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(v76);
          if ( !TreeDataListHead || (Flink = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
          {
LABEL_107:
            v80 = 0;
            goto LABEL_108;
          }
          while ( 1 )
          {
            v77 = Flink - 14;
            if ( Flink[2].Flink == (struct _LIST_ENTRY *)v68 )
              break;
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_107;
          }
        }
        if ( !v77 )
          goto LABEL_107;
        v78 = v77[2].Flink;
        if ( !v78 )
        {
          v79 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v77[1].Blink->Flink[23].Flink)(v77[1].Blink);
          v77[2].Flink = (struct _LIST_ENTRY *)v79;
          v78 = (_DWORD *)v79;
          if ( !v79 )
            goto LABEL_107;
        }
        if ( *((_BYTE *)v75 + 24) )
          v80 = v78[3];
        else
          v80 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v78 + 24LL))(v78);
LABEL_108:
        v83 = *(__m128 *)((char *)v75 + 28);
        v84 = _mm_shuffle_ps(v83, v83, 170).m128_f32[0];
        v142 = v83;
        if ( v84 > v83.m128_f32[0] && v142.m128_f32[3] > v142.m128_f32[1] )
        {
          if ( *((_BYTE *)v74 + 824) )
          {
            COcclusionContext::PageInPixelsRectToDeviceRect(v74, &v142, &v150);
          }
          else
          {
            *(_QWORD *)&v150 = __PAIR64__(v142.m128_u32[1], v83.m128_u32[0]);
            *((_QWORD *)&v150 + 1) = __PAIR64__(v142.m128_u32[3], LODWORD(v84));
          }
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**((_QWORD **)v74 + 50) + 56LL))(
                  *((_QWORD *)v74 + 50),
                  &v150,
                  v80) )
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v149, &v142);
        }
        if ( v73 == v72 )
        {
          v4 = v128;
          LOBYTE(v23) = LOBYTE(v130);
          goto LABEL_118;
        }
      }
    }
LABEL_173:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, v23);
    goto LABEL_175;
  }
  if ( !CHwndRenderTarget::NeedsBlackBars(v8) )
  {
LABEL_81:
    v50 = v125[0];
    goto LABEL_82;
  }
  v51 = *((_DWORD *)v8 + 22);
  v152 = 0LL;
  v52 = (float)*((int *)v8 + 23);
  v153 = (float)v51;
  v154 = v52;
  v53 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v23, 0, (unsigned int)&v152, 1, 1);
  v4 = v53;
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x3AEu, 0LL);
  }
  else
  {
    v4 = CDrawingContext::Clear(v23, &stru_180283020);
    CDrawingContext::PopGpuClipRectInternal(v23, 0);
    if ( v4 >= 0 )
    {
      LOBYTE(v56) = 1;
      v57 = CHwndRenderTarget::NotifyRenderedRect(v8, 0LL, v56);
      v128 = v57;
      v4 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x3BAu, 0LL);
        goto LABEL_175;
      }
      goto LABEL_81;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v4, 0x3B6u, 0LL);
  }
LABEL_175:
  if ( v125[2] )
    CDrawingContext::PopRenderTargetInternal(v23, 0);
LABEL_177:
  if ( v135 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v135 + 16LL))(v135);
  return (unsigned int)v4;
}
