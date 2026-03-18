/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABDAC
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800D20E0 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18004675C (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800486D4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18004AC18 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x18004B620 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180057308 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18006FC34 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180072034 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18007AD30 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800B46D4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D896C (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x180170DD4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801C30F8 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FF57C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  __int64 v2; // r13
  CDrawingContext *v3; // rdi
  __int64 v4; // rax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  char v7; // r14
  float v8; // xmm2_4
  __int64 v9; // rcx
  __int64 v10; // rbx
  signed int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __m128 v21; // xmm1
  unsigned int v22; // eax
  signed int v23; // eax
  __int64 v24; // rcx
  signed int v25; // eax
  __int64 v26; // rcx
  signed int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r14
  unsigned int v30; // r15d
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __m128i v34; // xmm0
  float v35; // xmm2_4
  float v36; // xmm1_4
  signed int v37; // eax
  __int64 v38; // rcx
  float v40; // [rsp+68h] [rbp-69h] BYREF
  float v41; // [rsp+6Ch] [rbp-65h] BYREF
  float v42; // [rsp+70h] [rbp-61h] BYREF
  __int64 v43[2]; // [rsp+78h] [rbp-59h] BYREF
  __int128 v44; // [rsp+88h] [rbp-49h]
  __int128 v45; // [rsp+98h] [rbp-39h]
  __int128 v46; // [rsp+A8h] [rbp-29h]
  __int16 v47; // [rsp+B8h] [rbp-19h]
  CDrawingContext *v48[2]; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v49; // [rsp+D8h] [rbp+7h]
  struct D2D_RECT_F v50; // [rsp+E0h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 96LL);
  v3 = 0LL;
  v4 = *((_QWORD *)this + 8);
  *(_OWORD *)v43 = _xmm;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v44 = _xmm;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v47 = 32085;
  v48[0] = 0LL;
  v45 = _xmm;
  v46 = _xmm;
  v7 = *(_BYTE *)(v4 + 32);
  v50.left = 0.0;
  v50.top = 0.0;
  v50.right = _mm_cvtepi32_ps(v5).m128_f32[0] + 0.0;
  v50.bottom = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  CComposition::ShowHideCursors((CComposition *)v2, 0);
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 24) - 1.0)) & _xmm);
  if ( v8 >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)v43, *((float *)this + 24), *((float *)this + 24), 1.0);
  CMILMatrix::Translate((CMILMatrix *)v43, (float)-*((_DWORD *)this + 20), (float)-*((_DWORD *)this + 21));
  v9 = *((_QWORD *)this + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 24) + 88LL) & 0x7F) != 0 )
  {
    if ( v7 )
    {
      v10 = *(_QWORD *)(v9 + 16) + 568LL;
      AcquireSRWLockExclusive((PSRWLOCK)v10);
      *(_DWORD *)(v10 + 8) = GetCurrentThreadId();
      v11 = CVisualTree::PreCompute(*((_QWORD *)this + 8), 0LL);
      v12 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL) + 568LL;
      *(_DWORD *)(v12 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v12);
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v11, 0x207u, 0LL);
        goto LABEL_40;
      }
    }
    else
    {
      v14 = CVisualTree::PreCompute(v9, 0LL);
      v11 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x20Bu, 0LL);
        goto LABEL_40;
      }
    }
  }
  v16 = CDrawingContext::Create((struct CComposition *)v2, v48);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x20Fu, 0LL);
    v3 = v48[0];
  }
  else
  {
    *(_BYTE *)(v2 + 1273) = 1;
    if ( !v7 && CVisual::GetEffectiveOffset(*(CVisual **)(*((_QWORD *)this + 8) + 24LL), &v41, &v40, &v42) )
      CMILMatrix::Translate((CMILMatrix *)v43, COERCE_FLOAT(LODWORD(v41) ^ _xmm), COERCE_FLOAT(LODWORD(v40) ^ _xmm));
    v3 = v48[0];
    v18 = CDrawingContext::BeginFrame(
            v48[0],
            *((struct IRenderTarget **)this + 9),
            &stru_180283020,
            1,
            (__int64)v43,
            0LL,
            0,
            0LL);
    v11 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x226u, 0LL);
    }
    else
    {
      ++dword_18033C778;
      v20 = *((_QWORD *)this + 8);
      v21 = *(__m128 *)(v20 + 36);
      v49 = *(_QWORD *)(v20 + 52);
      v22 = *((float *)&v49 + 1) <= *(float *)&v49;
      *(__m128 *)v48 = v21;
      if ( _mm_shuffle_ps(v21, v21, 170).m128_f32[0] <= v21.m128_f32[0] )
        ++v22;
      if ( *((float *)&v48[1] + 1) <= *((float *)v48 + 1) )
        ++v22;
      if ( v22 <= 1 )
      {
        CDrawingContext::CalculateOcclusion(v3, (struct CVisualTree *)v20, 1u, &v50, 0, 1, v48);
        v27 = CDrawingContext::DrawVisualTree(
                v3,
                *((float **)this + 8),
                (__int128 *)&v50,
                0LL,
                0x7FFFFFFF,
                1,
                0,
                1,
                0LL,
                0,
                1);
        v11 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x24Du, 0LL);
        }
        else
        {
          if ( g_LockAndReadOffscreenTarget )
            CDrawingContext::ReadTexture(v3);
          if ( v7 )
          {
            v29 = *(_QWORD *)(v2 + 64);
            v30 = 0;
            if ( *(_DWORD *)(v29 + 80) )
            {
              while ( 1 )
              {
                v31 = *(_QWORD *)(*(_QWORD *)(v29 + 56) + 8LL * v30);
                if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v31 + 264LL))(v31) )
                  break;
                if ( ++v30 >= *(_DWORD *)(v29 + 80) )
                  goto LABEL_36;
              }
              v32 = *(_QWORD *)(*(_QWORD *)(v29 + 56) + 8LL * v30);
              if ( v32 )
              {
                v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 200LL))(v32);
                if ( v33 )
                {
                  v34 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
                  v35 = (float)*((int *)this + 21);
                  *(float *)v48 = (float)*((int *)this + 20);
                  *((float *)v48 + 1) = v35;
                  v36 = (float)*((int *)this + 23);
                  *(float *)&v48[1] = _mm_cvtepi32_ps(v34).m128_f32[0] + *(float *)v48;
                  *((float *)&v48[1] + 1) = v36 + v35;
                  v37 = CComposeTop::FullRender(v33, v3, v43, v48);
                  v11 = v37;
                  if ( v37 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x273u, 0LL);
                }
              }
            }
          }
        }
      }
      else
      {
        v23 = CDrawingContext::PushGpuClipRectInternal((__int64)v3, 0LL, &v50.left, 1, 1);
        v11 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x234u, 0LL);
        }
        else
        {
          v25 = CDrawingContext::Clear(v3, &stru_180283020);
          v11 = v25;
          if ( v25 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x236u, 0LL);
        }
      }
LABEL_36:
      CDrawingContext::EndFrame(v3);
    }
    *(_BYTE *)(v2 + 1273) = 0;
  }
LABEL_40:
  CComposition::RestoreCursors((CComposition *)v2);
  if ( v3 )
    CGdiSpriteBitmap::Release((CDrawingContext *)((char *)v3 + 16));
  return (unsigned int)v11;
}
