/*
 * XREFs of ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18004AC18
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004322C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180049A44 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B44D0 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800B4C0C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018C69C (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18019AF70 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A4F80 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A637C (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABDAC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180245BDC (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ @ 0x180250998 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BB3C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003BBBC (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180057308 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800595F0 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180061BF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180068030 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180069E10 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18007AD30 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180085BC4 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800D44A8 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800DD030 (-PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016E1C4 (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@@Z @ 0x18017080C (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017099C (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilR.c)
 */

__int64 __fastcall CDrawingContext::DrawVisualTree(
        CDrawingContext *this,
        float *a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        float *a9,
        char a10,
        char a11)
{
  __m128 v11; // xmm2
  __int128 v12; // xmm8
  __int128 v13; // xmm9
  __int128 v15; // xmm10
  __int128 v17; // xmm11
  unsigned int v19; // edi
  __int128 v20; // xmm12
  char v21; // r14
  __int128 v22; // xmm13
  float v23; // xmm0_4
  int v24; // ecx
  unsigned int v25; // eax
  bool v26; // al
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  float v31; // xmm6_4
  __int64 v32; // rcx
  float v33; // xmm7_4
  __int64 v34; // rdx
  __int64 v35; // rcx
  float v36; // xmm0_4
  float v37; // xmm5_4
  int v38; // eax
  unsigned int v39; // ecx
  char v40; // di
  __int64 v41; // rcx
  _OWORD *v42; // r8
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  char v46; // al
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  int v51; // eax
  int v52; // eax
  __int64 result; // rax
  __int64 v54; // r8
  float v55; // xmm3_4
  float v56; // xmm0_4
  int v57; // ecx
  float v58; // xmm3_4
  int v59; // eax
  unsigned int v60; // [rsp+28h] [rbp-C9h]
  float v61; // [rsp+38h] [rbp-B9h]
  __int128 v62; // [rsp+40h] [rbp-B1h] BYREF
  __int128 v63; // [rsp+50h] [rbp-A1h] BYREF
  float v64; // [rsp+60h] [rbp-91h] BYREF
  float v65; // [rsp+64h] [rbp-8Dh]
  float v66; // [rsp+68h] [rbp-89h]
  float v67; // [rsp+6Ch] [rbp-85h]

  v12 = *((_OWORD *)this + 378);
  v13 = *((_OWORD *)this + 379);
  v15 = *((_OWORD *)this + 380);
  v17 = *((_OWORD *)this + 381);
  v19 = 0;
  v20 = *((_OWORD *)this + 382);
  v21 = 0;
  v22 = *((_OWORD *)this + 383);
  *((_BYTE *)this + 6133) = a7;
  *((_WORD *)this + 3024) = 1;
  *((_QWORD *)this + 757) = a2;
  v23 = a2[14];
  v24 = (v23 <= a2[13]) + 1;
  if ( a2[11] > a2[9] )
    v24 = v23 <= a2[13];
  v25 = v24 + 1;
  if ( a2[12] > a2[10] )
    v25 = v24;
  if ( v25 > 1 )
    goto LABEL_55;
  if ( a8 && *((_QWORD *)this + 784) )
  {
    v26 = g_bUseOcclusion;
    *((_BYTE *)this + 6347) = g_bUseOcclusion;
  }
  else
  {
    *((_BYTE *)this + 6347) = 0;
    v26 = 0;
  }
  if ( v26 )
    COcclusionContext::SetDeviceTransform(*((COcclusionContext **)this + 784), (CDrawingContext *)((char *)this + 3648));
  v27 = *((_QWORD *)this + 46);
  if ( v27 )
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v27 + 320LL))(v27, &v64);
  else
    (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 44) + 48LL))(*((_QWORD *)this + 44), &v64);
  if ( a11 )
  {
    v62 = *a3;
    v36 = *((float *)&v62 + 3);
    v33 = *((float *)&v62 + 2);
    v31 = *((float *)&v62 + 1);
    v37 = *(float *)&v62;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<0>((CDrawingContext *)((char *)this + 3648));
    *(float *)&v62 = (float)(int)PixelAlign(v28, 0LL);
    v31 = (float)(int)PixelAlign(v30, v29);
    *((float *)&v62 + 1) = v31;
    v33 = (float)(int)PixelAlign(v32, 1LL);
    *((float *)&v62 + 2) = v33;
    v36 = (float)(int)PixelAlign(v35, v34);
    *((float *)&v62 + 3) = v36;
  }
  if ( v64 > v37 )
  {
    *(float *)&v62 = v64;
    v37 = v64;
  }
  if ( v65 > v31 )
  {
    *((float *)&v62 + 1) = v65;
    v31 = v65;
  }
  if ( v33 > v66 )
  {
    *((float *)&v62 + 2) = v66;
    v33 = v66;
  }
  if ( v36 > v67 )
  {
    *((float *)&v62 + 3) = v67;
    v36 = v67;
  }
  if ( v33 <= v37 || v36 <= v31 )
    v62 = 0uLL;
  v38 = CDrawingContext::PushTransformInternal(this, 0LL, (CDrawingContext *)((char *)this + 3648), 1, 1);
  v19 = v38;
  if ( v38 < 0 )
  {
    v60 = 6490;
    goto LABEL_90;
  }
  v38 = CDrawingContext::PushGpuClipRectInternal((_DWORD)this, 0, (unsigned int)&v62, 1, 1);
  v19 = v38;
  if ( v38 < 0 )
  {
    v60 = 6499;
    goto LABEL_90;
  }
  if ( !*((_QWORD *)this + 45) && !*((_QWORD *)this + 787) )
  {
    v40 = a6;
    if ( !a6 )
    {
      if ( a10 )
      {
        if ( *((float *)&v62 + 2) > *(float *)&v62 && *((float *)&v62 + 3) > *((float *)&v62 + 1) )
        {
          if ( *((_BYTE *)this + 6347) )
          {
            v41 = *(_QWORD *)(*((_QWORD *)this + 784) + 400LL);
            v63 = v62;
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v41 + 56LL))(
                   v41,
                   &v63,
                   0x7FFFFFFFLL) )
            {
              (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 44) + 88LL))(
                *((_QWORD *)this + 44),
                &v62);
            }
          }
        }
      }
      goto LABEL_36;
    }
    if ( *((_BYTE *)this + 6347) )
    {
      CScopedClipStack::GetClipBoundsWorld((char *)this + 1008, &v63);
      LOBYTE(v54) = 1;
      v40 = a6;
      if ( (unsigned __int8)COcclusionContext::IsOccluded(
                              *((_QWORD *)this + 784),
                              &v63,
                              v54,
                              *(unsigned int *)(*((_QWORD *)this + 784) + 1040LL)) )
        v40 = 0;
    }
    if ( !v40 )
      goto LABEL_36;
    v38 = CDrawingContext::Clear(this, (const struct _D3DCOLORVALUE *)((char *)this + 424));
    v19 = v38;
    if ( v38 >= 0 )
      goto LABEL_36;
    v60 = 6525;
