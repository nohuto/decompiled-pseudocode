/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801690E4
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012E74 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029E60 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18006B8EC (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x18008C7F4 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800A396C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A60E4 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800AB504 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N88888$$T@Z @ 0x180167C54 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurface.c)
 *     ??$make_shared@VCRegion@@$$V@std@@YA?AV?$shared_ptr@VCRegion@@@0@XZ @ 0x180167DEC (--$make_shared@VCRegion@@$$V@std@@YA-AV-$shared_ptr@VCRegion@@@0@XZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180168764 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18016A7E4 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N3@Z @ 0x18016B59C (-IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUDXGI_MULTIPLA.c)
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18016B6F0 (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXG.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x18016BE50 (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18016C3E4 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z @ 0x18016C508 (-RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x18016C768 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016C870 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     McTemplateU0xddddd @ 0x18016CF94 (McTemplateU0xddddd.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq @ 0x18016D050 (McTemplateU0xdddddddqqddddddddddddqqq.c)
 *     McTemplateU0xddqqddddddddddddqqq @ 0x18016D2C0 (McTemplateU0xddqqddddddddddddqqq.c)
 *     McTemplateU0xqqdddd @ 0x18016D660 (McTemplateU0xqqdddd.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801793A4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x1801BC674 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        struct CVisual *a2,
        struct ISwapChainContent *a3,
        float *a4,
        float *a5,
        __int64 a6,
        DXGI_MODE_ROTATION a7,
        int a8,
        char a9,
        bool a10)
{
  int v10; // ebx
  struct ISwapChainContent *v11; // rsi
  float v14; // xmm0_4
  float v15; // eax
  double v16; // xmm0_8
  int v17; // eax
  double v18; // xmm0_8
  int v19; // eax
  double v20; // xmm0_8
  int v21; // eax
  double v22; // xmm0_8
  int v23; // eax
  double v24; // xmm0_8
  int v25; // eax
  double v26; // xmm0_8
  int v27; // eax
  double v28; // xmm0_8
  int v29; // eax
  LONG v30; // eax
  double v31; // xmm0_8
  int v32; // eax
  int v33; // eax
  enum DXGI_COLOR_SPACE_TYPE v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // eax
  bool v37; // cc
  int updated; // eax
  __int64 v39; // rcx
  LONG **v40; // r14
  const struct FastRegion::Internal::CRgnData *v41; // rcx
  char v42; // r12
  char v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdi
  std::_Ref_count_base *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rbx
  _DWORD *v49; // r15
  char v50; // r14
  char v51; // si
  char v52; // di
  unsigned __int8 v53; // al
  int v54; // edx
  int v55; // ecx
  int v56; // r15d
  int v57; // ebx
  int RectangleCount; // eax
  int v59; // ecx
  void *v60; // rdx
  int v61; // edx
  int v62; // ecx
  int v63; // r9d
  char v64; // al
  char *v65; // r12
  enum DXGI_COLOR_SPACE_TYPE v66; // ecx
  __int64 v67; // rbx
  std::_Ref_count_base *v68; // rax
  int v69; // r15d
  __int64 *v70; // rax
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // edx
  int v75; // ecx
  int v77; // [rsp+20h] [rbp-140h]
  __int64 v78; // [rsp+28h] [rbp-138h]
  bool v79; // [rsp+30h] [rbp-130h]
  float v80; // [rsp+E0h] [rbp-80h]
  int v81; // [rsp+E0h] [rbp-80h]
  char v82; // [rsp+E4h] [rbp-7Ch]
  char v83; // [rsp+E5h] [rbp-7Bh]
  bool IsIntelWorkaroundNeeded; // [rsp+E6h] [rbp-7Ah]
  int v85; // [rsp+E8h] [rbp-78h] BYREF
  int v86; // [rsp+ECh] [rbp-74h] BYREF
  struct CVisual *v87; // [rsp+F0h] [rbp-70h]
  void *v88; // [rsp+F8h] [rbp-68h] BYREF
  struct ISwapChainContent *v89; // [rsp+100h] [rbp-60h]
  void *v90; // [rsp+108h] [rbp-58h] BYREF
  std::_Ref_count_base *v91[2]; // [rsp+110h] [rbp-50h] BYREF
  __int64 v92; // [rsp+120h] [rbp-40h]
  struct tagRECT v93; // [rsp+128h] [rbp-38h] BYREF
  int v94; // [rsp+140h] [rbp-20h] BYREF
  struct tagRECT v95; // [rsp+144h] [rbp-1Ch] BYREF
  struct tagRECT v96; // [rsp+154h] [rbp-Ch] BYREF
  RECT rc1; // [rsp+164h] [rbp+4h] BYREF
  DXGI_MODE_ROTATION v98; // [rsp+174h] [rbp+14h]
  int v99; // [rsp+178h] [rbp+18h]
  enum DXGI_COLOR_SPACE_TYPE v100; // [rsp+18Ch] [rbp+2Ch]
  int v101; // [rsp+1A0h] [rbp+40h]
  unsigned int v102; // [rsp+1A8h] [rbp+48h]
  std::_Ref_count_base *v103[2]; // [rsp+1B0h] [rbp+50h] BYREF
  char *v104; // [rsp+1C0h] [rbp+60h] BYREF
  struct FastRegion::Internal::CRgnData *v105[10]; // [rsp+1D0h] [rbp+70h] BYREF

  v10 = 0;
  v11 = a3;
  v88 = 0LL;
  v90 = 0LL;
  v89 = a3;
  v87 = a2;
  *(_QWORD *)&v93.left = a6;
  memset_0(&v94, 0, 0x70uLL);
  *(_OWORD *)v91 = 0LL;
  if ( a9 )
    return (unsigned int)v10;
  v14 = *a4 + 6291456.25;
  v15 = v14;
  v16 = a4[1];
  v95.left = (int)(LODWORD(v15) << 10) >> 11;
  *(float *)&v16 = v16 + 6291456.25;
  v17 = LODWORD(v16);
  v18 = a4[2];
  v95.top = v17 << 10 >> 11;
  *(float *)&v18 = v18 + 6291456.25;
  v19 = LODWORD(v18);
  v20 = a4[3];
  v95.right = v19 << 10 >> 11;
  *(float *)&v20 = v20 + 6291456.25;
  v21 = LODWORD(v20);
  v22 = *a5;
  v95.bottom = v21 << 10 >> 11;
  *(float *)&v22 = v22 + 6291456.25;
  v23 = LODWORD(v22);
  v24 = a5[1];
  v96.left = v23 << 10 >> 11;
  *(float *)&v24 = v24 + 6291456.25;
  v25 = LODWORD(v24);
  v26 = a5[2];
  v96.top = v25 << 10 >> 11;
  *(float *)&v26 = v26 + 6291456.25;
  v27 = LODWORD(v26);
  v28 = a5[3];
  v96.right = v27 << 10 >> 11;
  *(float *)&v28 = v28 + 6291456.25;
  v29 = LODWORD(v28);
  LODWORD(v28) = *(_DWORD *)a6;
  v96.bottom = v29 << 10 >> 11;
  *(float *)&v28 = *(float *)&v28 + 6291456.25;
  v30 = (int)(LODWORD(v28) << 10) >> 11;
  v31 = *(float *)(a6 + 4);
  rc1.left = v30;
  *(float *)&v31 = v31 + 6291456.25;
  v32 = LODWORD(v31);
  LODWORD(v31) = *(_DWORD *)(a6 + 8);
  rc1.top = v32 << 10 >> 11;
  *(float *)&v31 = *(float *)&v31 + 6291456.25;
  v33 = LODWORD(v31);
  LODWORD(v31) = *(_DWORD *)(a6 + 12);
  rc1.right = v33 << 10 >> 11;
  v80 = *(float *)&v31 + 6291456.25;
  rc1.bottom = (int)(LODWORD(v80) << 10) >> 11;
  v34 = (*(unsigned int (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 144LL))(v11);
  v35 = *((_QWORD *)this + 2);
  v100 = v34;
  *(float *)&v31 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v35 + 152LL))(v35);
  v36 = ConvertSDRBoostToSDRWhiteLevel(*(float *)&v31, v100);
  v37 = *((_DWORD *)this + 3352) < 2000;
  v102 = v36;
  if ( !v37 || (a8 & 3) == 0 || (v82 = 1, COverlayContext::RectContainsRect(&rc1, &v96)) )
    v82 = 0;
  IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(this, &v95, &v96, &rc1);
  updated = COverlayContext::UpdateVisitedContentRegion(this);
  v81 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, updated, 0x417u);
    goto LABEL_67;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v105, &rc1);
  v40 = (LONG **)((char *)this + 13296);
  v41 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)this + 1662);
  if ( *(_DWORD *)v41 && *(_DWORD *)v105[0] )
    v42 = FastRegion::Internal::CRgnData::Intersects(v41, v105[0]);
  else
    v42 = 0;
  FastRegion::CRegion::FreeMemory((void **)v105);
  v43 = v42 ^ 1;
  v83 = v43;
  v44 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 208LL))(v11);
  v92 = v44;
  v45 = v44;
  if ( !v44
    || *(_QWORD *)(v44 + 168) != *((_QWORD *)this + 10)
    || (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 40LL))(v11)
    && CD3DDeviceManager::IsHardwareProtectionDisabled() )
  {
    goto LABEL_67;
  }
  v103[0] = CCompositionSurfaceInfo::GetRenderingRealizationNoRef((CCompositionSurfaceInfo *)v45);
  v46 = v103[0];
  CMILCOMBase::InternalQueryInterface(v103[0], &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v88);
  CMILCOMBase::InternalQueryInterface(v46, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v90);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v47 = *((_QWORD *)v46 + 18);
    v104 = (char *)v46 + 144;
    (*(void (__fastcall **)(__int64, int *, int *))(v47 + 32))((__int64)v46 + 144, &v86, &v85);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v48 = *(_QWORD *)(v45 + 40);
      v49 = (_DWORD *)(*(__int64 (__fastcall **)(char *, char **))(*(_QWORD *)v104 + 24LL))(v104, &v104);
      v50 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 112LL))(v11);
      v51 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 104LL))(v11);
      v52 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v89 + 136LL))(v89);
      v53 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v89 + 128LL))(v89);
      McTemplateU0xdddddddqqddddddddddddqqq(
        v55,
        v54,
        v48,
        v53,
        v52,
        v51,
        v50,
        v43,
        v86,
        v85,
        *v49,
        v94,
        v95.left,
        v95.top,
        v95.right,
        v95.bottom,
        v96.left,
        v96.top,
        v96.right,
        v96.bottom,
        rc1.left,
        rc1.top,
        rc1.right,
        rc1.bottom,
        v98,
        v99,
        v100);
      v45 = v92;
      v40 = (LONG **)((char *)this + 13296);
      v11 = v89;
      v46 = v103[0];
    }
  }
  if ( !v88
    && COverlayContext::IsCandidateDirectFlipCompatbile(
         this,
         v11,
         (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v94,
         a7,
         a8,
         0,
         v79)
    && (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 37) <= 1u || *((int *)this + 3352) < 2200) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
        *(unsigned int *)(v45 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v45 + 40)) << 32));
    if ( v43 )
    {
      v57 = 1;
      goto LABEL_39;
    }
    v56 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       &v93);
    if ( !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 136LL))(v11)
      || CCompositionSurfaceInfo::HasSecondaryRepresentations((CCompositionSurfaceInfo *)v45)
      || *(_DWORD *)(*((_QWORD *)this + 1680) + 264LL)
      || *(_DWORD *)(*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*((_QWORD *)v46 + 18) + 24LL))(
                      (__int64)v46 + 144,
                      &v93) != v56 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        *(_QWORD *)&v93.left = 0LL;
        *(_QWORD *)&v93.right = 0LL;
        FastRegion::CRegion::GetBoundingRect(v40, &v93);
        McTemplateU0xqqdddd(v62, v61, *(_DWORD *)(v45 + 40), v63, v77, v93.left, v93.top, v93.right, v93.bottom);
      }
      goto LABEL_67;
    }
    if ( *((_BYTE *)this + 13433) )
    {
      v57 = 3;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_39;
      *(_QWORD *)&v93.left = 0LL;
      *(_QWORD *)&v93.right = 0LL;
      FastRegion::CRegion::GetBoundingRect(v40, &v93);
      RectangleCount = FastRegion::CRegion::GetRectangleCount(v40);
      v60 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
    }
    else
    {
      v57 = 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      {
LABEL_39:
        CDirectFlipInfo::Init((char *)this + 13152, this, *((_QWORD *)this + 2), v87, v45, v11, v57, v40);
        goto LABEL_67;
      }
      *(_QWORD *)&v93.left = 0LL;
      *(_QWORD *)&v93.right = 0LL;
      FastRegion::CRegion::GetBoundingRect(v40, &v93);
      RectangleCount = FastRegion::CRegion::GetRectangleCount(v40);
      v60 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
    }
    McTemplateU0xddddd(
      v59,
      (_DWORD)v60,
      *(_DWORD *)(v45 + 40),
      RectangleCount,
      v93.left,
      v93.top,
      v93.right,
      v93.bottom);
    goto LABEL_39;
  }
  if ( COverlayContext::OverlaysEnabled(this) )
  {
    v64 = 0;
    if ( v90 )
      v64 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v90 + 40LL))(v90);
    if ( !v82
      && !IsIntelWorkaroundNeeded
      && !v64
      && COverlayContext::IsCandidateOverlayCompatbile(
           this,
           v87,
           v11,
           (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v94,
           a7,
           *(_DWORD *)(v45 + 104),
           a10) )
    {
      v99 = 0;
      v98 = a7;
      v65 = (char *)v46 + 144;
      v94 = a8;
      v101 = 2;
      v66 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, std::_Ref_count_base **))(*((_QWORD *)v46 + 18) + 24LL))(
                          (__int64)v46 + 144,
                          v103)
                      + 8);
      v67 = *((_QWORD *)this + 24);
      v68 = (std::_Ref_count_base *)*((_QWORD *)this + 25);
      v103[0] = v68;
      v100 = v66;
      while ( (std::_Ref_count_base *)v67 != v68 )
      {
        if ( *(_BYTE *)(v67 + 185) && !*(_BYTE *)(v67 + 189) && *(_BYTE *)(v67 + 188) )
        {
          if ( EqualRect(&rc1, (const RECT *)(v67 + 76)) )
          {
            v69 = (int)v87;
            *(_QWORD *)(v67 + 192) = v87;
            *(_WORD *)(v67 + 188) = 256;
            goto LABEL_57;
          }
          v68 = v103[0];
        }
        v67 += 256LL;
      }
      v69 = (int)v87;
