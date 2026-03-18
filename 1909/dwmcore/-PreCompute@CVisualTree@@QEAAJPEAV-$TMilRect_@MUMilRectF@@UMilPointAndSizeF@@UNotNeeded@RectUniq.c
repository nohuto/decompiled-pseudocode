/*
 * XREFs of ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002394C (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180023C20 (-GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18002407C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004FCC0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x18007FCD0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ComputeBounds@CRedirectedVisualContent@@QEAAXXZ @ 0x1800ED92C (-ComputeBounds@CRedirectedVisualContent@@QEAAXXZ.c)
 *     ?ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ @ 0x1801762C4 (-ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018AFBC (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?PreCompute@COffScreenRenderTarget@@MEAAJXZ @ 0x180199630 (-PreCompute@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?PreRender@COverlayRenderTargetEngine@@UEAAJXZ @ 0x1801A3430 (-PreRender@COverlayRenderTargetEngine@@UEAAJXZ.c)
 *     ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x1801A4490 (-PreRender@CRemoteAppRenderTarget@@UEAAJXZ.c)
 *     ?EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ @ 0x1801A7774 (-EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801AA4EC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x180244160 (-PreCompute@CHolographicInteropTarget@@AEAAJXZ.c)
 *     ?PreRender@CLocalAppRenderTarget@@UEAAJXZ @ 0x18024F010 (-PreRender@CLocalAppRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180033BE4 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180079560 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180079F80 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x18007F424 (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180081E30 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800BFF98 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800C0014 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x1800D1A84 (-CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E5664 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     McTemplateU0x @ 0x18015D5EC (McTemplateU0x.c)
 *     McTemplateU0xq @ 0x18015D648 (McTemplateU0xq.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180176E44 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x180176F6C (-SetRedrawRects@CDirtyRegion@@AEAAXXZ.c)
 */

