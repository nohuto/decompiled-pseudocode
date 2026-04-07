/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800332F8
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032148 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x18000CF44 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCBaseImageProxy@@@Z @ 0x180030BD4 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilSt.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003DA8C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18008CA78 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x180093988 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
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
  float v18; // xmm2_4
  float v19; // xmm2_4
  int v20; // eax
  volatile signed __int32 *v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  void *v25; // [rsp+30h] [rbp-B1h]
  void *v26; // [rsp+30h] [rbp-B1h]
  __int64 v27; // [rsp+58h] [rbp-89h]
  float v28; // [rsp+78h] [rbp-69h] BYREF
  CCachedVisualImageProxy *v29; // [rsp+80h] [rbp-61h] BYREF
  CBaseObject *v30; // [rsp+88h] [rbp-59h]
  __int64 v31; // [rsp+90h] [rbp-51h] BYREF
  int v32; // [rsp+98h] [rbp-49h]
  __int128 v33; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-31h] BYREF

  v29 = 0LL;
  v8 = 0LL;
  v9 = a4;
  v10 = *(float *)&a3;
  *a8 = 1.0;
  a8[1] = 1.0;
  CVI = -2147467259;
  a8[2] = 1.0;
  *(_QWORD *)&v33 = a4;
  v28 = *(float *)&a3;
  v30 = 0LL;
  if ( !a2 )
    return CVI;
  v13 = *(CWindowSnapshot **)(a2 + 432);
  if ( v13 )
  {
    CVI = CWindowSnapshot::GetCVI(v13, a4, &v29, &v28);
    v16 = 1.0 / v28;
    a8[1] = 1.0 / v28;
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
      v31 = 0x3F8000003F800000LL;
      v32 = 1065353216;
      if ( CThumbnailVisual::GetCVI(
             *(CThumbnailVisual **)(*(_QWORD *)(v17 + 8 * v14) + 96LL),
             v9,
             &v29,
             (struct MilPoint3F *)&v31) >= 0 )
      {
        if ( !a5 )
          break;
        v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v31 - 1.0)) & _xmm);
        if ( v18 <= 0.0000011920929 )
        {
          v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v31 + 1) - 1.0)) & _xmm);
          if ( v19 <= 0.0000011920929 )
            break;
        }
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(a2 + 544) )
        goto LABEL_28;
      v9 = (const struct tagRECT *)v33;
    }
    CVI = 0;
    v20 = v32;
    v10 = v28;
    *(_QWORD *)a8 = v31;
    *((_DWORD *)a8 + 2) = v20;
  }
  if ( (CVI & 0x80000000) != 0 )
    goto LABEL_28;
  v21 = (volatile signed __int32 *)v29;
  if ( (LODWORD(v10) & 0x4000000) != 0 )
    CCachedVisualImageProxy::Freeze(v29);
  v22 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
  CVI = v22;
  if ( v22 >= 0 )
  {
    v8 = (volatile signed __int32 *)v30;
    v34 = _xmm;
    v33 = _xmm;
    v24 = CImageLegacyMilBrushProxy::Update(
            (__int64)v30,
            v23,
            (__int64)&v34,
            (__int64)&v33,
            0,
            1,
            1,
            0,
            0,
            1,
            v27,
            0,
            0,
            (__int64)v21);
    CVI = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v24,
        0x99Bu,
        v26);
      goto LABEL_29;
    }
    if ( *a7 )
      CBaseObject::Release(*a7);
    *a7 = (CBaseObject *)v21;
    if ( v21 )
    {
      _InterlockedAdd(v21 + 2, 1u);
      v21 = (volatile signed __int32 *)v29;
      v8 = (volatile signed __int32 *)v30;
    }
    if ( *a6 )
      CBaseObject::Release(*a6);
    *a6 = (CBaseObject *)v8;
    if ( !v8 )
      goto LABEL_29;
    _InterlockedAdd(v8 + 2, 1u);
    v8 = (volatile signed __int32 *)v30;
LABEL_28:
    v21 = (volatile signed __int32 *)v29;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v22,
    0x980u,
    v25);
  v8 = (volatile signed __int32 *)v30;
LABEL_29:
  if ( v21 )
    CBaseObject::Release((CBaseObject *)v21);
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return CVI;
}