LABEL_57:
      v70 = std::make_shared<CRegion,>(v103);
      std::shared_ptr<CRegion>::operator=(v91, v70);
      if ( v103[1] )
        std::_Ref_count_base::_Decref(v103[1]);
      v71 = FastRegion::CRegion::Copy((void **)v91[0], (void **)v40);
      v10 = v71;
      if ( v71 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x4FBu);
      }
      else
      {
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v105, &rc1);
        v10 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v91[0], v105);
        FastRegion::CRegion::FreeMemory((void **)v105);
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v10, 0x4FCu);
        }
        else
        {
          v78 = *(_QWORD *)(v45 + 56);
          *(_OWORD *)v103 = *(_OWORD *)v91;
          v91[1] = 0LL;
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,ISwapChainContent *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
            (_QWORD *)this + 24,
            (int)this,
            v69,
            (int)v11,
            (CMILCOMBase *)v45,
            v78,
            (__int64)&v94,
            *(__int64 *)&v93.left,
            v103,
            v88 != 0LL,
            0,
            a10,
            v83,
            0);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            (*(void (__fastcall **)(char *, int *, int *))(*(_QWORD *)v65 + 32LL))(v65, &v85, &v86);
            v75 = *(_DWORD *)(*(__int64 (__fastcall **)(char *, struct tagRECT *))(*(_QWORD *)v65 + 24LL))(v65, &v93);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0xddqqddddddddddddqqq(
                v75,
                v74,
                *(_DWORD *)(v45 + 40),
                v85,
                v86,
                v75,
                v94,
                v95.left,
                v95.top,
                v95.right,
                v95.bottom,
                v96.left,
                v96.top,
                v96.right,
                v96.bottom,
                rc1.left,
                rc1.top,
                rc1.right,
                rc1.bottom,
                v98,
                v99,
                v100);
          }
        }
      }
      goto LABEL_68;
    }
  }
LABEL_67:
  v10 = v81;
LABEL_68:
  if ( v88 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v88 + 16LL))(v88);
  if ( v90 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v90 + 16LL))(v90);
  if ( v91[1] )
    std::_Ref_count_base::_Decref(v91[1]);
  return (unsigned int)v10;
}
