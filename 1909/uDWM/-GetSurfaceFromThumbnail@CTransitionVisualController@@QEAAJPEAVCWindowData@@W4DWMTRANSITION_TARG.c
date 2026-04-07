/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18002FB24
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002D768 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x180028934 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCBaseImageProxy@@@Z @ 0x180031C84 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilSt.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003D31C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18008C718 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x180093628 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromThumbnail(
        __int64 a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        char a5,
        CBaseObject **a6,
        CBaseObject **a7,
        float *a8)
{
  volatile signed __int32 *v8; // rdi
  const struct tagRECT *v9; // r10
  float v10; // r15d
  unsigned int CVI; // esi
  CWindowSnapshot *v13; // rcx
  __int64 v14; // r15
  float v16; // xmm0_4
  __int64 v17; // rax
  int v18; // eax
  volatile signed __int32 *v19; // rbx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  void *v23; // [rsp+30h] [rbp-B1h]
  float v24; // [rsp+78h] [rbp-69h] BYREF
  CBaseObject *v25; // [rsp+80h] [rbp-61h] BYREF
  CBaseObject *v26; // [rsp+88h] [rbp-59h]
  __int64 v27; // [rsp+90h] [rbp-51h] BYREF
  int v28; // [rsp+98h] [rbp-49h]
  __int128 v29; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-31h] BYREF

  v25 = 0LL;
  v8 = 0LL;
  v9 = a4;
  v10 = *(float *)&a3;
  *a8 = 1.0;
  a8[1] = 1.0;
  CVI = -2147467259;
  a8[2] = 1.0;
  *(_QWORD *)&v29 = a4;
  v24 = *(float *)&a3;
  v26 = 0LL;
  if ( !a2 )
    return CVI;
  v13 = *(CWindowSnapshot **)(a2 + 432);
  if ( v13 )
  {
    CVI = CWindowSnapshot::GetCVI(v13, a4, &v25, &v24);
    v16 = 1.0 / v24;
    a8[1] = 1.0 / v24;
    *a8 = v16;
  }
  else
  {
    v14 = 0LL;
    if ( !*(_DWORD *)(a2 + 544) )
      return CVI;
    while ( 1 )
    {
      v17 = *(_QWORD *)(a2 + 520);
      v27 = 0x3F8000003F800000LL;
      v28 = 1065353216;
      if ( CThumbnailVisual::GetCVI(
             *(CThumbnailVisual **)(*(_QWORD *)(v17 + 8 * v14) + 96LL),
             v9,
             &v25,
             (struct MilPoint3F *)&v27) >= 0
        && (!a5
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v27 - 1.0)) & _xmm) <= 0.0000011920929
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v27 + 1) - 1.0)) & _xmm) <= 0.0000011920929) )
      {
        break;
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(a2 + 544) )
        goto LABEL_28;
      v9 = (const struct tagRECT *)v29;
    }
    CVI = 0;
    v18 = v28;
    v10 = v24;
    *(_QWORD *)a8 = v27;
    *((_DWORD *)a8 + 2) = v18;
  }
  if ( (CVI & 0x80000000) != 0 )
    goto LABEL_28;
  v19 = (volatile signed __int32 *)v25;
  if ( (LODWORD(v10) & 0x4000000) != 0 )
    CCachedVisualImageProxy::Freeze(v25);
  v20 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
  CVI = v20;
  if ( v20 >= 0 )
  {
    LODWORD(v23) = 1;
    v8 = (volatile signed __int32 *)v26;
    v30 = _xmm;
    v29 = _xmm;
    v22 = CImageLegacyMilBrushProxy::Update(v26, v21, &v30, &v29, 0);
    CVI = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v22,
        0x99Bu,
        v23);
      goto LABEL_29;
    }
    if ( *a7 )
      CBaseObject::Release(*a7);
    *a7 = (CBaseObject *)v19;
    if ( v19 )
    {
      _InterlockedAdd(v19 + 2, 1u);
      v19 = (volatile signed __int32 *)v25;
      v8 = (volatile signed __int32 *)v26;
    }
    if ( *a6 )
      CBaseObject::Release(*a6);
    *a6 = (CBaseObject *)v8;
    if ( !v8 )
      goto LABEL_29;
    _InterlockedAdd(v8 + 2, 1u);
    v8 = (volatile signed __int32 *)v26;
LABEL_28:
    v19 = (volatile signed __int32 *)v25;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v20,
    0x980u,
    v23);
  v8 = (volatile signed __int32 *)v26;
LABEL_29:
  if ( v19 )
    CBaseObject::Release((CBaseObject *)v19);
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return CVI;
}