__int64 __fastcall CVisualTree::PreCompute(__int64 a1, __int128 *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  struct CVisualTree *v5; // rbp
  char *v6; // rdi
  __int64 v7; // rax
  _DWORD *Value; // rbx
  int v9; // ecx
  _QWORD **v10; // rsi
  CDirtyRegion *v11; // rcx
  _DWORD *v12; // rbp
  int v13; // ecx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  __int128 v16; // xmm6
  const struct D2D_RECT_F *v17; // r14
  __int64 v18; // rbx
  char *v19; // r8
  bool v20; // zf
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  signed int v24; // eax
  __int64 v25; // rcx
  char v26; // dl
  unsigned int v27; // ecx
  float *v28; // rax
  CVisual *v29; // rbx
  int v30; // ebx
  CDirtyRegion *i; // rsi
  __int64 v32; // rcx
  unsigned int v33; // r8d
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // ebx
  char v39; // r15
  __int64 v40; // rsi
  float *v41; // rbp
  unsigned int v42; // eax
  unsigned int v43; // r13d
  int j; // ebx
  __int64 v45; // rcx
  volatile signed __int32 *v46; // rcx
  __int64 v48; // r8
  float *v49; // r13
  float *v50; // r9
  const struct MilRectF *v51; // rdx
  __int64 v52; // r10
  float v53; // xmm4_4
  float v54; // xmm1_4
  float *v55; // r9
  float v56; // xmm3_4
  float v57; // xmm2_4
  bool v58; // cc
  bool v59; // al
  float v60; // xmm1_4
  float v61; // xmm2_4
  __int64 v62; // rbp
  __int64 v63; // r11
  float *v64; // r8
  float *v65; // r10
  unsigned int v66; // edx
  __int64 v67; // rcx
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm1_4
  __int64 v74; // rdx
  __int64 v75; // r8
  float *v76; // rcx
  float v77; // xmm1_4
  __int64 v78; // r10
  _QWORD *v79; // rdx
  char *v80; // r9
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rcx
  signed int updated; // eax
  __int64 v96; // rcx
  signed int v97; // eax
  __int64 v98; // rcx
  float v99; // xmm2_4
  float v100; // xmm1_4
  float v101; // xmm2_4
  float v102; // xmm1_4
  float v103; // xmm2_4
  float v104; // xmm2_4
  float v105; // xmm2_4
  const struct CDirtyRegion::DirtyRegionCachedData *v106; // rdx
  CDirtyRegion *v107; // rcx
  float v108; // xmm0_4
  __int64 v109; // rdx
  float *v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rax
  struct MilRectF *v113; // rsi
  struct MilRectF *v114; // r14
  __int64 v115; // r8
  CThreadContext *v116; // rax
  __int64 v117; // rcx
  CThreadContext *v118; // rax
  __int64 v119; // r8
  CThreadContext *v120; // rax
  __int64 v121; // rcx
  CThreadContext *v122; // rax
  __int64 v123; // r8
  _QWORD *v124; // rax
  const struct D2D_RECT_F *v125; // rbx
  __int64 v126; // rsi
  __int64 v127; // rcx
  __int64 v128; // rcx
  bool v129; // [rsp+30h] [rbp-E8h]
  int v130; // [rsp+34h] [rbp-E4h]
  CDirtyRegion *v131; // [rsp+38h] [rbp-E0h] BYREF
  unsigned int v132; // [rsp+40h] [rbp-D8h]
  unsigned int v133; // [rsp+44h] [rbp-D4h]
  struct MilRectF *v134; // [rsp+48h] [rbp-D0h]
  struct CVisualTree *v135; // [rsp+50h] [rbp-C8h]
  __m128 v136; // [rsp+58h] [rbp-C0h] BYREF
  float *v137; // [rsp+68h] [rbp-B0h]
  __int64 v138; // [rsp+70h] [rbp-A8h]
  __int64 v139; // [rsp+78h] [rbp-A0h]
  __int64 v140; // [rsp+80h] [rbp-98h]
  CDirtyRegion **v141; // [rsp+88h] [rbp-90h]
  __int128 v142; // [rsp+90h] [rbp-88h]
  void *retaddr; // [rsp+118h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v131 = 0LL;
  v5 = (struct CVisualTree *)a1;
  v6 = 0LL;
  v135 = (struct CVisualTree *)a1;
  v7 = *(_QWORD *)(v2 + 384);
  v140 = v7;
  v130 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x88982F04, 0x155u, 0LL);
    goto LABEL_75;
  }
  *(_BYTE *)(a1 + 33) = 1;
  if ( *(_QWORD *)(a1 + 1320) == v7 )
    goto LABEL_68;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0xq(a1, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, a1, *(unsigned __int8 *)(a1 + 32));
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v116 = (CThreadContext *)operator new(0x138uLL);
    if ( !v116 || (v118 = CThreadContext::CThreadContext(v116), (Value = v118) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v117, 0LL, 0, 0x8007000E, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v119);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v118);
  }
  v9 = Value[71];
  if ( v9 )
  {
    v6 = (char *)*((_QWORD *)Value + 36);
    *((_QWORD *)Value + 36) = *(_QWORD *)v6;
    Value[71] = v9 - 1;
  }
  if ( !v6 )
  {
    v6 = (char *)DefaultHeap::Alloc(0xB48uLL);
    if ( !v6 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v115);
  }
  *((_DWORD *)v6 + 2) = 0;
  v10 = (_QWORD **)(v6 + 1280);
  *((_DWORD *)v6 + 238) = 0;
  *(_QWORD *)v6 = &CDirtyRegion::`vftable';
  *((_QWORD *)v6 + 162) = v6 + 1280;
  *((_QWORD *)v6 + 163) = v6 + 1280;
  *((_QWORD *)v6 + 161) = v6 + 1296;
  *((_QWORD *)v6 + 160) = v6 + 1296;
  *((_DWORD *)v6 + 712) = 0;
  v6[2880] = 0;
  *((_QWORD *)v6 + 36) = v6 + 280;
  *((_QWORD *)v6 + 35) = v6 + 280;
  *((_QWORD *)v6 + 38) = v6 + 296;
  *((_QWORD *)v6 + 37) = v6 + 296;
  *((_QWORD *)v6 + 40) = v6 + 312;
  *((_QWORD *)v6 + 39) = v6 + 312;
  *((_QWORD *)v6 + 42) = v6 + 328;
  *((_QWORD *)v6 + 41) = v6 + 328;
  *((_QWORD *)v6 + 44) = v6 + 344;
  *((_QWORD *)v6 + 43) = v6 + 344;
  *((_QWORD *)v6 + 46) = v6 + 360;
  *((_QWORD *)v6 + 45) = v6 + 360;
  *((_QWORD *)v6 + 48) = v6 + 376;
  *((_QWORD *)v6 + 47) = v6 + 376;
  *((_QWORD *)v6 + 50) = v6 + 392;
  *((_QWORD *)v6 + 49) = v6 + 392;
  (**(void (__fastcall ***)(LPVOID))v6)(v6);
  v11 = v131;
  v141 = &v131;
  if ( v131 )
  {
    v131 = 0LL;
    CDirtyRegion::Release(v11);
  }
  v12 = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !v12 )
  {
    v120 = (CThreadContext *)operator new(0x138uLL);
    if ( !v120 || (v122 = CThreadContext::CThreadContext(v120), (v12 = v122) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v121, 0LL, 0, 0x8007000E, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v123);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v122);
  }
  v13 = v12[75];
  v14 = 0LL;
  if ( v13 )
  {
    v14 = (volatile signed __int32 *)*((_QWORD *)v12 + 38);
    *((_QWORD *)v12 + 38) = *(_QWORD *)v14;
    v12[75] = v13 - 1;
  }
  if ( v14 || (v14 = (volatile signed __int32 *)DefaultHeap::Alloc(0x1A8uLL)) != 0LL )
  {
    memset_0((void *)v14, 0, 0x1A8uLL);
    *((_DWORD *)v14 + 2) = 0;
    *(_QWORD *)v14 = &CBackdropRegion::`vftable';
    *((_QWORD *)v14 + 2) = v14 + 10;
    *((_QWORD *)v14 + 3) = v14 + 10;
    *((_QWORD *)v14 + 4) = v14 + 106;
  }
  if ( !v14 )
  {
    v3 = -2147024882;
    v130 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x8007000E, 0xFu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v128, 0LL, 0, 0x8007000E, 0xFBu, 0LL);
    v5 = v135;
    goto LABEL_66;
  }
  _InterlockedIncrement(v14 + 2);
  v131 = (CDirtyRegion *)v14;
  v130 = 0;
  if ( a2 )
  {
    v16 = *a2;
  }
  else
  {
    v142 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  v129 = !g_bUseDirtyRegion;
  v5 = v135;
  v17 = (const struct D2D_RECT_F *)(v6 + 24);
  v18 = *(_QWORD *)(*((_QWORD *)v135 + 2) + 384LL);
  memset_0(v6 + 24, 0, 0x80uLL);
  memset_0(v6 + 536, 0, 0x120uLL);
  *((_QWORD *)v6 + 2) = v18;
  *((_DWORD *)v6 + 719) = 1065353216;
  *(_WORD *)(v6 + 2885) = 0;
  *((_DWORD *)v6 + 714) = 0;
  *((_DWORD *)v6 + 319) = 0;
  v6[2884] = 0;
  *(_WORD *)(v6 + 2881) = 0;
  v6[2883] = v129;
  v19 = v6 + 2860;
  v20 = v6[2880] == 0;
  v134 = (struct MilRectF *)(v6 + 2860);
  *(_OWORD *)(v6 + 2860) = v16;
  if ( v20 )
  {
    *((_QWORD *)v6 + 36) = v6 + 280;
    *((_QWORD *)v6 + 35) = v6 + 280;
    *((_QWORD *)v6 + 38) = v6 + 296;
    *((_QWORD *)v6 + 37) = v6 + 296;
    *((_QWORD *)v6 + 40) = v6 + 312;
    *((_QWORD *)v6 + 39) = v6 + 312;
    *((_QWORD *)v6 + 42) = v6 + 328;
    *((_QWORD *)v6 + 41) = v6 + 328;
    *((_QWORD *)v6 + 44) = v6 + 344;
    *((_QWORD *)v6 + 43) = v6 + 344;
    *((_QWORD *)v6 + 46) = v6 + 360;
    *((_QWORD *)v6 + 45) = v6 + 360;
    *((_QWORD *)v6 + 48) = v6 + 376;
    *((_QWORD *)v6 + 47) = v6 + 376;
    *((_QWORD *)v6 + 50) = v6 + 392;
    *((_QWORD *)v6 + 49) = v6 + 392;
    v21 = (_QWORD *)*((_QWORD *)v6 + 161);
    if ( (_QWORD **)*v21 != v10 || (v22 = (_QWORD *)v21[1], (_QWORD *)*v22 != v21) )
LABEL_193:
      __fastfail(3u);
    *((_QWORD *)v6 + 161) = v22;
    *v22 = v10;
    while ( 1 )
    {
      v23 = *v10;
      if ( *v10 == v10 )
        break;
      if ( (_QWORD **)v23[1] != v10 )
        goto LABEL_193;
      v124 = (_QWORD *)*v23;
      if ( *(_QWORD **)(*v23 + 8LL) != v23 )
        goto LABEL_193;
      *v10 = v124;
      v124[1] = v10;
      operator delete(v23);
    }
    *((_QWORD *)v6 + 162) = v6 + 1280;
    v19 = v6 + 2860;
    *((_QWORD *)v6 + 163) = v6 + 1280;
    *((_QWORD *)v6 + 161) = v6 + 1296;
    *((_QWORD *)v6 + 160) = v6 + 1296;
    *((_DWORD *)v6 + 712) = 0;
  }
  *((_QWORD *)v6 + 20) = 0LL;
  *((_QWORD *)v6 + 19) = 0LL;
  v6[420] = 1;
  *(_QWORD *)(v6 + 412) = 0LL;
  *((_DWORD *)v6 + 102) = 0;
  *((_QWORD *)v6 + 4) = 0LL;
  *(_QWORD *)&v17->left = 0LL;
  *((_QWORD *)v6 + 22) = 0LL;
  *((_QWORD *)v6 + 21) = 0LL;
  v6[436] = 1;
  *(_QWORD *)(v6 + 428) = 0LL;
  *((_DWORD *)v6 + 106) = 0;
  *((_QWORD *)v6 + 6) = 0LL;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)v6 + 24) = 0LL;
  *((_QWORD *)v6 + 23) = 0LL;
  v6[452] = 1;
  *(_QWORD *)(v6 + 444) = 0LL;
  *((_DWORD *)v6 + 110) = 0;
  *((_QWORD *)v6 + 8) = 0LL;
  *((_QWORD *)v6 + 7) = 0LL;
  *((_QWORD *)v6 + 26) = 0LL;
  *((_QWORD *)v6 + 25) = 0LL;
  v6[468] = 1;
  *(_QWORD *)(v6 + 460) = 0LL;
  *((_DWORD *)v6 + 114) = 0;
  *((_QWORD *)v6 + 10) = 0LL;
  *((_QWORD *)v6 + 9) = 0LL;
  *((_QWORD *)v6 + 28) = 0LL;
  *((_QWORD *)v6 + 27) = 0LL;
  v6[484] = 1;
  *(_QWORD *)(v6 + 476) = 0LL;
  *((_DWORD *)v6 + 118) = 0;
  *((_QWORD *)v6 + 12) = 0LL;
  *((_QWORD *)v6 + 11) = 0LL;
  *((_QWORD *)v6 + 30) = 0LL;
  *((_QWORD *)v6 + 29) = 0LL;
  v6[500] = 1;
  *(_QWORD *)(v6 + 492) = 0LL;
  *((_DWORD *)v6 + 122) = 0;
  *((_QWORD *)v6 + 14) = 0LL;
  *((_QWORD *)v6 + 13) = 0LL;
  *((_QWORD *)v6 + 32) = 0LL;
  *((_QWORD *)v6 + 31) = 0LL;
  v6[516] = 1;
  *(_QWORD *)(v6 + 508) = 0LL;
  *((_DWORD *)v6 + 126) = 0;
  *((_QWORD *)v6 + 16) = 0LL;
  *((_QWORD *)v6 + 15) = 0LL;
  *((_QWORD *)v6 + 34) = 0LL;
  *((_QWORD *)v6 + 33) = 0LL;
  v6[532] = 1;
  *(_QWORD *)(v6 + 524) = 0LL;
  *((_DWORD *)v6 + 130) = 0;
  *((_QWORD *)v6 + 18) = 0LL;
  *((_QWORD *)v6 + 17) = 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)v5 + 3) + 88LL) & 0x7F) != 0 )
  {
    v24 = CPreComputeContext::PreCompute((struct CVisualTree *)((char *)v5 + 88), v5, (struct CDirtyRegion *)v6, v131);
    v130 = v24;
    v3 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x117u, 0LL);
      goto LABEL_66;
    }
