/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180054DD0
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x180015820 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B0D60 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800D44A8 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 *     McTemplateU0xq @ 0x18015ED28 (McTemplateU0xq.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18016FC08 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x1801828B4 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x18018336C (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180185400 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x1801856BC (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x1801861A8 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801866AC (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18018724C (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180187320 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?RectIntersectsDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018739C (-RectIntersectsDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x180187DA8 (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        unsigned __int64 a2,
        const struct CDirtyRegion *a3,
        struct COcclusionContext *a4,
        bool *a5)
{
  bool *v5; // r14
  __int64 v6; // r15
  const struct CVisualTree *v8; // r12
  char v10; // si
  char v11; // r14
  __int64 v12; // r9
  bool v13; // cf
  char *v14; // rbx
  bool v15; // al
  __int64 v16; // rsi
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  float v24; // xmm2_4
  _QWORD *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // rcx
  unsigned int v30; // r12d
  void *v31; // rbx
  void *v32; // rax
  HANDLE ProcessHeap; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  struct COcclusionInfo *OcclusionInfo; // r12
  unsigned int v38; // eax
  unsigned __int8 IsOccluded; // al
  unsigned __int8 v40; // r12
  _QWORD *i; // rax
  __int64 v42; // rdx
  int OverlayCandidateIndex; // eax
  __int64 v44; // r10
  int v45; // ecx
  __int64 v46; // r8
  _DWORD *v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // r15
  bool IsEligibleForOverlays; // al
  __int64 v51; // rbx
  __int64 v52; // r13
  char v53; // cl
  __int128 v54; // xmm0
  __int64 v55; // rax
  __int64 v56; // r9
  float *v57; // r10
  float v58; // xmm2_4
  __int128 v59; // xmm0
  char v60; // [rsp+20h] [rbp-E0h]
  const struct CVisualTree *v61; // [rsp+28h] [rbp-D8h] BYREF
  bool *v62; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v63; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v64[256]; // [rsp+40h] [rbp-C0h] BYREF
  float v65; // [rsp+140h] [rbp+40h] BYREF
  float v66; // [rsp+144h] [rbp+44h]
  float v67; // [rsp+148h] [rbp+48h]
  float v68; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v69[16]; // [rsp+150h] [rbp+50h] BYREF

  v5 = a5;
  LODWORD(v6) = 0;
  v8 = (const struct CVisualTree *)a2;
  v61 = (const struct CVisualTree *)a2;
  v10 = 0;
  v62 = a5;
  v60 = 0;
  if ( *((_BYTE *)this + 13432) && a4 )
  {
    v11 = 1;
    v12 = *((unsigned int *)a3 + 319);
    v13 = *((_BYTE *)a3 + 2883) != 0;
    *((_DWORD *)this + 3255) = 0;
    v14 = (char *)a3 + (v13 ? 2860LL : 1116LL);
    if ( *((_BYTE *)a3 + 2883) )
      goto LABEL_7;
    if ( *((_BYTE *)a3 + 2886) )
    {
      v15 = *((_DWORD *)a3 + 319) == 0;
    }
    else
    {
      LODWORD(a2) = 0;
      while ( IsEmpty((const struct D2D_RECT_F *)((char *)a3 + 16 * (unsigned int)a2 + 24)) )
      {
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 >= 8 )
          goto LABEL_21;
      }
      v15 = 0;
    }
    if ( !v15 )
    {
LABEL_7:
      if ( (_DWORD)v12 )
      {
        v16 = 0LL;
        v6 = v12;
        do
        {
          v18 = *((float *)this + 6);
          v19 = *(float *)&v14[v16 + 4];
          v20 = *(float *)&v14[v16 + 8];
          v21 = *(float *)&v14[v16 + 12];
          v65 = *(float *)&v14[v16];
          v17 = v65;
          v66 = v19;
          v67 = v20;
          v68 = v21;
          if ( v18 > v65 )
          {
            v65 = v18;
            v17 = v18;
          }
          v22 = *((float *)this + 7);
          if ( v22 > v19 )
          {
            v66 = *((float *)this + 7);
            v19 = v22;
          }
          v23 = *((float *)this + 8);
          if ( v20 > v23 )
          {
            v67 = *((float *)this + 8);
            v20 = v23;
          }
          v24 = *((float *)this + 9);
          if ( v21 > v24 )
          {
            v68 = *((float *)this + 9);
            v21 = v24;
          }
          if ( v20 <= v17 || v21 <= v19 )
          {
            v68 = 0.0;
            v67 = 0.0;
            v66 = 0.0;
            v65 = 0.0;
          }
          else
          {
            CMILMatrix::Transform2DBoundsHelper<0>((COverlayContext *)((char *)this + 12816));
            ++*((_DWORD *)this + 3255);
          }
          v16 += 16LL;
          --v6;
        }
        while ( v6 );
      }
    }
LABEL_21:
    if ( *((_BYTE *)this + 13428) == (_BYTE)v6 || *((_DWORD *)this + 36) <= 2u || *((_DWORD *)this + 37) <= 2u )
    {
      if ( *((_DWORD *)this + 3304) > (int)v6 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, const struct CDirtyRegion *, __int64))(**((_QWORD **)this + 1648) + 40LL))(
               *((_QWORD *)this + 1648),
               a2,
               a3,
               v12) )
        {
          v35 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1648) + 40LL))(*((_QWORD *)this + 1648));
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v35 + 144) + 88LL))(v35 + 144) )
          {
            if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1648) + 64LL))(*((_QWORD *)this + 1648)) > 2
              && CCommonRegistryData::m_dwOverlayTestMode == (_DWORD)v6 )
            {
              detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 192);
            }
          }
        }
      }
    }
    else if ( COverlayContext::OverlaysEnabled(this) && *((_DWORD *)this + 3304) > (int)v6 && *((int *)this + 3305) >= 3 )
    {
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1644) + 8LL))((char *)this + 13152);
    }
    v25 = (_QWORD *)((char *)this + 192);
    v26 = *((_QWORD *)this + 24);
    if ( (unsigned int)((*((_QWORD *)this + 25) - v26) >> 8) )
    {
      do
      {
        v36 = (unsigned __int64)(unsigned int)v6 << 8;
        OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v36 + v26 + 8), v8);
        if ( !OcclusionInfo )
          goto LABEL_65;
        CMILMatrix::Transform2DBoundsHelper<0>((COverlayContext *)((char *)this + 12884));
        v38 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
        IsOccluded = COcclusionContext::IsOccluded(a4, v69, 0LL, v38);
        v40 = IsOccluded;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xq(
            *v25,
            &EVTDESC_OVERLAY_CHECKOCCLUSION,
            *(_QWORD *)(*(_QWORD *)(v36 + *v25 + 24) + 32LL),
            IsOccluded);
        if ( v40 )
        {
LABEL_71:
          v63 = v36 + *v25;
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
            (char *)this + 192,
            &v65,
            &v63);
        }
        else
        {
LABEL_65:
          for ( i = (_QWORD *)*((_QWORD *)this + 1054); i != *((_QWORD **)this + 1055); i += 32 )
          {
            v42 = *v25;
            if ( *(_QWORD *)(v36 + *v25 + 24) == i[3]
              && (*(_QWORD *)(v36 + v42 + 8) != i[1] || *(_QWORD *)(v36 + v42 + 16) != i[2]) )
            {
              goto LABEL_71;
            }
          }
          LODWORD(v6) = v6 + 1;
        }
        v26 = *v25;
        v8 = v61;
      }
      while ( (unsigned int)v6 < (unsigned int)((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8) );
    }
    v27 = *((_QWORD *)this + 1054);
    v28 = *((_QWORD *)this + 1055);
    while ( v27 != v28 )
    {
      OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                this,
                                *(struct CVisual **)(v27 + 8),
                                *(struct ISwapChainContent **)(v27 + 16),
                                *(_QWORD *)(v27 + 32));
      if ( OverlayCandidateIndex == -1 )
      {
        if ( !(unsigned __int8)COverlayContext::RectIntersectsDirty(this, v27 + 152) )
        {
          v45 = ((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8) - 1;
          if ( (unsigned int)((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8) )
          {
            v46 = v45;
            v47 = (_DWORD *)(((__int64)v45 << 8) + *v25 + 228LL);
            do
            {
              if ( *((_BYTE *)v47 - 28) && *v47 < *(_DWORD *)(v27 + 228) )
                break;
              --v45;
              --v46;
              v47 -= 64;
            }
            while ( v46 != -1 );
          }
          v61 = (const struct CVisualTree *)(*v25 + ((v45 + 1LL) << 8));
          v48 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
                  (COverlayContext::OverlayPlaneInfo *)v64,
                  (const struct COverlayContext::OverlayPlaneInfo *)v27);
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
            (char *)this + 192,
            &v65,
            &v61,
            v48);
        }
      }
      else
      {
        COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
          (COverlayContext::OverlayPlaneInfo *)(((__int64)OverlayCandidateIndex << 8) + *v25),
          (const struct COverlayContext::OverlayPlaneInfo *)v27);
        COverlayContext::ComparePlaneAttributes(
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v44 + *v25 + 40LL),
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v27 + 40),
          (bool *)(v44 + *v25 + 224LL),
          (bool *)(v44 + *v25 + 225LL));
      }
      v27 += 256LL;
    }
    v29 = *v25;
    v30 = 0;
    if ( !(unsigned int)((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8) )
    {
LABEL_27:
      if ( (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 36) <= 1u) && !*((_DWORD *)this + 42)
        || CCommonRegistryData::m_fUniformSpaceDpiMode
        || *((_BYTE *)this + 13429)
        || *((_BYTE *)this + 13431)
        || !CMILMatrix::IsTranslateAndScale<1>((__int64)this + 12816)
        || v57[10] != 1.0
        || *v57 < 1.0
        || (v58 = v57[5], v58 < 1.0)
        || *v57 <= 1.0 && v58 <= 1.0 )
      {
        v11 = 0;
      }
      v10 = v60;
      *((_BYTE *)this + 13441) = v11;
      goto LABEL_32;
    }
    while ( 1 )
    {
      v49 = (unsigned __int64)v30 << 8;
      IsEligibleForOverlays = COverlayContext::IsEligibleForOverlays(
                                this,
                                (const struct COverlayContext::OverlayPlaneInfo *)(v49 + v29));
      v51 = *((_QWORD *)this + 24);
      v52 = v49 + v51;
      v53 = *(_BYTE *)(v49 + v51 + 200);
      if ( !IsEligibleForOverlays )
        break;
      if ( v53 || (unsigned __int8)COverlayContext::RectContainedInDirty(this, v52 + 152) )
      {
        ++v30;
        goto LABEL_98;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v55 = *(_QWORD *)(v52 + 24);
        v56 = 6LL;
LABEL_95:
        McTemplateU0xq(
          *(unsigned int *)(v55 + 40),
          &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
          *(unsigned int *)(v55 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v55 + 40)) << 32),
          v56);
      }
