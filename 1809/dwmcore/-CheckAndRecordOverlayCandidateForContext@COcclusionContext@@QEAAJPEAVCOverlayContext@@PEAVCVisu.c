/*
 * XREFs of ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012E74
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012D78 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800307F0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180069E68 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18006B8EC (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18006F964 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180168F90 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801690E4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x18016ADFC (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     McTemplateU0xdddddddd @ 0x180177134 (McTemplateU0xdddddddd.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidateForContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        CShape *a6,
        unsigned int a7)
{
  __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // r14
  _QWORD *v10; // rbx
  CShape *v11; // r12
  __int64 v12; // r13
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(_QWORD *); // rax
  CCompositionSurfaceInfo *v15; // r15
  char v16; // al
  __int64 v17; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  float v22; // xmm0_4
  float v23; // eax
  float v24; // xmm0_4
  __int64 v25; // rax
  __int64 (__fastcall *v26)(_QWORD *); // rax
  int v27; // r12d
  float v28; // xmm0_4
  char v29; // si
  char v30; // di
  char v31; // bl
  unsigned __int8 v32; // al
  int v33; // edx
  int v34; // ecx
  int DoesImageOcclude; // eax
  unsigned int v36; // ecx
  __int64 v37; // rcx
  __int128 v38; // xmm1
  int v39; // eax
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  unsigned __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // r14d
  bool v45; // al
  __int64 v46; // r14
  __m128i v47; // xmm6
  float top; // xmm7_4
  float v49; // xmm3_4
  float right; // xmm8_4
  float v51; // xmm2_4
  float bottom; // xmm9_4
  float v53; // xmm1_4
  int v54; // eax
  unsigned int v55; // ecx
  float v56; // xmm3_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  int (__fastcall **v59)(char *, GUID *, _QWORD *); // rax
  float v60; // xmm0_4
  const struct FastRegion::Internal::CRgnData *v61; // rdx
  bool v62; // al
  char v63; // cl
  char v64; // si
  char v65; // si
  int v66; // eax
  unsigned int v67; // ecx
  int v68; // eax
  unsigned int v69; // ecx
  char v70[4]; // [rsp+68h] [rbp-A0h] BYREF
  bool v71[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  enum DXGI_MODE_ROTATION v72; // [rsp+70h] [rbp-98h] BYREF
  char v73[4]; // [rsp+74h] [rbp-94h]
  unsigned int v74[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v75; // [rsp+80h] [rbp-88h]
  float v76; // [rsp+88h] [rbp-80h]
  unsigned int v77; // [rsp+8Ch] [rbp-7Ch]
  int v78; // [rsp+90h] [rbp-78h]
  _QWORD v79[2]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v80[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v81; // [rsp+E8h] [rbp-20h]
  struct D2D_RECT_F v82; // [rsp+F8h] [rbp-10h] BYREF
  struct tagRECT v83; // [rsp+108h] [rbp+0h] BYREF
  __int128 v84; // [rsp+118h] [rbp+10h] BYREF
  __int64 v85; // [rsp+128h] [rbp+20h] BYREF
  float v86; // [rsp+130h] [rbp+28h]
  float v87; // [rsp+134h] [rbp+2Ch]
  CCompositionSurfaceInfo *v88; // [rsp+138h] [rbp+30h] BYREF
  float v89; // [rsp+140h] [rbp+38h]
  float v90; // [rsp+144h] [rbp+3Ch]
  _QWORD v91[2]; // [rsp+148h] [rbp+40h] BYREF
  struct FastRegion::Internal::CRgnData *v92[2]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v93; // [rsp+168h] [rbp+60h]
  __int128 v94; // [rsp+178h] [rbp+70h]
  __int128 v95; // [rsp+188h] [rbp+80h]
  int v96; // [rsp+198h] [rbp+90h]

  v7 = *a4;
  v8 = 0LL;
  v9 = a5;
  v10 = a4;
  v11 = a6;
  v12 = a2;
  v75 = a1;
  v13 = 0;
  v14 = *(__int64 (__fastcall **)(_QWORD *))(v7 + 208);
  v91[0] = a4;
  v79[1] = a3;
  *(_QWORD *)&v82.left = a2;
  *(_QWORD *)&v84 = a5;
  v85 = (__int64)a6;
  v78 = 0;
  v77 = 0;
  v79[0] = 0LL;
  v15 = (CCompositionSurfaceInfo *)v14(a4);
  v88 = v15;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v20 = *v10;
    v81 = 0;
    (*(void (__fastcall **)(_QWORD *, _OWORD *, struct tagRECT *))(v20 + 64))(v10, v80, &v83);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v21 = *((_QWORD *)v15 + 5);
      v22 = *(float *)&v83.bottom + 6291456.25;
      v23 = v22;
      v24 = *(float *)&v83.right + 6291456.25;
      v72 = (int)(LODWORD(v23) << 10) >> 11;
      v25 = *v10;
      *(float *)v74 = v24;
      v26 = *(__int64 (__fastcall **)(_QWORD *))(v25 + 112);
      v27 = (int)(LODWORD(v24) << 10) >> 11;
      v28 = *(float *)&v83.top + 6291456.25;
      *(float *)v73 = v28;
      v76 = *(float *)&v83.left + 6291456.25;
      v29 = v26(v10);
      v30 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 104LL))(v10);
      v31 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 136LL))(v10);
      v32 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v91[0] + 128LL))(v91[0]);
      McTemplateU0xdddddddd(
        v34,
        v33,
        v21,
        v32,
        v31,
        v30,
        v29,
        (int)(LODWORD(v76) << 10) >> 11,
        (int)(LODWORD(v28) << 10) >> 11,
        v27,
        v72);
      v10 = (_QWORD *)v91[0];
      v8 = 0LL;
      v13 = v77;
      v9 = v84;
      v15 = v88;
      v11 = (CShape *)v85;
      v12 = *(_QWORD *)&v82.left;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 104LL))(v10)
    || (v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 128LL))(v10), v70[1] = 0, v16) )
  {
    v70[1] = 1;
  }
  v17 = *(_QWORD *)(v12 + 16);
  v70[3] = 0;
  if ( v17 )
    v70[3] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 504LL))(v17);
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v15);
  if ( RenderingRealizationNoRef )
    v8 = (char *)RenderingRealizationNoRef + 144;
  if ( !v70[1] && !v70[3]
    || !v8
    || !*(_DWORD *)(v75 + 248)
    && *(_DWORD *)(v75 + 176)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 112LL))(v10) )
  {
    goto LABEL_10;
  }
  v70[0] = 0;
  v70[2] = 0;
  DoesImageOcclude = COcclusionContext::DoesImageOcclude(0LL, v10, a7, v70);
  v13 = DoesImageOcclude;
  if ( DoesImageOcclude < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, DoesImageOcclude, 0x7F1u);
    goto LABEL_10;
  }
  if ( !v70[0] )
  {
    if ( *(_DWORD *)((*(__int64 (__fastcall **)(char *, struct D2D_RECT_F *))(*(_QWORD *)v8 + 24LL))(v8, &v82) + 4) == 3 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_10;
      v42 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
      v43 = 0LL;
      goto LABEL_28;
    }
    v70[2] = 1;
  }
  v81 = 0;
  CMatrixStack::Top((CMatrixStack *)(v75 + 8), (struct CMILMatrix *)v80);
  CMILMatrix::Multiply((CMILMatrix *)v80, (const struct CMILMatrix *)(v12 + 12816));
  if ( v9 )
  {
    v38 = *(_OWORD *)(v9 + 16);
    v39 = *(_DWORD *)(v9 + 64);
    *(_OWORD *)v92 = *(_OWORD *)v9;
    v40 = *(_OWORD *)(v9 + 32);
    v93 = v38;
    v41 = *(_OWORD *)(v9 + 48);
    v94 = v40;
    v95 = v41;
    v96 = v39;
    CMILMatrix::Multiply((CMILMatrix *)v92, (const struct CMILMatrix *)v80);
  }
  else
  {
    *(_OWORD *)v92 = v80[0];
    v93 = v80[1];
    v94 = v80[2];
    v95 = v80[3];
    v96 = v81;
  }
  v44 = 0;
  v70[0] = 0;
  *(_DWORD *)v73 = 0;
  v74[0] = 0;
  v71[0] = 1;
  v72 = DXGI_MODE_ROTATION_IDENTITY;
  if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v80) )
  {
    v45 = COverlayContext::DeriveOverlayRotationParameters(
            (COverlayContext *)v12,
            (const struct CMILMatrix *)v92,
            &v72,
            v74,
            v71);
    v44 = v74[0];
    v70[0] = v45;
    *(_DWORD *)v73 = v74[0];
  }
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v8 + 96LL))(v8) )
    *(_DWORD *)v73 = v44 | 8;
  v46 = v75;
  if ( v70[0] || *(__int64 *)(v75 + 1184) > 1 && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v92) )
  {
    if ( v11 && !CShape::IsAxisAlignedRectangle(v11) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v43 = 2LL;
        v42 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
LABEL_28:
        McTemplateU0xq(v37, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, v42, v43);
        goto LABEL_10;
      }
      goto LABEL_10;
    }
    v47 = _mm_loadu_si128((const __m128i *)(v12 + 56));
    v82 = (struct D2D_RECT_F)v47;
    CBaseClipStack::Top(v46 + 120, &v85);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v12 + 12816));
    LODWORD(v82.left) = v47.m128i_i32[0];
    if ( *(float *)&v83.left > *(float *)v47.m128i_i32 )
    {
      LODWORD(v82.left) = v83.left;
      v47.m128i_i32[0] = v83.left;
    }
    top = v82.top;
    v49 = v82.top;
    if ( *(float *)&v83.top > v82.top )
    {
      LODWORD(v82.top) = v83.top;
      top = *(float *)&v83.top;
      v49 = *(float *)&v83.top;
    }
    right = v82.right;
    v51 = v82.right;
    if ( v82.right > *(float *)&v83.right )
    {
      LODWORD(v82.right) = v83.right;
      right = *(float *)&v83.right;
      v51 = *(float *)&v83.right;
    }
    bottom = v82.bottom;
    v53 = v82.bottom;
    if ( v82.bottom > *(float *)&v83.bottom )
    {
      LODWORD(v82.bottom) = v83.bottom;
      bottom = *(float *)&v83.bottom;
      v53 = *(float *)&v83.bottom;
    }
    if ( v51 <= *(float *)v47.m128i_i32 || v53 <= v49 )
    {
      bottom = 0.0;
      right = 0.0;
      top = 0.0;
      v82.bottom = 0.0;
      v47.m128i_i32[0] = 0;
      v82.right = 0.0;
      v82.top = 0.0;
      v82.left = 0.0;
    }
    if ( v11 )
    {
      v54 = (*(__int64 (__fastcall **)(CShape *, CCompositionSurfaceInfo **, _QWORD))(*(_QWORD *)v11 + 32LL))(
              v11,
              &v88,
              0LL);
      v13 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x86Cu);
        goto LABEL_10;
      }
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v80);
      if ( *(float *)&v88 > *(float *)v47.m128i_i32 )
      {
        LODWORD(v82.left) = (_DWORD)v88;
        v47.m128i_i32[0] = (int)v88;
      }
      v56 = top;
      if ( *((float *)&v88 + 1) > top )
      {
        v82.top = *((FLOAT *)&v88 + 1);
        top = *((float *)&v88 + 1);
        v56 = *((float *)&v88 + 1);
      }
      v57 = right;
      if ( right > v89 )
      {
        v82.right = v89;
        right = v89;
        v57 = v89;
      }
      v58 = bottom;
      if ( bottom > v90 )
      {
        v82.bottom = v90;
        bottom = v90;
        v58 = v90;
      }
      if ( v57 <= *(float *)v47.m128i_i32 || v58 <= v56 )
      {
        bottom = 0.0;
        right = 0.0;
        top = 0.0;
        v82.bottom = 0.0;
        v47.m128i_i32[0] = 0;
        v82.right = 0.0;
        v82.top = 0.0;
        v82.left = 0.0;
      }
    }
    if ( IsEmpty(&v82) )
      goto LABEL_110;
    v59 = *(int (__fastcall ***)(char *, GUID *, _QWORD *))v8;
    v81 = 0;
    if ( (*v59)(v8, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, v79) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _OWORD *, _QWORD *))(*v10 + 64LL))(v10, v80, v91);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v92);
      if ( *(float *)&v85 > *(float *)v47.m128i_i32 )
      {
        LODWORD(v82.left) = v85;
        v47.m128i_i32[0] = v85;
      }
      if ( *((float *)&v85 + 1) > top )
      {
        v82.top = *((FLOAT *)&v85 + 1);
        top = *((float *)&v85 + 1);
      }
      if ( right > v86 )
      {
        v82.right = v86;
        right = v86;
      }
      v60 = v87;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _OWORD *, _QWORD *, __int128 *, __int64 *))(*(_QWORD *)v79[0] + 24LL))(
        v79[0],
        0LL,
        v80,
        v91,
        &v84,
        &v85);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v92);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v92);
      if ( *(float *)&v84 > *(float *)v47.m128i_i32 )
      {
        LODWORD(v82.left) = v84;
        v47.m128i_i32[0] = v84;
      }
      if ( *((float *)&v84 + 1) > top )
      {
        v82.top = *((FLOAT *)&v84 + 1);
        top = *((float *)&v84 + 1);
      }
      if ( right > *((float *)&v84 + 2) )
      {
        v82.right = *((FLOAT *)&v84 + 2);
        right = *((float *)&v84 + 2);
      }
      v60 = *((float *)&v84 + 3);
    }
    if ( bottom > v60 )
    {
      v82.bottom = v60;
      bottom = v60;
    }
    if ( right <= *(float *)v47.m128i_i32 || bottom <= top )
    {
      v82.bottom = 0.0;
      v82.right = 0.0;
      v82.top = 0.0;
      v82.left = 0.0;
    }
    if ( IsEmpty(&v82) )
    {
LABEL_110:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v43 = 3LL;
        v42 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
        goto LABEL_28;
      }
      goto LABEL_10;
    }
    (*(void (__fastcall **)(_QWORD *))(*v10 + 232LL))(v10);
    if ( v70[0] )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v12 + 12884));
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 112LL))(v10) )
      {
        v63 = v78;
      }
      else
      {
        LODWORD(v84) = (int)*(float *)&v83.left;
        DWORD1(v84) = (int)*(float *)&v83.top;
        DWORD2(v84) = (int)*(float *)&v83.right;
        HIDWORD(v84) = (int)*(float *)&v83.bottom;
        v83 = (struct tagRECT)v84;
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v92, &v83);
        v62 = *(_DWORD *)v92[0]
           && (v61 = *(const struct FastRegion::Internal::CRgnData **)(v46 + 960), *(_DWORD *)v61)
           && FastRegion::Internal::CRgnData::Intersects(v92[0], v61);
        v63 = 1;
        if ( v62 )
        {
          v64 = 0;
LABEL_98:
          if ( (v63 & 1) != 0 )
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v92);
          if ( v64 )
          {
            v65 = v70[2];
            if ( v70[1]
              && (v66 = COverlayContext::CheckAndRecordOverlayCandidate(
                          (COverlayContext *)v12,
                          (__int64)&v85,
                          (__int64)&v82,
                          v72,
                          v73[0],
                          v70[2],
                          v71[0]),
                  v13 = v66,
                  v66 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x8BDu);
            }
            else if ( v70[3] )
            {
              if ( !v65 )
              {
                v68 = COverlayContext::CheckAndNotifyFullScreenSwapChain((COverlayContext *)v12);
                v13 = v68;
                if ( v68 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x8C3u);
              }
            }
          }
          goto LABEL_10;
        }
      }
      v64 = 1;
      goto LABEL_98;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v43 = 1LL;
    v42 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
    goto LABEL_28;
  }
LABEL_10:
  if ( v79[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v79[0] + 16LL))(v79[0]);
  return v13;
}