LABEL_27:
    v19 = v6 + 2860;
    goto LABEL_28;
  }
  if ( !*((_BYTE *)v5 + 32) )
  {
    updated = CPreComputeContext::UpdateTransformChildren((struct CVisualTree *)((char *)v5 + 88), v5, 1);
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v96, 0LL, 0, updated, 0x11Fu, 0LL);
    v97 = CPreComputeContext::UpdateProjectedShadowCasters((struct CVisualTree *)((char *)v5 + 88), v5, 1);
    v130 = v97;
    v3 = v97;
    if ( v97 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v98, 0LL, 0, v97, 0x122u, 0LL);
      goto LABEL_66;
    }
    goto LABEL_27;
  }
LABEL_28:
  v26 = v6[2883];
  if ( !v26 )
  {
    if ( v6[2886] )
    {
      if ( !*((_DWORD *)v6 + 319) )
        goto LABEL_36;
    }
    else
    {
      v27 = 0;
      v28 = (float *)(v6 + 36);
      while ( *(v28 - 1) <= *(v28 - 3) || *v28 <= *(v28 - 2) )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= 8 )
          goto LABEL_36;
      }
    }
  }
  v29 = *(CVisual **)(*((_QWORD *)v5 + 3) + 80LL);
  if ( v29 )
  {
    if ( v26 )
    {
      if ( !v19 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v112 = 16LL;
    }
    else
    {
      v19 = v6 + 24;
      v134 = (struct MilRectF *)(v6 + 24);
      v112 = 128LL;
    }
    v113 = (struct MilRectF *)&v19[v112];
    if ( v19 != &v19[v112] )
    {
      v114 = v134;
      do
      {
        CVisual::AddAdditionalDirtyRects(v29, v114);
        v114 = (struct MilRectF *)((char *)v114 + 16);
      }
      while ( v114 != v113 );
      v17 = (const struct D2D_RECT_F *)(v6 + 24);
    }
  }
LABEL_36:
  v30 = *((_DWORD *)v5 + 326);
  for ( i = v131; v30 > 0; --v30 )
  {
    v32 = *(_QWORD *)(*((_QWORD *)v5 + 160) + 8LL * (unsigned int)(v30 - 1));
    (*(void (__fastcall **)(__int64, struct CVisualTree *, char *, CDirtyRegion *))(*(_QWORD *)v32 + 32LL))(
      v32,
      v5,
      v6,
      i);
  }
  if ( g_DisplayManager )
  {
    v33 = *((_DWORD *)g_DisplayManager + 18);
    v34 = 0;
    if ( v33 )
    {
      while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)g_DisplayManager + 6) + 8LL * v34) + 312LL) )
      {
        if ( ++v34 >= v33 )
          goto LABEL_42;
      }
      v35 = *((_QWORD *)v5 + 2);
      goto LABEL_177;
    }
  }
