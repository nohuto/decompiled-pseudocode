/*
 * XREFs of ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180059EF0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180024674 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18002AC80 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180033BE4 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18003F9A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18005207C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180059680 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x18005B5E4 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18005B6F4 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x18005C870 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x18005C8C8 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180080FA0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x18009002C (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800910F0 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AEA10 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800C8B70 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ @ 0x1800D8590 (-NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0x @ 0x18015D5EC (McTemplateU0x.c)
 *     McTemplateU0xq @ 0x18015D648 (McTemplateU0xq.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18016E528 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18016E6B0 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18016E9A4 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180170AD8 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180176E44 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     McTemplateU0qdffff @ 0x180176FE4 (McTemplateU0qdffff.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801930F4 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1801934B4 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801A79B0 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     McTemplateU0xqq @ 0x1801A8498 (McTemplateU0xqq.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FE3C8 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
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
  __int64 v18; // r9
  __int64 v19; // r8
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
  __m128i *v85; // rax
  __int64 v86; // rcx
  unsigned __int64 v87; // xmm1_8
  char HasVirtualModeScale; // al
  CDisplay *v89; // rcx
  int v90; // eax
  unsigned int v91; // ecx
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // r8d
  __m128 v95; // xmm1
  __m128 v96; // xmm1
  __m128 v97; // xmm2
  float v98; // xmm0_4
  __m128 v99; // xmm1
  int v100; // edx
  __m128 v101; // xmm1
  __m128 v102; // xmm1
  __m128 v103; // xmm2
  float v104; // xmm0_4
  __m128 v105; // xmm1
  int v106; // ecx
  __m128 v107; // xmm1
  __m128 v108; // xmm1
  __m128 v109; // xmm2
  float v110; // xmm0_4
  __m128 v111; // xmm0
  int v112; // eax
  __m128 v113; // xmm1
  float v114; // xmm0_4
  __m128 v115; // xmm0
  __int64 v116; // rcx
  int v117; // eax
  unsigned int v118; // ecx
  int v119; // eax
  unsigned int v120; // ecx
  __int64 v122; // [rsp+38h] [rbp-D0h]
  bool v123[4]; // [rsp+48h] [rbp-C0h] BYREF
  bool v124[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v125; // [rsp+50h] [rbp-B8h]
  int v126; // [rsp+54h] [rbp-B4h]
  int v127; // [rsp+58h] [rbp-B0h]
  float v128; // [rsp+60h] [rbp-A8h]
  float v129; // [rsp+68h] [rbp-A0h]
  CDrawingContext *v130[3]; // [rsp+70h] [rbp-98h]
  COcclusionContext *v131; // [rsp+88h] [rbp-80h] BYREF
  int v132; // [rsp+90h] [rbp-78h]
  struct IRenderTarget *v133; // [rsp+98h] [rbp-70h] BYREF
  __int64 v134; // [rsp+A0h] [rbp-68h]
  CHwndRenderTarget *v135; // [rsp+A8h] [rbp-60h]
  unsigned __int32 v136; // [rsp+B0h] [rbp-58h]
  unsigned __int32 v137; // [rsp+B4h] [rbp-54h]
  unsigned __int32 v138; // [rsp+B8h] [rbp-50h]
  unsigned __int32 v139; // [rsp+BCh] [rbp-4Ch]
  __m128 v140; // [rsp+C0h] [rbp-48h] BYREF
  struct CComposeTop *v141; // [rsp+D0h] [rbp-38h]
  __int64 v142; // [rsp+D8h] [rbp-30h] BYREF
  __int32 v143; // [rsp+E0h] [rbp-28h] BYREF
  __int32 v144; // [rsp+E4h] [rbp-24h]
  float v145; // [rsp+E8h] [rbp-20h]
  unsigned __int32 v146; // [rsp+ECh] [rbp-1Ch]
  __m128 v147; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v148; // [rsp+100h] [rbp-8h] BYREF
  __m128 v149; // [rsp+110h] [rbp+8h] BYREF
  __int64 v150; // [rsp+120h] [rbp+18h] BYREF
  float v151; // [rsp+128h] [rbp+20h]
  float v152; // [rsp+12Ch] [rbp+24h]
  float v153[4]; // [rsp+130h] [rbp+28h] BYREF
  float v154; // [rsp+140h] [rbp+38h]
  float v155; // [rsp+144h] [rbp+3Ch]
  float v156; // [rsp+148h] [rbp+40h]
  float v157; // [rsp+14Ch] [rbp+44h]
  __int128 v158; // [rsp+158h] [rbp+50h]
  __int128 v159; // [rsp+168h] [rbp+60h] BYREF
  _DWORD v160[8]; // [rsp+178h] [rbp+70h]
  __m128 v161[8]; // [rsp+198h] [rbp+90h] BYREF

  v3 = *((_QWORD *)this + 25);
  v4 = 0;
  v5 = 2860LL;
  v6 = *(_BYTE *)(v3 + 2883) == 0;
  v7 = *(_DWORD *)(v3 + 1276);
  v8 = this;
  v135 = this;
  if ( v6 )
    v5 = 1116LL;
  v9 = v3 + v5;
  v10 = (__int64 *)*((_QWORD *)this + 22);
  v11 = 0LL;
  v12 = *((_DWORD *)v8 + 107);
  v13 = 0LL;
  v133 = 0LL;
  v14 = v12 & 0x10000;
  v123[0] = *(_BYTE *)(v3 + 2883);
  v123[1] = v14 != 0;
  v15 = *v10;
  v130[2] = a2;
  v141 = a3;
  v126 = 0;
  v16 = *(void (__fastcall **)(__int64 *, __m128 *))(v15 + 48);
  v125 = 0;
  v131 = 0LL;
  v123[2] = 0;
  v127 = v14;
  v132 = 0x7FFFFFFF;
  v16(v10, &v149);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v8 + 22) + 504LL))(*((_QWORD *)v8 + 22), 0LL);
  if ( v123[0] )
  {
    LODWORD(v13) = 1;
    v125 = 1;
    v160[0] = 0;
    v161[0] = v149;
  }
  else
  {
    v18 = 0LL;
    if ( v7 )
    {
      v19 = 0LL;
      do
      {
        m128_f32 = (_OWORD *)v161[(unsigned int)v13].m128_f32;
        v148 = *(_OWORD *)(v19 + v9);
        *m128_f32 = v148;
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(m128_f32, &v149) )
        {
          v160[v13] = v22;
          v13 = (unsigned int)(v13 + 1);
        }
        v18 = (unsigned int)(v22 + 1);
        v19 = v21 + 16;
      }
      while ( (unsigned int)v18 < v7 );
      v125 = v13;
    }
  }
  v23 = v130[2];
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(v17, (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, v130[2], 0, v13);
  if ( !(_DWORD)v13 )
    goto LABEL_173;
  v124[1] = 1;
  if ( v14 )
  {
    v11 = (COcclusionContext *)*((_QWORD *)v130[2] + 784);
    v131 = v11;
    if ( v11 )
    {
      v24 = v11;
      v134 = *((_QWORD *)v8 + 15);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Start);
        v24 = (COcclusionContext *)*((_QWORD *)v130[2] + 784);
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
            v23 = v130[2];
            goto LABEL_27;
          }
          if ( v28 )
            break;
          v23 = v130[2];
          if ( !(unsigned __int8)CDrawingContext::IsNodeOccluded(v130[2], v134, v27, v26 + 40 * v25 + 20) )
            goto LABEL_24;
LABEL_25:
          CThreadContext::UnregisterGraphWalkRoot();
LABEL_27:
          v25 = (unsigned int)(v25 + 1);
          if ( (unsigned int)v25 >= *((_DWORD *)v24 + 296) )
          {
            v11 = v131;
            v4 = v126;
            v8 = v135;
            goto LABEL_29;
          }
        }
        v23 = v130[2];
LABEL_24:
        CCachedVisualImage::EnsureRenderTargetBitmapInfo(v29, *((_QWORD *)v23 + 49), *((_DWORD *)v23 + 100), &v142);
        goto LABEL_25;
      }
LABEL_29:
      *((_DWORD *)v24 + 296) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)v24 + 1160, 40LL);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Stop);
      v14 = v127;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xq(v17, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, v130[2], 0LL);
      CDrawingContext::CalculateOcclusion(
        v130[2],
        *((struct CVisualTree **)v8 + 15),
        (unsigned int)v13,
        (__int64)v161,
        0,
        0,
        &v131);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xq(v43, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, v130[2], 0LL);
      v11 = v131;
    }
  }
  v30 = (COverlayContext *)*((_QWORD *)v8 + 106);
  if ( v30 )
  {
    v123[3] = 0;
    v124[0] = 0;
    v31 = COverlayContext::ApplyOverlayOrDirectFlipConfiguration(v30, &v123[3], v124, v18);
    v126 = v31;
    v4 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x335u, 0LL);
      goto LABEL_177;
    }
    if ( !v123[0] )
    {
      v33 = (CDirtyRegion *)*((_QWORD *)v8 + 25);
      if ( !*((_BYTE *)v33 + 2883) && v123[3] )
      {
        v123[0] = 1;
        v125 = 1;
        v160[0] = 0;
        v161[0] = v149;
        if ( v14 )
        {
          CDirtyRegion::SetFullDirty(v33);
          CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)(*((_QWORD *)v8 + 24) + 168LL), 0);
          v11 = (COcclusionContext *)*((_QWORD *)v23 + 784);
          v131 = v11;
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
          dword_180339864 |= 2u;
          v44 = 0;
          v125 = 0;
          goto LABEL_67;
        }
        if ( (unsigned int)(v35 - 3) <= 1 )
        {
          v37 = *(CVisual ***)(*((_QWORD *)v8 + 106) + 13304LL);
          OcclusionInfo = CVisual::GetOcclusionInfo(v37[3], *((const struct CVisualTree **)v8 + 15));
          v132 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
          CurrentRealizationAsRenderTarget = CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
                                               (CDirectFlipInfo *)v37,
                                               &v133);
          v4 = CurrentRealizationAsRenderTarget;
          if ( CurrentRealizationAsRenderTarget < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, CurrentRealizationAsRenderTarget, 0x382u, 0LL);
            goto LABEL_177;
          }
          (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v133 + 160LL))(v133);
          v41 = CDrawingContext::PushRenderTarget(v23, v133);
          v126 = v41;
          v4 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x387u, 0LL);
            goto LABEL_177;
          }
          v123[2] = 1;
          v124[1] = 0;
        }
        goto LABEL_66;
      }
      if ( !CDirectFlipInfo::RenderingRealizationChanged(*(CDirectFlipInfo **)(*((_QWORD *)v8 + 106) + 13304LL)) )
      {
        v44 = 0;
        v125 = 0;
        goto LABEL_67;
      }
    }
    if ( v124[0] )
    {
      v45 = CDrawingContext::PushRenderTarget(v23, *((struct IRenderTarget **)v8 + 22));
      v126 = v45;
      v4 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x363u, 0LL);
        goto LABEL_177;
      }
      v123[2] = 1;
    }
  }
  else
  {
    v34 = 0;
  }
LABEL_66:
  v44 = v125;
LABEL_67:
  if ( v11 )
  {
    v47 = *((_QWORD *)v8 + 106);
    if ( !v47 || (v6 = *(_BYTE *)(v47 + 13439) == 0, v48 = 288LL, v6) )
      v48 = 220LL;
    COcclusionContext::SetDeviceTransform(v11, (CHwndRenderTarget *)((char *)v8 + v48));
    v49 = v123[1];
  }
  else
  {
    v49 = 0;
    v123[1] = 0;
  }
  v50 = v123[0];
  if ( !v123[0] )
  {
LABEL_82:
    v127 = 0;
    if ( v44 )
    {
      v59 = 0LL;
      v134 = 0LL;
      while ( 1 )
      {
        v60 = v161[v59];
        v143 = v60.m128_i32[0];
        LODWORD(v61) = _mm_shuffle_ps(v60, v60, 85).m128_u32[0];
        LODWORD(v62) = _mm_shuffle_ps(v60, v60, 170).m128_u32[0];
        v63 = _mm_shuffle_ps(v60, v60, 255);
        *(float *)&v144 = v61;
        v145 = v62;
        v146 = v63.m128_i32[0];
        if ( !v50 )
        {
          if ( v49 )
            break;
        }
LABEL_125:
        if ( v62 <= v60.m128_f32[0] || v63.m128_f32[0] <= v61 )
        {
          v23 = v130[2];
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
          {
            McTemplateU0qdffff(
              v50,
              (unsigned int)&EVTDESC_ETWGUID_DIRTYREGIONEVENT,
              v160[v59],
              v18,
              v60.m128_i8[0],
              SLOBYTE(v61),
              SLOBYTE(v62),
              v63.m128_i8[0]);
            v63 = (__m128)v146;
            v62 = v145;
            v61 = *(float *)&v144;
            v60.m128_i32[0] = v143;
          }
          dword_180339878 += (int)(float)((float)(v62 - v60.m128_f32[0]) * (float)(v63.m128_f32[0] - v61));
          if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v8 + 248LL))(v8)
            || *(_BYTE *)(*((_QWORD *)v8 + 2) + 1274LL) )
          {
            v85 = (__m128i *)(*((_QWORD *)v8 + 21) + 120LL);
          }
          else
          {
            v85 = (__m128i *)((char *)v8 + 468);
          }
          v86 = v85->m128i_i64[0];
          v87 = _mm_srli_si128(*v85, 8).m128i_u64[0];
          v153[0] = (float)(int)v85->m128i_i64[0];
          v153[2] = (float)(int)v87;
          v153[1] = (float)SHIDWORD(v86);
          v153[3] = (float)SHIDWORD(v87);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v143, v153);
          HasVirtualModeScale = *((_BYTE *)v8 + 160);
          if ( !HasVirtualModeScale )
          {
            v89 = (CDisplay *)*((_QWORD *)v8 + 21);
            if ( v89 )
              HasVirtualModeScale = CDisplay::HasVirtualModeScale(v89);
          }
          v23 = v130[2];
          v90 = CHwndRenderTarget::DrawVisualTree(
                  (__int64)v8,
                  v130[2],
                  (__int64)&v143,
                  v132,
                  HasVirtualModeScale,
                  v49,
                  v122,
                  v124[1]);
          v4 = v90;
          if ( v90 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, v90, 0x3F2u, 0LL);
            goto LABEL_175;
          }
          v92 = *((_QWORD *)v8 + 106);
          if ( !v92 || (v6 = *(_BYTE *)(v92 + 13439) == 0, v93 = 288LL, v6) )
            v93 = 220LL;
          CMILMatrix::Transform2DBoundsHelper<0>((CHwndRenderTarget *)((char *)v8 + v93));
          v128 = v154;
          if ( (LODWORD(v154) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v95.m128_f32[0] = -0.5;
            v63.m128_f32[0] = (float)(int)v154 - v154;
            v136 = _mm_cmple_ss(v63, v95).m128_u32[0];
            v94 = (int)v154 - v136;
          }
          else
          {
            v128 = v154 + 6291456.25;
            v94 = (int)(LODWORD(v128) << 10) >> 11;
          }
          v96 = (__m128)LODWORD(v154);
          v96.m128_f32[0] = v154 - (float)v94;
          v97 = _mm_and_ps((__m128)_mm_cvtps_pd(v96), (__m128)(unsigned __int64)_xmm);
          v98 = *(double *)v97.m128_u64;
          if ( v98 > 0.00390625 )
          {
            v99.m128_f32[0] = (float)(int)v154;
            LODWORD(v130[0]) = _mm_cmplt_ss((__m128)LODWORD(v154), v99).m128_u32[0];
            v94 = (int)v154 + LODWORD(v130[0]);
          }
          *(float *)v130 = v155;
          if ( (LODWORD(v155) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v101.m128_f32[0] = -0.5;
            v97.m128_f32[0] = (float)(int)v155 - v155;
            v137 = _mm_cmple_ss(v97, v101).m128_u32[0];
            v100 = (int)v155 - v137;
          }
          else
          {
            *(float *)v130 = v155 + 6291456.25;
            v100 = (int)(LODWORD(v130[0]) << 10) >> 11;
          }
          v102 = (__m128)LODWORD(v155);
          v102.m128_f32[0] = v155 - (float)v100;
          v103 = _mm_and_ps((__m128)_mm_cvtps_pd(v102), (__m128)(unsigned __int64)_xmm);
          v104 = *(double *)v103.m128_u64;
          if ( v104 > 0.00390625 )
          {
            v105.m128_f32[0] = (float)(int)v155;
            LODWORD(v129) = _mm_cmplt_ss((__m128)LODWORD(v155), v105).m128_u32[0];
            v100 = (int)v155 + LODWORD(v129);
          }
          v129 = v156;
          if ( (LODWORD(v156) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v107.m128_f32[0] = -0.5;
            v103.m128_f32[0] = (float)(int)v156 - v156;
            v138 = _mm_cmple_ss(v103, v107).m128_u32[0];
            v106 = (int)v156 - v138;
          }
          else
          {
            v129 = v156 + 6291456.25;
            v106 = (int)(LODWORD(v129) << 10) >> 11;
          }
          v108 = (__m128)LODWORD(v156);
          v108.m128_f32[0] = v156 - (float)v106;
          v109 = _mm_and_ps((__m128)_mm_cvtps_pd(v108), (__m128)(unsigned __int64)_xmm);
          v110 = *(double *)v109.m128_u64;
          if ( v110 > 0.00390625 )
          {
            v111 = 0LL;
            v111.m128_f32[0] = (float)(int)v156;
            LODWORD(v130[1]) = _mm_cmplt_ss(v111, (__m128)LODWORD(v156)).m128_u32[0];
            v106 = (int)v156 - LODWORD(v130[1]);
          }
          *(float *)&v130[1] = v157;
          if ( (LODWORD(v157) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v113.m128_f32[0] = -0.5;
            v109.m128_f32[0] = (float)(int)v157 - v157;
            v139 = _mm_cmple_ss(v109, v113).m128_u32[0];
            v112 = (int)v157 - v139;
          }
          else
          {
            *(float *)&v130[1] = v157 + 6291456.25;
            v112 = (int)(LODWORD(v130[1]) << 10) >> 11;
          }
          v114 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v157 - (float)v112)) & _xmm);
          if ( v114 > 0.00390625 )
          {
            v115 = (__m128)LODWORD(v157);
            v115.m128_f32[0] = (float)(int)v157;
            LODWORD(v135) = _mm_cmplt_ss(v115, (__m128)LODWORD(v157)).m128_u32[0];
            v112 = (int)v157 - (_DWORD)v135;
          }
          *((_QWORD *)&v158 + 1) = __PAIR64__(v112, v106);
          v116 = *((_QWORD *)v8 + 22);
          *(_QWORD *)&v158 = __PAIR64__(v100, v94);
          v159 = v158;
          v117 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v116 + 168LL))(v116, &v159);
          v126 = v117;
          v4 = v117;
          if ( v117 >= 0 )
            *((_BYTE *)v8 + 858) = 1;
          else
            MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, v117, 0x961u, 0LL);
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, v4, 0x3F6u, 0LL);
            goto LABEL_175;
          }
          if ( v141 )
          {
            v119 = CComposeTop::SubtractOverdraw(v141, &v143);
            v126 = v119;
            v4 = v119;
            if ( v119 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, v119, 0x3FCu, 0LL);
              goto LABEL_175;
            }
          }
        }
        ++v34;
        ++v59;
        v127 = v34;
        v134 = v59;
        if ( v34 >= v44 )
          goto LABEL_173;
        v50 = v123[0];
      }
      v64 = (CDisplay *)*((_QWORD *)v8 + 21);
      LOBYTE(v23) = 0;
      v65 = *((_QWORD *)v8 + 25);
      v128 = *(float *)&v23;
      if ( v64 )
      {
        if ( CDisplay::HasVirtualModeScale(v64)
          && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v8 + 248LL))(v8) )
        {
          v66 = *((_QWORD *)v8 + 106);
          if ( v66 )
          {
            LOBYTE(v23) = *(_BYTE *)(v66 + 13439) == 0;
            LODWORD(v128) = (unsigned __int8)v23;
          }
        }
      }
      v67 = (unsigned int)v160[v59];
      v68 = *((_QWORD *)v8 + 15);
      if ( *(_BYTE *)(v65 + 2883) )
      {
        v147 = *(__m128 *)(v65 + 2860);
        v69 = v147.m128_i32[0];
        v70 = _mm_shuffle_ps(v147, v147, 170).m128_u32[0];
LABEL_124:
        v144 = v147.m128_i32[1];
        v146 = v147.m128_u32[3];
        v143 = v69;
        v145 = *(float *)&v70;
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v143, &v149);
        v63 = (__m128)v146;
        v62 = v145;
        v61 = *(float *)&v144;
        v60.m128_i32[0] = v143;
        v44 = v125;
        v59 = v134;
        goto LABEL_125;
      }
      v70 = 0;
      v147.m128_i32[3] = 0;
      v69 = 0;
      v147.m128_i32[1] = 0;
      if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 1276) )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v64, 0LL, 0, -2147024809, 0x37Au, 0LL);
        goto LABEL_124;
      }
      _mm_lfence();
      v71 = 16LL * *(unsigned int *)(v65 + 4 * v67 + 1244);
      v72 = (_QWORD *)(v71 + v65 + 280);
      v73 = (_QWORD *)*v72;
      v147 = *(__m128 *)(v71 + v65 + 152);
      if ( v73 == v72 )
      {
LABEL_118:
        v70 = v147.m128_i32[2];
        v69 = v147.m128_i32[0];
        if ( v147.m128_f32[2] > v147.m128_f32[0] && v147.m128_f32[3] > v147.m128_f32[1] )
        {
          if ( (_BYTE)v23 )
            InflateRectF_InPlace(&v147);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v147, &v149);
          v70 = v147.m128_i32[2];
          v69 = v147.m128_i32[0];
        }
        v34 = v127;
        v49 = v123[1];
        goto LABEL_124;
      }
      v74 = v131;
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
        v140 = v83;
        if ( v84 > v83.m128_f32[0] && v140.m128_f32[3] > v140.m128_f32[1] )
        {
          if ( *((_BYTE *)v74 + 824) )
          {
            COcclusionContext::PageInPixelsRectToDeviceRect(v74, &v140, &v148);
          }
          else
          {
            *(_QWORD *)&v148 = __PAIR64__(v140.m128_u32[1], v83.m128_u32[0]);
            *((_QWORD *)&v148 + 1) = __PAIR64__(v140.m128_u32[3], LODWORD(v84));
          }
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**((_QWORD **)v74 + 50) + 56LL))(
                  *((_QWORD *)v74 + 50),
                  &v148,
                  v80) )
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v147, &v140);
        }
        if ( v73 == v72 )
        {
          v4 = v126;
          LOBYTE(v23) = LOBYTE(v128);
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
    v50 = v123[0];
    goto LABEL_82;
  }
  v51 = *((_DWORD *)v8 + 22);
  v150 = 0LL;
  v52 = (float)*((int *)v8 + 23);
  v151 = (float)v51;
  v152 = v52;
  v53 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v23, 0, (unsigned int)&v150, 1, 1);
  v4 = v53;
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x3AEu, 0LL);
  }
  else
  {
    v4 = CDrawingContext::Clear(v23, &stru_1802A1C78);
    CDrawingContext::PopGpuClipRectInternal(v23, 0);
    if ( v4 >= 0 )
    {
      LOBYTE(v56) = 1;
      v57 = CHwndRenderTarget::NotifyRenderedRect(v8, 0LL, v56);
      v126 = v57;
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
  if ( v123[2] )
    CDrawingContext::PopRenderTargetInternal(v23, 0);
LABEL_177:
  if ( v133 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v133 + 16LL))(v133);
  return (unsigned int)v4;
}
