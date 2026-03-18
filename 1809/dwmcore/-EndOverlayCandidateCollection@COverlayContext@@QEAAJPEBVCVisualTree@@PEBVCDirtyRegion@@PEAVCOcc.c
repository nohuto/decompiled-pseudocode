/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18004A134
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x180013D28 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x180076110 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D7F38 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18015AE90 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x180167BF8 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x1801683C0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x18016A534 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x18016A83C (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x18016B328 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016B83C (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18016C3E4 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016C4B8 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?RectIntersectsDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016C534 (-RectIntersectsDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x18016CBBC (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3,
        struct COcclusionContext *a4,
        bool *a5)
{
  __int64 v5; // r15
  const struct CVisualTree *v7; // r12
  char v9; // r14
  __int64 v10; // r9
  bool v11; // cf
  char *v12; // rbx
  bool v13; // al
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rcx
  unsigned int v19; // r13d
  __int64 v21; // rsi
  float v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm2_4
  float v29; // xmm2_4
  __int128 v30; // xmm0
  unsigned int v31; // edx
  int v32; // edx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  unsigned __int64 v34; // rbx
  struct COcclusionInfo *OcclusionInfo; // r12
  unsigned int v36; // eax
  unsigned __int8 IsOccluded; // al
  unsigned __int8 v38; // r12
  _QWORD *i; // rax
  __int64 v40; // rdx
  int OverlayCandidateIndex; // eax
  __int64 v42; // r10
  int v43; // ecx
  __int64 v44; // r8
  _DWORD *v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // r12
  bool IsEligibleForOverlays; // al
  __int64 v49; // r15
  __int64 v50; // rbx
  __int128 v51; // xmm0
  float *v52; // r10
  float v53; // xmm2_4
  char v54; // [rsp+20h] [rbp-E0h]
  const struct CVisualTree *v55; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v56; // [rsp+30h] [rbp-D0h] BYREF
  bool *v57; // [rsp+38h] [rbp-C8h]
  _BYTE v58[256]; // [rsp+40h] [rbp-C0h] BYREF
  float v59; // [rsp+140h] [rbp+40h] BYREF
  float v60; // [rsp+144h] [rbp+44h]
  float v61; // [rsp+148h] [rbp+48h]
  float v62; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v63[16]; // [rsp+150h] [rbp+50h] BYREF

  LODWORD(v5) = 0;
  v7 = a2;
  v55 = a2;
  v57 = a5;
  v54 = 0;
  if ( *((_BYTE *)this + 13416) && a4 )
  {
    v9 = 1;
    v10 = *((unsigned int *)a3 + 319);
    v11 = *((_BYTE *)a3 + 2883) != 0;
    *((_DWORD *)this + 3255) = 0;
    v12 = (char *)a3 + (v11 ? 2860LL : 1116LL);
    if ( *((_BYTE *)a3 + 2883) )
      goto LABEL_21;
    if ( *((_BYTE *)a3 + 2886) )
    {
      v13 = *((_DWORD *)a3 + 319) == 0;
    }
    else
    {
      v31 = 0;
      while ( IsEmpty((const struct D2D_RECT_F *)((char *)a3 + 16 * v31 + 24)) )
      {
        v31 = v32 + 1;
        if ( v31 >= 8 )
          goto LABEL_7;
      }
      v13 = 0;
    }
    if ( !v13 )
    {
LABEL_21:
      if ( (_DWORD)v10 )
      {
        v21 = 0LL;
        v5 = v10;
        do
        {
          v23 = *((float *)this + 6);
          v24 = *(float *)&v12[v21 + 4];
          v25 = *(float *)&v12[v21 + 8];
          v26 = *(float *)&v12[v21 + 12];
          v59 = *(float *)&v12[v21];
          v22 = v59;
          v60 = v24;
          v61 = v25;
          v62 = v26;
          if ( v23 > v59 )
          {
            v59 = v23;
            v22 = v23;
          }
          v27 = *((float *)this + 7);
          if ( v27 > v24 )
          {
            v60 = *((float *)this + 7);
            v24 = v27;
          }
          v28 = *((float *)this + 8);
          if ( v25 > v28 )
          {
            v61 = *((float *)this + 8);
            v25 = v28;
          }
          v29 = *((float *)this + 9);
          if ( v26 > v29 )
          {
            v62 = *((float *)this + 9);
            v26 = v29;
          }
          if ( v25 <= v22 || v26 <= v24 )
          {
            v62 = 0.0;
            v61 = 0.0;
            v60 = 0.0;
            v59 = 0.0;
          }
          else
          {
            CMILMatrix::Transform2DBoundsHelper<0>((COverlayContext *)((char *)this + 12816));
            ++*((_DWORD *)this + 3255);
          }
          v21 += 16LL;
          --v5;
        }
        while ( v5 );
      }
    }
LABEL_7:
    if ( *((_BYTE *)this + 13412) && *((_DWORD *)this + 36) > 2u && *((_DWORD *)this + 37) > 2u )
    {
      if ( COverlayContext::OverlaysEnabled(this) && *((int *)this + 3304) > 0 && *((int *)this + 3305) >= 2 )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1644) + 8LL))((char *)this + 13152);
    }
    else if ( *((int *)this + 3304) > 0 )
    {
      if ( CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 1648)) )
      {
        RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                          + 1648));
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 18) + 88LL))((__int64)RenderingRealizationNoRef + 144) )
        {
          if ( *(_DWORD *)(*((_QWORD *)this + 1648) + 104LL) > 2u && !CCommonRegistryData::m_dwOverlayTestMode )
            detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 192);
        }
      }
    }
    v14 = (_QWORD *)((char *)this + 192);
    v15 = *((_QWORD *)this + 24);
    if ( (unsigned int)((*((_QWORD *)this + 25) - v15) >> 8) )
    {
      do
      {
        v34 = (unsigned __int64)(unsigned int)v5 << 8;
        OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v34 + v15 + 8), v7);
        if ( !OcclusionInfo )
          goto LABEL_63;
        CMILMatrix::Transform2DBoundsHelper<0>((COverlayContext *)((char *)this + 12884));
        v36 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
        IsOccluded = COcclusionContext::IsOccluded(a4, v63, 0LL, v36);
        v38 = IsOccluded;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xq(
            *v14,
            &EVTDESC_OVERLAY_CHECKOCCLUSION,
            *(_QWORD *)(*(_QWORD *)(v34 + *v14 + 24) + 32LL),
            IsOccluded);
        if ( v38 )
        {
LABEL_69:
          v56 = v34 + *v14;
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
            (char *)this + 192,
            &v59,
            &v56);
        }
        else
        {
LABEL_63:
          for ( i = (_QWORD *)*((_QWORD *)this + 1054); i != *((_QWORD **)this + 1055); i += 32 )
          {
            v40 = *v14;
            if ( *(_QWORD *)(v34 + *v14 + 24) == i[3]
              && (*(_QWORD *)(v34 + v40 + 8) != i[1] || *(_QWORD *)(v34 + v40 + 16) != i[2]) )
            {
              goto LABEL_69;
            }
          }
          LODWORD(v5) = v5 + 1;
        }
        v15 = *v14;
        v7 = v55;
      }
      while ( (unsigned int)v5 < (unsigned int)((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8) );
    }
    v16 = *((_QWORD *)this + 1054);
    v17 = *((_QWORD *)this + 1055);
    while ( v16 != v17 )
    {
      OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                this,
                                *(struct CVisual **)(v16 + 8),
                                *(struct ISwapChainContent **)(v16 + 16),
                                *(_QWORD *)(v16 + 32));
      if ( OverlayCandidateIndex == -1 )
      {
        if ( !(unsigned __int8)COverlayContext::RectIntersectsDirty(this, v16 + 152) )
        {
          v43 = ((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8) - 1;
          if ( (unsigned int)((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8) )
          {
            v44 = v43;
            v45 = (_DWORD *)(((__int64)v43 << 8) + *v14 + 228LL);
            do
            {
              if ( *((_BYTE *)v45 - 28) && *v45 < *(_DWORD *)(v16 + 228) )
                break;
              --v43;
              --v44;
              v45 -= 64;
            }
            while ( v44 != -1 );
          }
          v55 = (const struct CVisualTree *)(*v14 + ((v43 + 1LL) << 8));
          v46 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
                  (COverlayContext::OverlayPlaneInfo *)v58,
                  (const struct COverlayContext::OverlayPlaneInfo *)v16);
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
            (char *)this + 192,
            &v59,
            &v55,
            v46);
        }
      }
      else
      {
        COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
          (COverlayContext::OverlayPlaneInfo *)(((__int64)OverlayCandidateIndex << 8) + *v14),
          (const struct COverlayContext::OverlayPlaneInfo *)v16);
        COverlayContext::ComparePlaneAttributes(
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v42 + *v14 + 40LL),
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v16 + 40),
          (bool *)(v42 + *v14 + 224LL),
          (bool *)(v42 + *v14 + 225LL));
      }
      v16 += 256LL;
    }
    v18 = *v14;
    v19 = 0;
    if ( !(unsigned int)((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8) )
    {
LABEL_13:
      if ( (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 36) <= 1u) && !*((_DWORD *)this + 42)
        || *((_BYTE *)this + 13413)
        || *((_BYTE *)this + 13415)
        || !CMILMatrix::IsTranslateAndScale<1>((__int64)this + 12816)
        || v52[10] != 1.0
        || *v52 < 1.0
        || (v53 = v52[5], v53 < 1.0)
        || *v52 <= 1.0 && v53 <= 1.0 )
      {
        v9 = 0;
      }
      *((_BYTE *)this + 13425) = v9;
      goto LABEL_18;
    }
    while ( 1 )
    {
      v47 = (unsigned __int64)v19 << 8;
      IsEligibleForOverlays = COverlayContext::IsEligibleForOverlays(
                                this,
                                (const struct COverlayContext::OverlayPlaneInfo *)(v47 + v18));
      v49 = *((_QWORD *)this + 24);
      v50 = v47 + v49;
      if ( IsEligibleForOverlays )
      {
        if ( *(_BYTE *)(v50 + 200) || (unsigned __int8)COverlayContext::RectContainedInDirty(this, v50 + 152) )
        {
          ++v19;
          goto LABEL_93;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xq(
            *(_QWORD *)(*(_QWORD *)(v50 + 24) + 40LL),
            &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
            (unsigned int)*(_QWORD *)(*(_QWORD *)(v50 + 24) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v50 + 24) + 40LL)) << 32),
            6LL);
      }
      else
      {
        if ( *(_BYTE *)(v50 + 200) && !(unsigned __int8)COverlayContext::RectContainedInDirty(this, v50 + 152) )
        {
          v51 = *(_OWORD *)((char *)this + 56);
          *((_DWORD *)this + 3255) = 1;
          v54 = 1;
          *((_OWORD *)this + 814) = v51;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xq(
            *(_QWORD *)(*(_QWORD *)(v47 + v49 + 24) + 40LL),
            &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
            (unsigned int)*(_QWORD *)(*(_QWORD *)(v47 + v49 + 24) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v47 + v49 + 24) + 40LL)) << 32),
            5LL);
      }
      v55 = (const struct CVisualTree *)(v47 + *v14);
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
        (char *)this + 192,
        &v59,
        &v55);
LABEL_93:
      v18 = *v14;
      if ( v19 >= (unsigned int)((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8) )
        goto LABEL_13;
    }
  }
  if ( ((*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) & 0xFFFFFFFFFFFFFF00uLL) != 0
    || *((_BYTE *)this + 13423)
    || *((_QWORD *)this + 1661) )
  {
    v30 = *(_OWORD *)((char *)this + 56);
    *((_BYTE *)this + 13425) = 0;
    *((_DWORD *)this + 3255) = 1;
    *((_OWORD *)this + 814) = v30;
    v54 = 1;
  }
LABEL_18:
  *((_BYTE *)this + 13416) = 0;
  **((_DWORD **)this + 1662) = 0;
  *((_BYTE *)this + 13433) = 0;
  *((_DWORD *)this + 3348) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 13368, 16LL);
  *v57 = v54;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
  return 0LL;
}