LABEL_42:
  v35 = *((_QWORD *)v5 + 2);
  v36 = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)(v35 + 64) + 100LL) )
LABEL_177:
    v36 = 0LL;
  v37 = 0LL;
  if ( !*(_DWORD *)(v35 + 1216) )
    v37 = v36;
  v20 = v6[2883] == 0;
  v139 = v37;
  if ( !v20 )
  {
    v43 = 1;
    goto LABEL_62;
  }
  v133 = 0;
  memset_0(v6 + 1116, 0, 0x80uLL);
  if ( v6[2885] )
  {
    v125 = v17;
    v126 = 8LL;
    do
    {
      if ( !IsEmpty(v125) )
        InflateRectF_InPlace(v127);
      ++v125;
      --v126;
    }
    while ( v126 );
  }
  v38 = 0;
  do
  {
    v39 = 0;
    v40 = 16LL * v38;
    v41 = (float *)&v6[v40];
    if ( *(float *)&v6[v40 + 32] <= *(float *)&v6[v40 + 24] )
      goto LABEL_49;
    if ( v41[9] <= v41[7] )
      goto LABEL_49;
    v48 = v38 + 1;
    LODWORD(v134) = v48;
    v132 = v38 + 1;
    if ( (unsigned int)v48 >= 8 )
      goto LABEL_49;
    v49 = (float *)&v6[16 * (unsigned int)v48 + 36];
    v50 = (float *)&v6[32 * v48 + 536 + 4 * v38];
    v137 = v50;
    while ( 1 )
    {
      if ( *(v49 - 1) > *(v49 - 3) && *v49 > *(v49 - 2) )
      {
        v138 = (unsigned int)v48;
        *(_QWORD *)&v142 = &v6[16 * (unsigned int)v48 + 24];
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v41 + 6, (float *)v142) )
          goto LABEL_87;
        if ( v139 )
          break;
      }
