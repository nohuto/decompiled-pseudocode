/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180177458
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800744A0 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18005FB00 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18007AC24 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18008B288 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008EFE0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB270 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetBounds@CVisualTree@@QEAAXPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EE398 (-GetBounds@CVisualTree@@QEAAXPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x180166768 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801B695C (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDC5C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  CDrawingContext *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  char v8; // r14
  float v9; // xmm2_4
  struct CVisualTree *v10; // rcx
  __int64 v11; // rbx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r14
  unsigned int v29; // r15d
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __m128i v33; // xmm0
  float v34; // xmm2_4
  float v35; // xmm1_4
  int v36; // eax
  __int64 v37; // rcx
  float v39; // [rsp+68h] [rbp-69h] BYREF
  float v40; // [rsp+6Ch] [rbp-65h] BYREF
  float v41; // [rsp+70h] [rbp-61h] BYREF
  __int64 v42[2]; // [rsp+78h] [rbp-59h] BYREF
  __int128 v43; // [rsp+88h] [rbp-49h]
  __int128 v44; // [rsp+98h] [rbp-39h]
  __int128 v45; // [rsp+A8h] [rbp-29h]
  __int16 v46; // [rsp+B8h] [rbp-19h]
  CDrawingContext *v47; // [rsp+C8h] [rbp-9h] BYREF
  float v48; // [rsp+D0h] [rbp-1h]
  float v49; // [rsp+D4h] [rbp+3h]
  float v50; // [rsp+D8h] [rbp+7h]
  float v51; // [rsp+DCh] [rbp+Bh]
  __int128 v52; // [rsp+E0h] [rbp+Fh] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)this + 3) + 16LL;
  v47 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v5 = *((_QWORD *)this + 8);
  *(_OWORD *)v42 = _xmm;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v43 = _xmm;
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v46 = 32085;
  v44 = _xmm;
  v45 = _xmm;
  v8 = *(_BYTE *)(v5 + 32);
  *(_QWORD *)&v52 = 0LL;
  *((float *)&v52 + 2) = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  *((float *)&v52 + 3) = _mm_cvtepi32_ps(v7).m128_f32[0] + 0.0;
  CComposition::ShowHideCursors((CComposition *)v4, 0);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 24) - 1.0)) & _xmm);
  if ( v9 >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)v42, *((float *)this + 24), *((float *)this + 24), 1.0);
  CMILMatrix::Translate((CMILMatrix *)v42, (float)-*((_DWORD *)this + 20), (float)-*((_DWORD *)this + 21));
  v10 = (struct CVisualTree *)*((_QWORD *)this + 8);
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 3) + 88LL) & 0x7F) != 0 )
  {
    if ( v8 )
    {
      v11 = *((_QWORD *)v10 + 2) + 552LL;
      AcquireSRWLockExclusive((PSRWLOCK)v11);
      *(_DWORD *)(v11 + 8) = GetCurrentThreadId();
      v12 = CVisualTree::PreCompute(*((struct CVisualTree **)this + 8), 0LL);
      v13 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL) + 552LL;
      *(_DWORD *)(v13 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v13);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, 0x209u);
        goto LABEL_40;
      }
    }
    else
    {
      v15 = CVisualTree::PreCompute(v10, 0LL);
      v12 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x20Du);
        goto LABEL_40;
      }
    }
  }
  v17 = CDrawingContext::Create((struct CComposition *)v4, &v47);
  v12 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x211u);
    v2 = v47;
  }
  else
  {
    *(_BYTE *)(v4 + 1256) = 1;
    if ( !v8 && CVisual::GetEffectiveOffset(*(CVisual **)(*((_QWORD *)this + 8) + 24LL), &v40, &v39, &v41) )
      CMILMatrix::Translate((CMILMatrix *)v42, COERCE_FLOAT(LODWORD(v40) ^ _xmm), COERCE_FLOAT(LODWORD(v39) ^ _xmm));
    v2 = v47;
    v19 = CDrawingContext::BeginFrame(
            v47,
            *((struct IRenderTarget **)this + 9),
            &stru_18024C648,
            1,
            (__int64)v42,
            0LL,
            0,
            0LL);
    v12 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x228u);
    }
    else
    {
      ++dword_180308098;
      CVisualTree::GetBounds(*((struct CVisualTree **)this + 8), (__int64)&v47);
      v21 = v51 <= v50;
      if ( v48 <= *(float *)&v47 )
        ++v21;
      if ( v49 <= *((float *)&v47 + 1) )
        ++v21;
      if ( v21 <= 1 )
      {
        CDrawingContext::CalculateOcclusion(v2, *((struct CVisualTree **)this + 8), 1LL, (__int64)&v52, 0, 1, &v47);
        v26 = CDrawingContext::DrawVisualTree(v2, *((_QWORD *)this + 8), &v52, 0LL, 0x7FFFFFFF, 1, 0, 1, 0, 0, 1);
        v12 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x24Fu);
        }
        else
        {
          if ( g_LockAndReadOffscreenTarget )
            CDrawingContext::ReadTexture(v2);
          if ( v8 )
          {
            v28 = *(_QWORD *)(v4 + 64);
            v29 = 0;
            if ( *(_DWORD *)(v28 + 80) )
            {
              while ( 1 )
              {
                v30 = *(_QWORD *)(*(_QWORD *)(v28 + 56) + 8LL * v29);
                if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 264LL))(v30) )
                  break;
                if ( ++v29 >= *(_DWORD *)(v28 + 80) )
                  goto LABEL_36;
              }
              v31 = *(_QWORD *)(*(_QWORD *)(v28 + 56) + 8LL * v29);
              if ( v31 )
              {
                v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 200LL))(v31);
                if ( v32 )
                {
                  v33 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
                  v34 = (float)*((int *)this + 21);
                  *(float *)&v47 = (float)*((int *)this + 20);
                  *((float *)&v47 + 1) = v34;
                  v35 = (float)*((int *)this + 23);
                  v48 = _mm_cvtepi32_ps(v33).m128_f32[0] + *(float *)&v47;
                  v49 = v35 + v34;
                  v36 = CComposeTop::FullRender(v32, v2, v42, &v47);
                  v12 = v36;
                  if ( v36 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x275u);
                }
              }
            }
          }
        }
      }
      else
      {
        v22 = CDrawingContext::PushGpuClipRectInternal((__int64)v2, 0LL, (float *)&v52, 1, 1);
        v12 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x236u);
        }
        else
        {
          v24 = CDrawingContext::Clear(v2, &stru_18024C648);
          v12 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x238u);
        }
      }
LABEL_36:
      CDrawingContext::EndFrame(v2);
    }
    *(_BYTE *)(v4 + 1256) = 0;
  }
LABEL_40:
  CComposition::RestoreCursors((CComposition *)v4);
  if ( v2 )
    CGdiSpriteBitmap::Release((CDrawingContext *)((char *)v2 + 16));
  return (unsigned int)v12;
}
