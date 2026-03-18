/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180184090
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180014584 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18003CF9C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003D3C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x18004234C (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008BD20 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18008EBF8 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180090988 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7CD8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800C7C80 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801641B4 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N88888$$T@Z @ 0x180182910 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurface.c)
 *     ??$make_shared@VCRegion@@$$V@std@@YA?AV?$shared_ptr@VCRegion@@@0@XZ @ 0x180182AA8 (--$make_shared@VCRegion@@$$V@std@@YA-AV-$shared_ptr@VCRegion@@@0@XZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180183710 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N3@Z @ 0x18018640C (-IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUDXGI_MULTIPLA.c)
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x180186560 (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXG.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x180186C64 (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18018724C (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z @ 0x180187370 (-RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180187604 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180187718 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     McTemplateU0xddddd @ 0x180188420 (McTemplateU0xddddd.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq @ 0x1801884DC (McTemplateU0xdddddddqqddddddddddddqqq.c)
 *     McTemplateU0xddqqddddddddddddqqq @ 0x18018874C (McTemplateU0xddqqddddddddddddqqq.c)
 *     McTemplateU0xqqdddd @ 0x180188AEC (McTemplateU0xqqdddd.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801949E4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x1801CD834 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        struct CVisual *a2,
        struct ISwapChainContent *a3,
        float *a4,
        float *a5,
        __int64 a6,
        enum DXGI_MODE_ROTATION a7,
        int a8,
        char a9,
        bool a10)
{
  char v10; // r12
  struct ISwapChainContent *v11; // rsi
  unsigned int v14; // ebx
  float v15; // xmm0_4
  float v16; // eax
  double v17; // xmm0_8
  int v18; // eax
  double v19; // xmm0_8
  int v20; // eax
  double v21; // xmm0_8
  int v22; // eax
  double v23; // xmm0_8
  int v24; // eax
  double v25; // xmm0_8
  int v26; // eax
  double v27; // xmm0_8
  int v28; // eax
  double v29; // xmm0_8
  int v30; // eax
  LONG v31; // eax
  double v32; // xmm0_8
  int v33; // eax
  int v34; // eax
  enum DXGI_COLOR_SPACE_TYPE v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  bool v38; // cc
  signed int updated; // eax
  __int64 v40; // rcx
  LONG **v41; // r14
  const struct FastRegion::Internal::CRgnData *v42; // rcx
  char v43; // r12
  __int64 v44; // rax
  _QWORD *v45; // rdi
  _DWORD *v46; // rax
  CMILCOMBase *v47; // r15
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // ebx
  _DWORD *v51; // r15
  char v52; // r14
  char v53; // si
  char v54; // di
  unsigned __int8 v55; // al
  int v56; // edx
  int v57; // ecx
  int v58; // ebx
  int v59; // ebx
  int RectangleCount; // eax
  int v61; // ecx
  int v62; // r10d
  void *v63; // rdx
  int v64; // edx
  int v65; // ecx
  int v66; // r9d
  char v67; // al
  unsigned int v68; // eax
  char *v69; // r15
  enum DXGI_COLOR_SPACE_TYPE v70; // ecx
  __int64 v71; // rbx
  CMILCOMBase *v72; // rax
  __int64 *v73; // rax
  signed int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rcx
  struct tagRECT v77; // xmm0
  char v78; // bl
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // edx
  int v82; // ecx
  int v84; // [rsp+20h] [rbp-140h]
  bool v85; // [rsp+30h] [rbp-130h]
  float v86; // [rsp+E0h] [rbp-80h]
  signed int v87; // [rsp+E0h] [rbp-80h]
  char v88; // [rsp+E4h] [rbp-7Ch]
  bool IsIntelWorkaroundNeeded; // [rsp+E6h] [rbp-7Ah]
  CMILCOMBase *v90; // [rsp+E8h] [rbp-78h] BYREF
  int v91; // [rsp+F0h] [rbp-70h] BYREF
  int v92; // [rsp+F4h] [rbp-6Ch] BYREF
  struct CVisual *v93; // [rsp+F8h] [rbp-68h]
  void *v94; // [rsp+100h] [rbp-60h] BYREF
  struct ISwapChainContent *v95; // [rsp+108h] [rbp-58h]
  void *v96; // [rsp+110h] [rbp-50h] BYREF
  std::_Ref_count_base *v97[2]; // [rsp+120h] [rbp-40h] BYREF
  char *v98; // [rsp+130h] [rbp-30h]
  __int64 v99; // [rsp+138h] [rbp-28h]
  _QWORD *v100; // [rsp+140h] [rbp-20h]
  __int64 v101; // [rsp+148h] [rbp-18h]
  struct tagRECT v102; // [rsp+150h] [rbp-10h] BYREF
  int v103; // [rsp+160h] [rbp+0h] BYREF
  struct tagRECT v104; // [rsp+164h] [rbp+4h] BYREF
  struct tagRECT v105; // [rsp+174h] [rbp+14h] BYREF
  RECT rc1; // [rsp+184h] [rbp+24h] BYREF
  enum DXGI_MODE_ROTATION v107; // [rsp+194h] [rbp+34h]
  int v108; // [rsp+198h] [rbp+38h]
  enum DXGI_COLOR_SPACE_TYPE v109; // [rsp+1ACh] [rbp+4Ch]
  int v110; // [rsp+1C0h] [rbp+60h]
  int v111; // [rsp+1C8h] [rbp+68h]
  struct FastRegion::Internal::CRgnData *v112[10]; // [rsp+1D0h] [rbp+70h] BYREF

  v10 = 0;
  v11 = a3;
  v95 = a3;
  v93 = a2;
  v101 = a6;
  v94 = 0LL;
  v96 = 0LL;
  v14 = 0;
  memset_0(&v103, 0, 0x70uLL);
  *(_OWORD *)v97 = 0LL;
  if ( a9 )
    return v14;
  v15 = *a4 + 6291456.25;
  v16 = v15;
  v17 = a4[1];
  v104.left = (int)(LODWORD(v16) << 10) >> 11;
  *(float *)&v17 = v17 + 6291456.25;
  v18 = LODWORD(v17);
  v19 = a4[2];
  v104.top = v18 << 10 >> 11;
  *(float *)&v19 = v19 + 6291456.25;
  v20 = LODWORD(v19);
  v21 = a4[3];
  v104.right = v20 << 10 >> 11;
  *(float *)&v21 = v21 + 6291456.25;
  v22 = LODWORD(v21);
  v23 = *a5;
  v104.bottom = v22 << 10 >> 11;
  *(float *)&v23 = v23 + 6291456.25;
  v24 = LODWORD(v23);
  v25 = a5[1];
  v105.left = v24 << 10 >> 11;
  *(float *)&v25 = v25 + 6291456.25;
  v26 = LODWORD(v25);
  v27 = a5[2];
  v105.top = v26 << 10 >> 11;
  *(float *)&v27 = v27 + 6291456.25;
  v28 = LODWORD(v27);
  v29 = a5[3];
  v105.right = v28 << 10 >> 11;
  *(float *)&v29 = v29 + 6291456.25;
  v30 = LODWORD(v29);
  LODWORD(v29) = *(_DWORD *)a6;
  v105.bottom = v30 << 10 >> 11;
  *(float *)&v29 = *(float *)&v29 + 6291456.25;
  v31 = (int)(LODWORD(v29) << 10) >> 11;
  v32 = *(float *)(a6 + 4);
  rc1.left = v31;
  *(float *)&v32 = v32 + 6291456.25;
  v33 = LODWORD(v32);
  LODWORD(v32) = *(_DWORD *)(a6 + 8);
  rc1.top = v33 << 10 >> 11;
  *(float *)&v32 = *(float *)&v32 + 6291456.25;
  v34 = LODWORD(v32);
  LODWORD(v32) = *(_DWORD *)(a6 + 12);
  rc1.right = v34 << 10 >> 11;
  v86 = *(float *)&v32 + 6291456.25;
  rc1.bottom = (int)(LODWORD(v86) << 10) >> 11;
  v35 = (*(unsigned int (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 144LL))(v11);
  v36 = *((_QWORD *)this + 2);
  v109 = v35;
  *(float *)&v32 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v36 + 152LL))(v36);
  v37 = ConvertSDRBoostToSDRWhiteLevel(*(float *)&v32, v109);
  v38 = *((_DWORD *)this + 3356) < 2000;
  v111 = v37;
  if ( !v38 || (a8 & 3) == 0 || (v88 = 1, COverlayContext::RectContainsRect(&rc1, &v105)) )
    v88 = 0;
  IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(this, &v104, &v105, &rc1);
  updated = COverlayContext::UpdateVisitedContentRegion(this);
  v87 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, updated, 0x40Du, 0LL);
    goto LABEL_68;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v112, &rc1);
  v41 = (LONG **)((char *)this + 13312);
  v42 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)this + 1664);
  if ( *(_DWORD *)v42 && *(_DWORD *)v112[0] )
    v10 = FastRegion::Internal::CRgnData::Intersects(v42, v112[0]);
  v43 = v10 ^ 1;
  FastRegion::CRegion::FreeMemory((void **)v112);
  v44 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 208LL))(v11);
  v100 = (_QWORD *)v44;
  v45 = (_QWORD *)v44;
  if ( !v44 )
    goto LABEL_68;
  v46 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, CMILCOMBase **))(*(_QWORD *)v44 + 256LL))(v44, &v90);
  if ( *v46 != *((_DWORD *)this + 20)
    || v46[1] != *((_DWORD *)this + 21)
    || (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 40LL))(v11)
    && CD3DDeviceManager::IsHardwareProtectionDisabled() )
  {
    goto LABEL_68;
  }
  v90 = (CMILCOMBase *)(*(__int64 (__fastcall **)(_QWORD *))(*v45 + 40LL))(v45);
  v47 = v90;
  CMILCOMBase::InternalQueryInterface(v90, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v94);
  CMILCOMBase::InternalQueryInterface(v47, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v96);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v48 = *((_QWORD *)v47 + 18);
    v98 = (char *)v47 + 144;
    (*(void (__fastcall **)(__int64, int *, int *))(v48 + 32))((__int64)v47 + 144, &v92, &v91);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v49 = *((_QWORD *)v47 + 18);
      v99 = v45[5];
      v50 = v99;
      v51 = (_DWORD *)(*(__int64 (__fastcall **)(char *, struct tagRECT *))(v49 + 24))(v98, &v102);
      v52 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 112LL))(v11);
      v53 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 104LL))(v11);
      v54 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v95 + 136LL))(v95);
      v55 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v95 + 128LL))(v95);
      McTemplateU0xdddddddqqddddddddddddqqq(
        v57,
        v56,
        v50,
        v55,
        v54,
        v53,
        v52,
        v43,
        v92,
        v91,
        *v51,
        v103,
        v104.left,
        v104.top,
        v104.right,
        v104.bottom,
        v105.left,
        v105.top,
        v105.right,
        v105.bottom,
        rc1.left,
        rc1.top,
        rc1.right,
        rc1.bottom,
        v107,
        v108,
        v109);
      v45 = v100;
      v41 = (LONG **)((char *)this + 13312);
      v11 = v95;
      v47 = v90;
    }
  }
  if ( !v94
    && COverlayContext::IsCandidateDirectFlipCompatbile(
         this,
         v11,
         (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v103,
         a7,
         a8,
         0,
         v85)
    && (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 37) <= 1u || *((int *)this + 3356) < 2200) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
        *((unsigned int *)v45 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(v45[5]) << 32));
    v58 = 2;
    if ( v43 )
      goto LABEL_34;
    v59 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       &v102);
    if ( !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 136LL))(v11)
      || CCompositionSurfaceInfo::HasSecondaryRepresentations((CCompositionSurfaceInfo *)v45)
      || *(_DWORD *)(*((_QWORD *)this + 1682) + 280LL)
      || *(_DWORD *)(*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*((_QWORD *)v47 + 18) + 24LL))(
                      (__int64)v47 + 144,
                      &v102) != v59 )
    {
      if ( !*((_BYTE *)this + 13448) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          *(_QWORD *)&v102.left = 0LL;
          *(_QWORD *)&v102.right = 0LL;
          FastRegion::CRegion::GetBoundingRect(v41, &v102);
          McTemplateU0xqqdddd(v65, v64, *((_DWORD *)v45 + 10), v66, v84, v102.left, v102.top, v102.right, v102.bottom);
        }
        goto LABEL_68;
      }
      v58 = 1;
      goto LABEL_34;
    }
    if ( *((_BYTE *)this + 13448) )
    {
      v58 = 4;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_34;
      *(_QWORD *)&v102.left = 0LL;
      *(_QWORD *)&v102.right = 0LL;
      FastRegion::CRegion::GetBoundingRect(v41, &v102);
      v90 = (CMILCOMBase *)v45[5];
      RectangleCount = FastRegion::CRegion::GetRectangleCount(v41);
      v63 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
    }
    else
    {
      v58 = 3;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      {
LABEL_34:
        CDirectFlipInfo::Init((char *)this + 13152, this, *((_QWORD *)this + 2), v93, v45, v11, v58, v41);
LABEL_68:
        v14 = v87;
        goto LABEL_69;
      }
      *(_QWORD *)&v102.left = 0LL;
      *(_QWORD *)&v102.right = 0LL;
      FastRegion::CRegion::GetBoundingRect(v41, &v102);
      v90 = (CMILCOMBase *)v45[5];
      RectangleCount = FastRegion::CRegion::GetRectangleCount(v41);
      v63 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
    }
    McTemplateU0xddddd(v61, (_DWORD)v63, v62, RectangleCount, v102.left, v102.top, v102.right, v102.bottom);
    goto LABEL_34;
  }
  if ( !COverlayContext::OverlaysEnabled(this) )
    goto LABEL_68;
  v67 = 0;
  if ( v96 )
    v67 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v96 + 40LL))(v96);
  if ( v88 )
    goto LABEL_68;
  if ( IsIntelWorkaroundNeeded )
    goto LABEL_68;
  if ( v67 )
    goto LABEL_68;
  v68 = (*(__int64 (__fastcall **)(_QWORD *))(*v45 + 64LL))(v45);
  if ( !COverlayContext::IsCandidateOverlayCompatbile(
          this,
          v93,
          v11,
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v103,
          a7,
          v68,
          a10) )
    goto LABEL_68;
  v108 = 0;
  v69 = (char *)v47 + 144;
  v107 = a7;
  v103 = a8;
  v110 = 2;
  v70 = *(_DWORD *)((*(__int64 (__fastcall **)(char *, struct tagRECT *))(*(_QWORD *)v69 + 24LL))(v69, &v102) + 8);
  v71 = *((_QWORD *)this + 24);
  v72 = (CMILCOMBase *)*((_QWORD *)this + 25);
  v90 = v72;
  v109 = v70;
  while ( (CMILCOMBase *)v71 != v72 )
  {
    if ( *(_BYTE *)(v71 + 185) && !*(_BYTE *)(v71 + 189) && *(_BYTE *)(v71 + 188) )
    {
      if ( EqualRect(&rc1, (const RECT *)(v71 + 76)) )
      {
        *(_QWORD *)(v71 + 192) = v93;
        *(_WORD *)(v71 + 188) = 256;
        break;
      }
      v72 = v90;
    }
    v71 += 256LL;
  }
  v73 = std::make_shared<CRegion,>(&v102);
  std::shared_ptr<CRegion>::operator=(v97, v73);
  if ( *(_QWORD *)&v102.right )
    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v102.right);
  v74 = FastRegion::CRegion::Copy((int **)v97[0], v41);
  v14 = v74;
  if ( v74 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0x4FFu, 0LL);
    goto LABEL_69;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v112, &rc1);
  v87 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v97[0], v112);
  v14 = v87;
  FastRegion::CRegion::FreeMemory((void **)v112);
  if ( v87 >= 0 )
  {
    v77 = *(struct tagRECT *)v97;
    v97[1] = 0LL;
    v78 = v94 != 0LL;
    v79 = *v45;
    v102 = v77;
    v80 = (*(__int64 (__fastcall **)(_QWORD *))(v79 + 56))(v45);
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,ISwapChainContent *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
      (_QWORD *)this + 24,
      (int)this,
      (__int64)v93,
      (__int64)v11,
      (__int64)v45,
      v80,
      (__int64)&v103,
      v101,
      &v102,
      v78,
      0,
      a10,
      v43,
      0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      (*(void (__fastcall **)(char *, int *, int *))(*(_QWORD *)v69 + 32LL))(v69, &v91, &v92);
      v82 = *(_DWORD *)(*(__int64 (__fastcall **)(char *, struct tagRECT *))(*(_QWORD *)v69 + 24LL))(v69, &v102);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xddqqddddddddddddqqq(
          v82,
          v81,
          *((_DWORD *)v45 + 10),
          v91,
          v92,
          v82,
          v103,
          v104.left,
          v104.top,
          v104.right,
          v104.bottom,
          v105.left,
          v105.top,
          v105.right,
          v105.bottom,
          rc1.left,
          rc1.top,
          rc1.right,
          rc1.bottom,
          v107,
          v108,
          v109);
    }
    goto LABEL_68;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v87, 0x500u, 0LL);
LABEL_69:
  if ( v94 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v94 + 16LL))(v94);
  if ( v96 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v96 + 16LL))(v96);
  if ( v97[1] )
    std::_Ref_count_base::_Decref(v97[1]);
  return v14;
}