LABEL_83:
      LODWORD(v48) = v48 + 1;
      v50 += 8;
      v49 += 4;
      v132 = v48;
      v137 = v50;
      if ( (unsigned int)v48 >= 8 )
        goto LABEL_49;
    }
    if ( *v50 >= 0.86000001 )
      goto LABEL_87;
    if ( CalcOvehead((const struct MilRectF *)(v41 + 6), v51) >= 50000.0 )
    {
      LODWORD(v48) = v132;
      v50 = v137;
      goto LABEL_83;
    }
    v51 = (const struct MilRectF *)v142;
LABEL_87:
    v136 = *(__m128 *)(v41 + 6);
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v136, v51);
    v53 = v136.m128_f32[0];
    v54 = v136.m128_f32[3];
    v55 = (float *)&v6[v40 + 408];
    v56 = v136.m128_f32[1];
    v57 = _mm_shuffle_ps(v136, v136, 170).m128_f32[0];
    v58 = v57 <= v136.m128_f32[0];
    *(__m128 *)(v41 + 6) = v136;
    v59 = v58 || v54 <= v56;
    *((_BYTE *)v55 + 12) = v59;
    v60 = v54 - v56;
    v61 = v57 - v53;
    v62 = 16 * v52;
    v55[2] = v60 * v61;
    v55[1] = (float)(v60 * 0.5) + v56;
    *v55 = (float)(v61 * 0.5) + v53;
    v6[v62 + 420] = 1;
    *(_DWORD *)&v6[16 * v52 + 416] = 0;
    *(_QWORD *)&v6[v62 + 408] = 0LL;
    *(_QWORD *)&v6[v62 + 32] = 0LL;
    *(_QWORD *)&v6[v62 + 24] = 0LL;
    if ( v38 )
    {
      v106 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v6 + 408);
      v107 = (CDirtyRegion *)&v6[32 * v38 + 536];
      do
      {
        v108 = CDirtyRegion::CalcAcceleration(v107, v106, (const struct CDirtyRegion::DirtyRegionCachedData *)v55);
        v106 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v109 + 16);
        *v110 = v108;
        v107 = (CDirtyRegion *)(v110 + 1);
      }
      while ( v111 != 1 );
    }
    v63 = (unsigned int)v134;
    if ( (unsigned int)v134 < 8 )
    {
      if ( (unsigned int)(8 - (_DWORD)v134) >= 6 )
      {
        v64 = (float *)&v6[16 * (unsigned int)v134 + 412];
        v65 = (float *)&v6[32 * (unsigned int)v134 + 568 + 4 * v38];
        v66 = (2 - (int)v134) / 6u + 1;
        v67 = v66;
        v63 = (unsigned int)v134 + 6 * v66;
        do
        {
          v68 = 0.0;
          if ( *((_BYTE *)v64 + 8) )
          {
            if ( !*((_BYTE *)v55 + 12) )
              v68 = FLOAT_3_4028235e38;
          }
          else if ( !*((_BYTE *)v55 + 12) )
          {
            v99 = (float)((float)(*v64 - v55[1]) * (float)(*v64 - v55[1]))
                + (float)((float)(*(v64 - 1) - *v55) * (float)(*(v64 - 1) - *v55));
            if ( v99 != 0.0 )
              v68 = (float)(v55[2] + v64[1]) / v99;
          }
          *(v65 - 8) = v68;
          v69 = 0.0;
          if ( !*((_BYTE *)v55 + 12) )
          {
            if ( *((_BYTE *)v64 + 24) )
            {
              v69 = FLOAT_3_4028235e38;
            }
            else
            {
              v100 = (float)((float)(v64[4] - v55[1]) * (float)(v64[4] - v55[1]))
                   + (float)((float)(v64[3] - *v55) * (float)(v64[3] - *v55));
              if ( v100 != 0.0 )
                v69 = (float)(v55[2] + v64[5]) / v100;
            }
          }
          *v65 = v69;
          v70 = 0.0;
          if ( !*((_BYTE *)v55 + 12) )
          {
            if ( *((_BYTE *)v64 + 40) )
            {
              v70 = FLOAT_3_4028235e38;
            }
            else
            {
              v101 = (float)((float)(v64[8] - v55[1]) * (float)(v64[8] - v55[1]))
                   + (float)((float)(v64[7] - *v55) * (float)(v64[7] - *v55));
              if ( v101 != 0.0 )
                v70 = (float)(v55[2] + v64[9]) / v101;
            }
          }
          v65[8] = v70;
          v71 = 0.0;
          if ( !*((_BYTE *)v55 + 12) )
          {
            if ( *((_BYTE *)v64 + 56) )
            {
              v71 = FLOAT_3_4028235e38;
            }
            else
            {
              v102 = (float)((float)(v64[12] - v55[1]) * (float)(v64[12] - v55[1]))
                   + (float)((float)(v64[11] - *v55) * (float)(v64[11] - *v55));
              if ( v102 != 0.0 )
                v71 = (float)(v55[2] + v64[13]) / v102;
            }
          }
          v65[16] = v71;
          v72 = 0.0;
          if ( !*((_BYTE *)v55 + 12) )
          {
            if ( *((_BYTE *)v64 + 72) )
            {
              v72 = FLOAT_3_4028235e38;
            }
            else
            {
              v103 = (float)((float)(v64[16] - v55[1]) * (float)(v64[16] - v55[1]))
                   + (float)((float)(v64[15] - *v55) * (float)(v64[15] - *v55));
              if ( v103 != 0.0 )
                v72 = (float)(v55[2] + v64[17]) / v103;
            }
          }
          v65[24] = v72;
          v73 = 0.0;
          if ( *((_BYTE *)v64 + 88) )
          {
            if ( !*((_BYTE *)v55 + 12) )
              v73 = FLOAT_3_4028235e38;
          }
          else if ( !*((_BYTE *)v55 + 12) )
          {
            v104 = (float)((float)(v64[20] - v55[1]) * (float)(v64[20] - v55[1]))
                 + (float)((float)(v64[19] - *v55) * (float)(v64[19] - *v55));
            if ( v104 != 0.0 )
              v73 = (float)(v55[2] + v64[21]) / v104;
          }
          v65[32] = v73;
          v64 += 24;
          v65 += 48;
          --v67;
        }
        while ( v67 );
      }
      if ( (unsigned int)v63 < 8 )
      {
        v74 = (__int64)&v6[16 * (unsigned int)v63 + 412];
        v75 = (unsigned int)(8 - v63);
        v76 = (float *)&v6[32 * v63 + 536 + 4 * v38];
        do
        {
          v77 = 0.0;
          if ( *(_BYTE *)(v74 + 8) )
          {
            if ( !*((_BYTE *)v55 + 12) )
              v77 = FLOAT_3_4028235e38;
          }
          else if ( !*((_BYTE *)v55 + 12) )
          {
            v105 = (float)((float)(*(float *)v74 - v55[1]) * (float)(*(float *)v74 - v55[1]))
                 + (float)((float)(*(float *)(v74 - 4) - *v55) * (float)(*(float *)(v74 - 4) - *v55));
            if ( v105 != 0.0 )
              v77 = (float)(v55[2] + *(float *)(v74 + 4)) / v105;
          }
          *v76 = v77;
          v74 += 16LL;
          v76 += 8;
          --v75;
        }
        while ( v75 );
      }
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v6[v40 + 152], &v6[v62 + 152]);
    v79[1] = 0LL;
    v80 = &v6[v62 + 280];
    *v79 = 0LL;
    if ( *(char **)v80 != v80 )
    {
      **(_QWORD **)&v6[16 * v38 + 288] = *(_QWORD *)v80;
      *(_QWORD *)(*(_QWORD *)v80 + 8LL) = *(_QWORD *)&v6[16 * v38 + 288];
      **(_QWORD **)&v6[16 * v78 + 288] = &v6[v40 + 280];
      *(_QWORD *)&v6[16 * v38 + 288] = *(_QWORD *)&v6[16 * v78 + 288];
      *((_QWORD *)v80 + 1) = v80;
      *(_QWORD *)v80 = v80;
    }
    v39 = 1;