LABEL_96:
      v61 = (const struct CVisualTree *)(v49 + *v25);
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
        (char *)this + 192,
        &v65,
        &v61);
LABEL_98:
      v29 = *v25;
      if ( v30 >= (unsigned int)((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8) )
        goto LABEL_27;
    }
    if ( v53 && !(unsigned __int8)COverlayContext::RectContainedInDirty(this, v52 + 152) )
    {
      v54 = *(_OWORD *)((char *)this + 56);
      *((_DWORD *)this + 3255) = 1;
      v60 = 1;
      *((_OWORD *)this + 814) = v54;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      goto LABEL_96;
    v55 = *(_QWORD *)(v49 + v51 + 24);
    v56 = 5LL;
    goto LABEL_95;
  }
  if ( ((*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) & 0xFFFFFFFFFFFFFF00uLL) != 0
    || *((_BYTE *)this + 13439)
    || *((_QWORD *)this + 1663) )
  {
    v59 = *(_OWORD *)((char *)this + 56);
    *((_BYTE *)this + 13441) = 0;
    *((_DWORD *)this + 3255) = 1;
    v10 = 1;
    *((_OWORD *)this + 814) = v59;
LABEL_32:
    v5 = v62;
  }
  *((_BYTE *)this + 13432) = 0;
  **((_DWORD **)this + 1664) = 0;
  *((_BYTE *)this + 13448) = 0;
  v31 = (void *)*((_QWORD *)this + 1673);
  v32 = (void *)*((_QWORD *)this + 1674);
  *((_DWORD *)this + 3352) = 0;
  if ( v31 != v32 )
  {
    if ( v31 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v31);
      v32 = (void *)*((_QWORD *)this + 1674);
    }
    *((_QWORD *)this + 1673) = v32;
    *((_DWORD *)this + 3351) = *((_DWORD *)this + 3350);
  }
  *v5 = v10;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
  return 0LL;
}