LABEL_90:
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, v60, 0LL);
    goto LABEL_55;
  }
LABEL_36:
  if ( *((_QWORD *)this + 465) )
  {
    v38 = CDrawingContext::PushColorTransformLayer(this, 0LL);
    v19 = v38;
    if ( v38 < 0 )
    {
      v60 = 6539;
      goto LABEL_90;
    }
  }
  *((_DWORD *)this + 1572) = 0;
  if ( a9 && !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a9) )
  {
    v55 = a9[3] - a9[1];
    v56 = (float)(a9[2] - *a9) * 0.5;
    *(_QWORD *)&v63 = 0LL;
    if ( (LODWORD(v56) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v11.m128_f32[0] = (float)(int)v56 - v56;
      v11 = _mm_cmple_ss(v11, (__m128)LODWORD(FLOAT_N0_5));
      v57 = (int)v56 - v11.m128_i32[0];
    }
    else
    {
      v61 = v56 + 6291456.25;
      v57 = (int)(LODWORD(v61) << 10) >> 11;
    }
    v58 = v55 * 0.5;
    if ( (LODWORD(v58) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v11.m128_f32[0] = (float)(int)v58 - v58;
      v59 = (int)v58 - _mm_cmple_ss(v11, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v61 = v58 + 6291456.25;
      v59 = (int)(LODWORD(v61) << 10) >> 11;
    }
    if ( v57 > 2048 )
      v57 = 2048;
    DWORD2(v63) = v57;
    if ( v59 > 2048 )
      v59 = 2048;
    HIDWORD(v63) = v59;
    v38 = CDrawingContext::PushLinearInterpolationLayer(this);
    v19 = v38;
    if ( v38 < 0 )
    {
      v60 = 6573;
      goto LABEL_90;
    }
    v21 = 1;
  }
  v42 = (_OWORD *)((char *)this + 6064);
  *((_DWORD *)this + 1534) = a5;
  *((_QWORD *)this + 790) = a4;
  v43 = *((_DWORD *)this + 120);
  if ( v43 )
  {
    v44 = (unsigned int)(v43 - 1);
    v45 = *((_QWORD *)this + 62);
    *v42 = *(_OWORD *)(68 * v44 + v45);
    *((_OWORD *)this + 380) = *(_OWORD *)(68 * v44 + v45 + 16);
    *((_OWORD *)this + 381) = *(_OWORD *)(68 * v44 + v45 + 32);
    *((_OWORD *)this + 382) = *(_OWORD *)(68 * v44 + v45 + 48);
    *((_DWORD *)this + 1532) = *(_DWORD *)(68 * v44 + v45 + 64);
  }
  else
  {
    *v42 = _xmm;
    *((_WORD *)this + 3064) = 32085;
    *((_OWORD *)this + 380) = _xmm;
    *((_OWORD *)this + 381) = _xmm;
    *((_OWORD *)this + 382) = _xmm;
  }
  v46 = CMILMatrix::IsIdentity<0>((char *)this + 6064);
  v47 = *((_QWORD *)this + 757);
  *((_BYTE *)this + 6049) = 1;
  *((_BYTE *)this + 6132) = v46 != 0;
  v38 = CVisualTreeIterator::WalkSubtree<CDrawingContext>((char *)this + 3328, v47, *(_QWORD *)(v47 + 24), this, 3);
  v19 = v38;
  if ( v38 < 0 )
  {
    v60 = 6594;
    goto LABEL_90;
  }
  *((_BYTE *)this + 6049) = 0;
  if ( v21 )
  {
    v38 = CDrawingContext::PopLayerInternal((__int64)this);
    v19 = v38;
    if ( v38 < 0 )
    {
      v60 = 6600;
      goto LABEL_90;
    }
  }
  if ( g_fDirtyRegion_ShowDirtyRegions )
  {
    v38 = CDrawingContext::DrawRectangleOverlay(this, a3);
    v19 = v38;
    if ( v38 < 0 )
    {
      v60 = 6614;
      goto LABEL_90;
    }
  }
  if ( *((_QWORD *)this + 465) )
    CDrawingContext::PopLayer(this);
  v48 = *((_DWORD *)this + 808);
  if ( v48 )
    *((_DWORD *)this + 808) = v48 - 1;
  v49 = 10LL * (unsigned int)(*((_DWORD *)this + 258) - 1);
  --*(_DWORD *)(*((_QWORD *)this + 126) + 8 * v49);
  *((_BYTE *)this + 6345) = 1;
  v50 = *((_DWORD *)this + 112);
  if ( v50 )
    *((_DWORD *)this + 112) = v50 - 1;
  v51 = *((_DWORD *)this + 120);
  if ( v51 )
    *((_DWORD *)this + 120) = v51 - 1;
  v52 = *((_DWORD *)this + 128);
  if ( v52 )
    *((_DWORD *)this + 128) = v52 - 1;
  *((_BYTE *)this + 6344) = 1;
  if ( *((_BYTE *)this + 6348) )
    CDrawingContext::PushWindowMetaDataToRenderTarget(this);
LABEL_55:
  *((_OWORD *)this + 378) = v12;
  *((_QWORD *)this + 790) = 0LL;
  result = v19;
  *((_OWORD *)this + 379) = v13;
  *((_OWORD *)this + 380) = v15;
  *((_OWORD *)this + 381) = v17;
  *((_OWORD *)this + 382) = v20;
  *((_OWORD *)this + 383) = v22;
  return result;
}