LABEL_49:
    v42 = v38 + 1;
    v38 = 0;
    if ( !v39 )
      v38 = v42;
  }
  while ( v38 < 8 );
  if ( *((float *)v6 + 8) <= *((float *)v6 + 6) || *((float *)v6 + 9) <= *((float *)v6 + 7) )
  {
    v43 = v133;
  }
  else
  {
    v43 = 1;
    *(_OWORD *)(v6 + 1116) = *(_OWORD *)(v6 + 24);
    *((_DWORD *)v6 + 311) = 0;
  }
  if ( *((float *)v6 + 12) > *((float *)v6 + 10) && *((float *)v6 + 13) > *((float *)v6 + 11) )
  {
    v81 = 2LL * v43;
    v82 = v43++;
    *(_OWORD *)&v6[8 * v81 + 1116] = *(_OWORD *)(v6 + 40);
    *(_DWORD *)&v6[4 * v82 + 1244] = 1;
  }
  if ( *((float *)v6 + 16) > *((float *)v6 + 14) && *((float *)v6 + 17) > *((float *)v6 + 15) )
  {
    v83 = 2LL * v43;
    v84 = v43++;
    *(_OWORD *)&v6[8 * v83 + 1116] = *(_OWORD *)(v6 + 56);
    *(_DWORD *)&v6[4 * v84 + 1244] = 2;
  }
  if ( *((float *)v6 + 20) > *((float *)v6 + 18) && *((float *)v6 + 21) > *((float *)v6 + 19) )
  {
    v85 = 2LL * v43;
    v86 = v43++;
    *(_OWORD *)&v6[8 * v85 + 1116] = *(_OWORD *)(v6 + 72);
    *(_DWORD *)&v6[4 * v86 + 1244] = 3;
  }
  if ( *((float *)v6 + 24) > *((float *)v6 + 22) && *((float *)v6 + 25) > *((float *)v6 + 23) )
  {
    v87 = 2LL * v43;
    v88 = v43++;
    *(_OWORD *)&v6[8 * v87 + 1116] = *(_OWORD *)(v6 + 88);
    *(_DWORD *)&v6[4 * v88 + 1244] = 4;
  }
  if ( *((float *)v6 + 28) > *((float *)v6 + 26) && *((float *)v6 + 29) > *((float *)v6 + 27) )
  {
    v89 = 2LL * v43;
    v90 = v43++;
    *(_OWORD *)&v6[8 * v89 + 1116] = *(_OWORD *)(v6 + 104);
    *(_DWORD *)&v6[4 * v90 + 1244] = 5;
  }
  if ( *((float *)v6 + 32) > *((float *)v6 + 30) && *((float *)v6 + 33) > *((float *)v6 + 31) )
  {
    v91 = 2LL * v43;
    v92 = v43++;
    *(_OWORD *)&v6[8 * v91 + 1116] = *(_OWORD *)(v6 + 120);
    *(_DWORD *)&v6[4 * v92 + 1244] = 6;
  }
  if ( *((float *)v6 + 36) > *((float *)v6 + 34) && *((float *)v6 + 37) > *((float *)v6 + 35) )
  {
    v93 = 2LL * v43;
    v94 = v43++;
    *(_OWORD *)&v6[8 * v93 + 1116] = *(_OWORD *)(v6 + 136);
    *(_DWORD *)&v6[4 * v94 + 1244] = 7;
  }
  v5 = v135;
