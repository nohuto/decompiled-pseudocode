/*
 * XREFs of ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18008B4FC
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008BCF4 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800259F4 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180025BC0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800266B0 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@Mil.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800269D8 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCBaseImageProxy@@@Z @ 0x180031C84 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilSt.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180032424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x180037540 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x18003B210 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003D31C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z @ 0x1800B57B0 (--$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::EnsureCVIResource(CAccentBlurBehind *this, const struct tagRECT *a2)
{
  unsigned int **v2; // rsi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  struct CResourceProxy **v9; // r14
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  __int64 i; // rax
  float v15; // xmm3_4
  float v16; // xmm2_4
  unsigned int v17; // eax
  __m128i v18; // xmm0
  int v19; // eax
  float v20; // xmm0_4
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  volatile signed __int32 *v26; // rsi
  int v27; // eax
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  __int64 v32; // [rsp+50h] [rbp-29h]
  __int64 v33; // [rsp+68h] [rbp-11h]
  CBaseObject *v34; // [rsp+70h] [rbp-9h] BYREF
  double v35; // [rsp+78h] [rbp-1h] BYREF
  double v36; // [rsp+80h] [rbp+7h]
  __int128 v37; // [rsp+88h] [rbp+Fh] BYREF
  __int128 v38; // [rsp+98h] [rbp+1Fh] BYREF

  v2 = (unsigned int **)((char *)this + 368);
  v35 = 0.0;
  v34 = 0LL;
  v36 = 0.0;
  if ( !*((_QWORD *)this + 46) )
  {
    v5 = CVisual::Create((struct CVisual **)this + 46);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x57Eu);
      goto LABEL_45;
    }
    CVisual::SetInterpolationMode(*v2, 0);
  }
  if ( !*((_QWORD *)this + 47) )
  {
    v7 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 47);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x584u);
      goto LABEL_45;
    }
  }
  if ( !*((_QWORD *)this + 44) )
  {
    v8 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (__int64 *)this + 44);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x589u);
      goto LABEL_45;
    }
  }
  v9 = (struct CResourceProxy **)((char *)this + 360);
  if ( !*((_QWORD *)this + 45) )
  {
    v10 = CCompositor::CreateProxy<CGaussianBlurEffectProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            (char *)this + 360);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x58Fu);
      goto LABEL_45;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))(**(_QWORD **)(*((_QWORD *)*v9 + 2) + 16LL)
                                                                          + 1016LL))(
            *(_QWORD *)(*((_QWORD *)*v9 + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)*v9 + 2) + 24LL),
            v11,
            0LL,
            1);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x590u);
      goto LABEL_45;
    }
    v13 = CVisualProxy::SetEffect(*((CVisualProxy **)*v2 + 2), *v9);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x591u);
      goto LABEL_45;
    }
  }
  for ( i = 0LL; i < 4; ++i )
    *((float *)&v37 + i) = (float)*(&a2->left + i);
  v15 = *((float *)this + 80);
  v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - 1.0)) & _xmm);
  if ( v16 >= 0.0000011920929 )
  {
    v17 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v17 = a2->bottom - a2->top;
    v18 = _mm_cvtsi32_si128(v17);
    v19 = 0;
    LODWORD(v20) = _mm_cvtepi32_ps(v18).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v19 = a2->right - a2->left;
    v36 = (float)(v20 * v15);
    v35 = (float)((float)v19 * v15);
  }
  v21 = *((_QWORD *)this + 41);
  if ( !v21 )
  {
    v22 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            (__int64 *)this + 41);
    v6 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x5A3u);
      goto LABEL_45;
    }
    v21 = *((_QWORD *)this + 41);
  }
  v23 = CCachedVisualImageProxy::Update(v21, (__int64)&v37, (__int64)&v35, 0, 0, *((_QWORD *)*v2 + 2), 0);
  v6 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x5ACu);
    goto LABEL_45;
  }
  if ( !*((_QWORD *)this + 42) )
  {
    v24 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            (__int64 *)&v34);
    v6 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x5B0u);
LABEL_42:
      v26 = (volatile signed __int32 *)v34;
LABEL_43:
      if ( v26 )
        CBaseObject::Release((CBaseObject *)v26);
      goto LABEL_45;
    }
    v26 = (volatile signed __int32 *)v34;
    v33 = *((_QWORD *)this + 41);
    v38 = _xmm;
    v37 = _xmm;
    v27 = CImageLegacyMilBrushProxy::Update(
            (__int64)v34,
            v25,
            (__int64)&v38,
            (__int64)&v37,
            0,
            1,
            1,
            0,
            0,
            1,
            v32,
            0,
            0,
            v33);
    v6 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x5CAu);
      goto LABEL_43;
    }
    v28 = (CBaseObject *)*((_QWORD *)this + 42);
    if ( v28 )
      CBaseObject::Release(v28);
    *((_QWORD *)this + 42) = v26;
    if ( v26 )
    {
      _InterlockedIncrement(v26 + 2);
      goto LABEL_42;
    }
  }
LABEL_45:
  if ( v6 < 0 )
  {
    v29 = (CBaseObject *)*((_QWORD *)this + 41);
    if ( v29 )
    {
      CBaseObject::Release(v29);
      *((_QWORD *)this + 41) = 0LL;
    }
    v30 = (CBaseObject *)*((_QWORD *)this + 42);
    if ( v30 )
    {
      CBaseObject::Release(v30);
      *((_QWORD *)this + 42) = 0LL;
    }
  }
  return (unsigned int)v6;
}
