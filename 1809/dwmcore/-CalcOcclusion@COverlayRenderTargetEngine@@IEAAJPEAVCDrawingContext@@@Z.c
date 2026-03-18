/*
 * XREFs of ?CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z @ 0x18015E3F0
 * Callers:
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x18015ED70 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015E8A0 (-GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::CalcOcclusion(
        COverlayRenderTargetEngine *this,
        struct CDrawingContext *a2)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rcx
  CDrawingContext *v5; // r10
  _QWORD *v6; // r11
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  _BYTE v13[16]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 26);
  if ( *(_BYTE *)(v2 + 2883) )
  {
    COverlayRenderTargetEngine::GetBounds(this, 0LL, v13);
    v7 = CDrawingContext::CalculateOcclusion(
           v5,
           *(struct CVisualTree **)(v4 + 120),
           (unsigned int)(v3 + 1),
           (__int64)v13,
           0,
           v3,
           v6);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x192u);
  }
  else
  {
    v10 = CDrawingContext::CalculateOcclusion(
            a2,
            *((struct CVisualTree **)this + 15),
            *(unsigned int *)(v2 + 1276),
            v2 + 1116,
            0,
            0,
            (_QWORD *)this + 25);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x19Bu);
  }
  return v9;
}