LABEL_62:
  *((_DWORD *)v6 + 319) = v43;
  v20 = v6[2881] == 0;
  v6[2886] = 1;
  if ( v20 )
  {
    if ( v6[2882] )
    {
      CDirtyRegion::SetFullDirty((CDirtyRegion *)v6);
      v6[2882] = 0;
    }
  }
  else
  {
    CDirtyRegion::SetRedrawRects((CDirtyRegion *)v6);
    CDirtyRegion::SetFullDirty((CDirtyRegion *)v6);
    *(_WORD *)(v6 + 2881) = 0;
  }
  v3 = v130;
  *((_QWORD *)v5 + 165) = v140;
LABEL_66:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, v5);
LABEL_68:
  *((_BYTE *)v5 + 33) = 0;
  if ( v3 < 0 )
  {
LABEL_73:
    if ( v6 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else if ( v6 )
  {
    for ( j = *((_DWORD *)v5 + 326); j > 0; --j )
    {
      v45 = *(_QWORD *)(*((_QWORD *)v5 + 160) + 8LL * (unsigned int)(j - 1));
      (*(void (__fastcall **)(__int64, struct CVisualTree *, char *))(*(_QWORD *)v45 + 24LL))(v45, v5, v6);
    }
    v3 = v130;
    goto LABEL_73;
  }
LABEL_75:
  v46 = (volatile signed __int32 *)v131;
  if ( v131 )
  {
    v131 = 0LL;
    if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v46 + 16LL))(v46, 1LL);
  }
  return (unsigned int)v3;
}
