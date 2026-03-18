/*
 * XREFs of ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012F34
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012E60 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x1800228D4 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180028D68 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003398C (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800518E4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18007DE64 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007E00C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800C7FB0 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x18015D648 (McTemplateU0xq.c)
 *     McTemplateU0xdddddddd @ 0x180170C3C (McTemplateU0xdddddddd.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180182854 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801829B0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801845A0 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
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
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned int v10; // ebx
  CShape *v11; // r12
  _QWORD *v12; // rdi
  __int64 v13; // r13
  __int64 (__fastcall *v14)(_QWORD *); // rax
  _QWORD *v15; // r15
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rax
  int v21; // ebx
  float v22; // xmm0_4
  float v23; // eax
  float v24; // xmm0_4
  __int64 v25; // rax
  __int64 (__fastcall *v26)(_QWORD *); // rax
  int v27; // r13d
  float v28; // xmm0_4
  char v29; // r14
  char v30; // si
  char v31; // di
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
  int (__fastcall **v59)(__int64, GUID *, __int64 *); // rax
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
  __int64 v79; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v80; // [rsp+A0h] [rbp-68h]
  __int64 v81; // [rsp+A8h] [rbp-60h]
  _OWORD v82[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v83; // [rsp+F8h] [rbp-10h]
  struct D2D_RECT_F v84; // [rsp+108h] [rbp+0h] BYREF
  struct tagRECT v85; // [rsp+118h] [rbp+10h] BYREF
  __int128 v86; // [rsp+128h] [rbp+20h] BYREF
  __int64 v87; // [rsp+138h] [rbp+30h] BYREF
  float v88; // [rsp+140h] [rbp+38h]
  float v89; // [rsp+144h] [rbp+3Ch]
  _QWORD *v90; // [rsp+148h] [rbp+40h] BYREF
  float v91; // [rsp+150h] [rbp+48h]
  float v92; // [rsp+154h] [rbp+4Ch]
  _QWORD v93[2]; // [rsp+158h] [rbp+50h] BYREF
  struct FastRegion::Internal::CRgnData *v94[2]; // [rsp+168h] [rbp+60h] BYREF
  __int128 v95; // [rsp+178h] [rbp+70h]
  __int128 v96; // [rsp+188h] [rbp+80h]
  __int128 v97; // [rsp+198h] [rbp+90h]
  int v98; // [rsp+1A8h] [rbp+A0h]

  v7 = *a4;
  v8 = 0LL;
  v9 = a5;
  v10 = 0;
  v11 = a6;
  v12 = a4;
  v75 = a1;
  v13 = a2;
  v14 = *(__int64 (__fastcall **)(_QWORD *))(v7 + 208);
  v80 = a4;
  v81 = a3;
  *(_QWORD *)&v84.left = a2;
  *(_QWORD *)&v86 = a5;
  v87 = (__int64)a6;
  v78 = 0;
  v77 = 0;
  v79 = 0LL;
  v15 = (_QWORD *)v14(a4);
  v90 = v15;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v20 = *v12;
    v83 = 0;
    (*(void (__fastcall **)(_QWORD *, _OWORD *, struct tagRECT *))(v20 + 64))(v12, v82, &v85);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v93[0] = v15[5];
      v21 = v93[0];
      v22 = *(float *)&v85.bottom + 6291456.25;
      v23 = v22;
      v24 = *(float *)&v85.right + 6291456.25;
      v72 = (int)(LODWORD(v23) << 10) >> 11;
      v25 = *v12;
      *(float *)v74 = v24;
      v26 = *(__int64 (__fastcall **)(_QWORD *))(v25 + 112);
      v27 = (int)(LODWORD(v24) << 10) >> 11;
      v28 = *(float *)&v85.top + 6291456.25;
      *(float *)v73 = v28;
      v76 = *(float *)&v85.left + 6291456.25;
      v29 = v26(v12);
      v30 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 104LL))(v12);
      v31 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 136LL))(v12);
      v32 = (*(__int64 (__fastcall **)(_QWORD *))(*v80 + 128LL))(v80);
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
      v12 = v80;
      v8 = 0LL;
      v10 = v77;
      v9 = v86;
      v15 = v90;
      v11 = (CShape *)v87;
      v13 = *(_QWORD *)&v84.left;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v12 + 104LL))(v12)
    || (v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 128LL))(v12), v70[1] = 0, v16) )
  {
    v70[1] = 1;
  }
  v17 = *(_QWORD *)(v13 + 16);
  v70[3] = 0;
  if ( v17 )
    v70[3] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 512LL))(v17);
  v18 = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 40LL))(v15);
  if ( v18 )
    v8 = v18 + 144;
  if ( !v70[1] && !v70[3]
    || !v8
    || !*(_DWORD *)(v75 + 256)
    && *(_DWORD *)(v75 + 184)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v12 + 112LL))(v12) )
  {
    goto LABEL_10;
  }
  v70[0] = 0;
  v70[2] = 0;
  DoesImageOcclude = COcclusionContext::DoesImageOcclude(0LL, v12, a7, v70);
  v10 = DoesImageOcclude;
  if ( DoesImageOcclude < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, DoesImageOcclude, 0x7A2u, 0LL);
    goto LABEL_10;
  }
  if ( !v70[0] )
  {
    if ( *(_DWORD *)((*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v8 + 24LL))(v8, &v84) + 4) == 3 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_10;
      v42 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(v15[5]) << 32);
      v43 = 0LL;
      goto LABEL_28;
    }
    v70[2] = 1;
  }
  v83 = 0;
  CMatrixStack::Top((CMatrixStack *)(v75 + 16), (struct CMILMatrix *)v82);
  CMILMatrix::Multiply((CMILMatrix *)v82, (const struct CMILMatrix *)(v13 + 12816));
  if ( v9 )
  {
    v38 = *(_OWORD *)(v9 + 16);
    v39 = *(_DWORD *)(v9 + 64);
    *(_OWORD *)v94 = *(_OWORD *)v9;
    v40 = *(_OWORD *)(v9 + 32);
    v95 = v38;
    v41 = *(_OWORD *)(v9 + 48);
    v96 = v40;
    v97 = v41;
    v98 = v39;
    CMILMatrix::Multiply((CMILMatrix *)v94, (const struct CMILMatrix *)v82);
  }
  else
  {
    *(_OWORD *)v94 = v82[0];
    v95 = v82[1];
    v96 = v82[2];
    v97 = v82[3];
    v98 = v83;
  }
  v44 = 0;
  v70[0] = 0;
  *(_DWORD *)v73 = 0;
  v74[0] = 0;
  v71[0] = 1;
  v72 = DXGI_MODE_ROTATION_IDENTITY;
  if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v82) )
  {
    v45 = COverlayContext::DeriveOverlayRotationParameters(
            (COverlayContext *)v13,
            (const struct CMILMatrix *)v94,
            &v72,
            v74,
            v71);
    v44 = v74[0];
    v70[0] = v45;
    *(_DWORD *)v73 = v74[0];
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8) )
    *(_DWORD *)v73 = v44 | 8;
  v46 = v75;
  if ( v70[0] || *(__int64 *)(v75 + 1192) > 1 && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v94) )
  {
    if ( v11 && !CShape::IsAxisAlignedRectangle(v11) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v43 = 2LL;
        v42 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(v15[5]) << 32);
LABEL_28:
        McTemplateU0xq(v37, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, v42, v43);
        goto LABEL_10;
      }
      goto LABEL_10;
    }
    v47 = _mm_loadu_si128((const __m128i *)(v13 + 56));
    v84 = (struct D2D_RECT_F)v47;
    CBaseClipStack::Top(v46 + 128, &v87);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v13 + 12816));
    LODWORD(v84.left) = v47.m128i_i32[0];
    if ( *(float *)&v85.left > *(float *)v47.m128i_i32 )
    {
      LODWORD(v84.left) = v85.left;
      v47.m128i_i32[0] = v85.left;
    }
    top = v84.top;
    v49 = v84.top;
    if ( *(float *)&v85.top > v84.top )
    {
      LODWORD(v84.top) = v85.top;
      top = *(float *)&v85.top;
      v49 = *(float *)&v85.top;
    }
    right = v84.right;
    v51 = v84.right;
    if ( v84.right > *(float *)&v85.right )
    {
      LODWORD(v84.right) = v85.right;
      right = *(float *)&v85.right;
      v51 = *(float *)&v85.right;
    }
    bottom = v84.bottom;
    v53 = v84.bottom;
    if ( v84.bottom > *(float *)&v85.bottom )
    {
      LODWORD(v84.bottom) = v85.bottom;
      bottom = *(float *)&v85.bottom;
      v53 = *(float *)&v85.bottom;
    }
    if ( v51 <= *(float *)v47.m128i_i32 || v53 <= v49 )
    {
      bottom = 0.0;
      right = 0.0;
      top = 0.0;
      v84.bottom = 0.0;
      v47.m128i_i32[0] = 0;
      v84.right = 0.0;
      v84.top = 0.0;
      v84.left = 0.0;
    }
    if ( v11 )
    {
      v54 = (*(__int64 (__fastcall **)(CShape *, _QWORD **, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, &v90, 0LL);
      v10 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x81Du, 0LL);
        goto LABEL_10;
      }
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v82);
      if ( *(float *)&v90 > *(float *)v47.m128i_i32 )
      {
        LODWORD(v84.left) = (_DWORD)v90;
        v47.m128i_i32[0] = (int)v90;
      }
      v56 = top;
      if ( *((float *)&v90 + 1) > top )
      {
        v84.top = *((FLOAT *)&v90 + 1);
        top = *((float *)&v90 + 1);
        v56 = *((float *)&v90 + 1);
      }
      v57 = right;
      if ( right > v91 )
      {
        v84.right = v91;
        right = v91;
        v57 = v91;
      }
      v58 = bottom;
      if ( bottom > v92 )
      {
        v84.bottom = v92;
        bottom = v92;
        v58 = v92;
      }
      if ( v57 <= *(float *)v47.m128i_i32 || v58 <= v56 )
      {
        bottom = 0.0;
        right = 0.0;
        top = 0.0;
        v84.bottom = 0.0;
        v47.m128i_i32[0] = 0;
        v84.right = 0.0;
        v84.top = 0.0;
        v84.left = 0.0;
      }
    }
    if ( IsEmpty(&v84) )
      goto LABEL_110;
    v59 = *(int (__fastcall ***)(__int64, GUID *, __int64 *))v8;
    v83 = 0;
    if ( (*v59)(v8, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v79) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _OWORD *, _QWORD *))(*v12 + 64LL))(v12, v82, v93);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v94);
      if ( *(float *)&v87 > *(float *)v47.m128i_i32 )
      {
        LODWORD(v84.left) = v87;
        v47.m128i_i32[0] = v87;
      }
      if ( *((float *)&v87 + 1) > top )
      {
        v84.top = *((FLOAT *)&v87 + 1);
        top = *((float *)&v87 + 1);
      }
      if ( right > v88 )
      {
        v84.right = v88;
        right = v88;
      }
      v60 = v89;
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD, _OWORD *, _QWORD *, __int128 *, __int64 *))(*(_QWORD *)v79 + 24LL))(
        v79,
        0LL,
        v82,
        v93,
        &v86,
        &v87);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v94);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v94);
      if ( *(float *)&v86 > *(float *)v47.m128i_i32 )
      {
        LODWORD(v84.left) = v86;
        v47.m128i_i32[0] = v86;
      }
      if ( *((float *)&v86 + 1) > top )
      {
        v84.top = *((FLOAT *)&v86 + 1);
        top = *((float *)&v86 + 1);
      }
      if ( right > *((float *)&v86 + 2) )
      {
        v84.right = *((FLOAT *)&v86 + 2);
        right = *((float *)&v86 + 2);
      }
      v60 = *((float *)&v86 + 3);
    }
    if ( bottom > v60 )
    {
      v84.bottom = v60;
      bottom = v60;
    }
    if ( right <= *(float *)v47.m128i_i32 || bottom <= top )
    {
      v84.bottom = 0.0;
      v84.right = 0.0;
      v84.top = 0.0;
      v84.left = 0.0;
    }
    if ( IsEmpty(&v84) )
    {
LABEL_110:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v43 = 3LL;
        v42 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(v15[5]) << 32);
        goto LABEL_28;
      }
      goto LABEL_10;
    }
    (*(void (__fastcall **)(_QWORD *))(*v12 + 240LL))(v12);
    if ( v70[0] )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v13 + 12884));
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v12 + 112LL))(v12) )
      {
        v63 = v78;
      }
      else
      {
        LODWORD(v86) = (int)*(float *)&v85.left;
        DWORD1(v86) = (int)*(float *)&v85.top;
        DWORD2(v86) = (int)*(float *)&v85.right;
        HIDWORD(v86) = (int)*(float *)&v85.bottom;
        v85 = (struct tagRECT)v86;
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v94, &v85);
        v62 = *(_DWORD *)v94[0]
           && (v61 = *(const struct FastRegion::Internal::CRgnData **)(v46 + 968), *(_DWORD *)v61)
           && FastRegion::Internal::CRgnData::Intersects(v94[0], v61);
        v63 = 1;
        if ( v62 )
        {
          v64 = 0;
LABEL_98:
          if ( (v63 & 1) != 0 )
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v94);
          if ( v64 )
          {
            v65 = v70[2];
            if ( v70[1]
              && (v66 = COverlayContext::CheckAndRecordOverlayCandidate(
                          (COverlayContext *)v13,
                          (__int64)&v87,
                          (__int64)&v84,
                          v72,
                          v73[0],
                          v70[2],
                          v71[0]),
                  v10 = v66,
                  v66 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x86Eu, 0LL);
            }
            else if ( v70[3] )
            {
              if ( !v65 )
              {
                v68 = COverlayContext::CheckAndNotifyFullScreenSwapChain((COverlayContext *)v13);
                v10 = v68;
                if ( v68 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x874u, 0LL);
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
    v42 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(v15[5]) << 32);
    goto LABEL_28;
  }
LABEL_10:
  if ( v79 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
  return v10;
}
