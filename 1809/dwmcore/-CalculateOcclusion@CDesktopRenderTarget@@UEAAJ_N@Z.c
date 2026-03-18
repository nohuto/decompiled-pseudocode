/*
 * XREFs of ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180049690 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180048EC8 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180049CC0 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$0.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18004A134 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18004AFC0 (-DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18005CB5C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetOcclusionInflation@CDirtyRegion@@QEBAMXZ @ 0x180065A7C (-GetOcclusionInflation@CDirtyRegion@@QEBAMXZ.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x180068294 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E760 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x18008EBAC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18008EBD4 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008ED30 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008EFE0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800D95D4 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE290 (-clear_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPl.c)
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE634 (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::CalculateOcclusion(CDesktopRenderTarget *this, bool a2)
{
  CDesktopRenderTarget *v2; // rdi
  bool v3; // r13
  int v4; // r14d
  unsigned int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r13
  int *v11; // r15
  int *v12; // rsi
  int *v13; // rsi
  unsigned int v14; // r8d
  unsigned int v15; // edx
  char v16; // al
  unsigned int v17; // ecx
  __int128 v18; // xmm1
  int v19; // eax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rcx
  char v23; // r12
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rax
  gsl::details *v28; // rcx
  int v29; // xmm0_4
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rsi
  COcclusionContext *v33; // r14
  __int64 v34; // rcx
  struct CDrawingContext **v35; // rbx
  int v36; // eax
  unsigned int v37; // ecx
  struct CDrawingContext *v38; // rbx
  COcclusionContext *v39; // rcx
  COverlayContext *v40; // rcx
  struct COcclusionContext *v41; // r9
  const struct CDirtyRegion *v42; // r8
  const struct CVisualTree *v43; // rdx
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  CDirtyRegion *v47; // rcx
  int v48; // eax
  unsigned int v49; // ecx
  void *v50; // r8
  bool v51; // zf
  bool v53; // [rsp+40h] [rbp-C0h] BYREF
  int v54; // [rsp+44h] [rbp-BCh]
  int v55; // [rsp+48h] [rbp-B8h]
  unsigned int v56; // [rsp+4Ch] [rbp-B4h]
  __int64 v57[2]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v58[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v59; // [rsp+A0h] [rbp-60h]
  _BYTE *v60; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v61; // [rsp+B8h] [rbp-48h]
  __int64 *v62; // [rsp+C0h] [rbp-40h]
  _BYTE v63[128]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v64; // [rsp+148h] [rbp+48h] BYREF

  v53 = a2;
  v60 = v63;
  v2 = this;
  LOBYTE(this) = 0;
  v61 = v63;
  LOBYTE(v54) = 0;
  v3 = a2;
  v62 = &v64;
  v4 = 0;
  if ( !*((_QWORD *)v2 - 6) || !*((_DWORD *)v2 + 8) )
    goto LABEL_77;
  v5 = 0;
  v6 = 1;
  v56 = 0;
  do
  {
    v7 = v5;
    LODWORD(this) = (unsigned __int8)this;
    v8 = *(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL * v5);
    if ( (*(_DWORD *)(v8 + 428) & 0x10000) != 0 )
      LODWORD(this) = 1;
    v55 = (int)this;
    if ( !v3 )
      goto LABEL_37;
    v9 = *(_QWORD *)(v8 + 848);
    if ( !v9 )
      goto LABEL_37;
    v10 = v8 + 220;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 224LL))(v8, 1LL)
      || *(_BYTE *)(*(_QWORD *)(v8 + 16) + 1257LL) )
    {
      v11 = (int *)(*(_QWORD *)(v8 + 168) + 120LL);
    }
    else
    {
      v11 = (int *)(v8 + 468);
    }
    v12 = *(int **)(*((_QWORD *)v2 + 1) + 8 * v7);
    if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v12 + 224LL))(v12)
      || *(_BYTE *)(*((_QWORD *)v12 + 2) + 1257LL) )
    {
      v13 = (int *)(*((_QWORD *)v12 + 21) + 104LL);
    }
    else
    {
      v13 = v12 + 121;
    }
    v4 = 0;
    if ( (__int64)(*(_QWORD *)(v9 + 200) - *(_QWORD *)(v9 + 192)) >> 8 )
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
        v9 + 192,
        0LL);
    *(float *)(v9 + 56) = (float)*v13;
    *(float *)(v9 + 60) = (float)v13[1];
    *(float *)(v9 + 64) = (float)v13[2];
    *(float *)(v9 + 68) = (float)v13[3];
    *(float *)(v9 + 24) = (float)*v11;
    *(float *)(v9 + 28) = (float)v11[1];
    *(float *)(v9 + 32) = (float)v11[2];
    *(float *)(v9 + 36) = (float)v11[3];
    *(_DWORD *)(v9 + 72) = v11[2] - *v11;
    *(_DWORD *)(v9 + 76) = v11[3] - v11[1];
    if ( qword_180308258 )
    {
      v14 = *((_DWORD *)qword_180308258 + 18);
      v15 = 0;
      if ( v14 )
      {
        while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_180308258 + 6) + 8LL * v15) + 320LL) )
        {
          if ( ++v15 >= v14 )
            goto LABEL_22;
        }
LABEL_25:
        v16 = 0;
        goto LABEL_26;
      }
    }
LABEL_22:
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 13440) + 64LL) + 100LL) || !*(_QWORD *)(v9 + 16) )
      goto LABEL_25;
    v16 = 1;
LABEL_26:
    *(_BYTE *)(v9 + 13416) = v16;
    **(_DWORD **)(v9 + 13296) = 0;
    *(_DWORD *)(v9 + 13392) = 0;
    DynArrayImpl<0>::ShrinkToSize(v9 + 13368, 16LL);
    *(_BYTE *)(v9 + 13433) = 1;
    *(_OWORD *)(v9 + 12816) = *(_OWORD *)v10;
    *(_OWORD *)(v9 + 12832) = *(_OWORD *)(v10 + 16);
    *(_OWORD *)(v9 + 12848) = *(_OWORD *)(v10 + 32);
    *(_OWORD *)(v9 + 12864) = *(_OWORD *)(v10 + 48);
    *(_DWORD *)(v9 + 12880) = *(_DWORD *)(v10 + 64);
    if ( CMILMatrix::IsIdentity<0>(v10) )
    {
      *(_OWORD *)(v9 + 12884) = _xmm;
      *(_WORD *)(v9 + 12948) = 32085;
      *(_OWORD *)(v9 + 12900) = _xmm;
      *(_OWORD *)(v9 + 12916) = _xmm;
      *(_OWORD *)(v9 + 12932) = _xmm;
    }
    else
    {
      v59 = 0;
      if ( CMILMatrix::SetToInverse((CMILMatrix *)v58, (const struct CMILMatrix *)v10) )
      {
        v18 = v58[1];
        v19 = v59;
        *(_OWORD *)(v9 + 12884) = v58[0];
        v20 = v58[2];
        *(_OWORD *)(v9 + 12900) = v18;
        v21 = v58[3];
        *(_OWORD *)(v9 + 12916) = v20;
        *(_OWORD *)(v9 + 12932) = v21;
        *(_DWORD *)(v9 + 12948) = v19;
      }
      else
      {
        v4 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2003304441, 0x171u);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
        *(unsigned __int8 *)(v9 + 13416));
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v4, 0x7F9u);
      goto LABEL_77;
    }
    if ( *(_BYTE *)(v9 + 13416) )
      *(_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   &v60,
                   (v61 - v60) >> 3,
                   1LL) = v9;
    v3 = v53;
    v6 = 1;
    LOBYTE(this) = v55;
LABEL_37:
    v5 = v56 + 1;
    v56 = v5;
  }
  while ( v5 < *((_DWORD *)v2 + 8) );
  if ( !(_BYTE)this || CDirtyRegion::IsEmpty(*((CDirtyRegion **)v2 + 27)) )
  {
    v23 = 0;
  }
  else
  {
    CComposition::DDAExcludeVisualSetExclude(*((CComposition **)v2 - 19), 1);
    v23 = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v22, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (char *)v2 - 168, 0LL);
    if ( !*((_QWORD *)v2 + 28) )
    {
      v24 = COcclusionContext::Create(*((struct CComposition **)v2 - 19), (struct COcclusionContext **)v2 + 28);
      v4 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x811u);
        goto LABEL_76;
      }
    }
    v26 = (__int64)v60;
    v27 = gsl::narrow<__int64,unsigned __int64>((v61 - v60) >> 3);
    v57[0] = v27;
    if ( v27 < 0 || (v57[1] = v26) == 0 && v27 )
    {
      gsl::details::terminate(v28);
      JUMPOUT(0x180049627LL);
    }
    *(float *)&v29 = CDirtyRegion::GetOcclusionInflation(*((CDirtyRegion **)v2 + 27));
    v30 = COcclusionContext::Compute(*((COcclusionContext **)v2 + 28), v29, 0, 0LL, (__int64)v57);
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x821u);
      SAFE_DELETE<COcclusionContext>((char *)v2 + 224);
    }
    v4 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v31, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (char *)v2 - 168, 0LL);
  }
  v32 = 0LL;
  if ( *((_DWORD *)v2 + 8) )
  {
    do
    {
      v33 = (COcclusionContext *)*((_QWORD *)v2 + 28);
      v34 = *(_QWORD *)(*((_QWORD *)v2 + 1) + 8 * v32);
      v35 = (struct CDrawingContext **)(v34 + 112);
      if ( !*(_QWORD *)(v34 + 112) )
      {
        v36 = CDrawingContext::Create(*(struct CComposition **)(v34 + 16), v35);
        if ( v36 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x3Eu);
      }
      v38 = *v35;
      v39 = (COcclusionContext *)*((_QWORD *)v38 + 785);
      if ( v33 != v39 && v39 )
      {
        COcclusionContext::`scalar deleting destructor'(v39, v6);
        *((_QWORD *)v38 + 785) = 0LL;
      }
      *((_QWORD *)v38 + 784) = v33;
      if ( !v33 )
        *((_BYTE *)v38 + 6347) = 0;
      v4 = 0;
      if ( v3 && (v40 = *(COverlayContext **)(*(_QWORD *)(*((_QWORD *)v2 + 1) + 8 * v32) + 848LL)) != 0LL )
      {
        v41 = (struct COcclusionContext *)*((_QWORD *)v2 + 28);
        v42 = (const struct CDirtyRegion *)*((_QWORD *)v2 + 27);
        v43 = (const struct CVisualTree *)*((_QWORD *)v2 - 6);
        v53 = 0;
        v44 = COverlayContext::EndOverlayCandidateCollection(v40, v43, v42, v41, &v53);
        v4 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x847u);
          goto LABEL_75;
        }
        v46 = (unsigned __int8)v54;
        if ( v53 )
          v46 = 1;
        v54 = v46;
      }
      else
      {
        LOBYTE(v46) = v54;
      }
      v32 = (unsigned int)(v32 + 1);
    }
    while ( (unsigned int)v32 < *((_DWORD *)v2 + 8) );
    if ( (_BYTE)v46 )
    {
      v47 = (CDirtyRegion *)*((_QWORD *)v2 + 27);
      if ( !*((_BYTE *)v47 + 2883) )
      {
        CDirtyRegion::SetFullDirty(v47);
        v48 = CDesktopRenderTarget::CalculateOcclusion(v2, 0);
        v4 = v48;
        if ( v48 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x859u);
      }
    }
  }
LABEL_75:
  if ( v23 )
LABEL_76:
    CComposition::DDAExcludeVisualSetExclude(*((CComposition **)v2 - 19), 0);
LABEL_77:
  if ( (v61 - v60) >> 3 )
    detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
      &v60,
      0LL);
  v50 = v60;
  v51 = v60 == v63;
  v60 = 0LL;
  if ( v51 )
    v50 = 0LL;
  if ( v50 )
    HeapFree(WPF::g_processHeap, 0, v50);
  return (unsigned int)v4;
}
