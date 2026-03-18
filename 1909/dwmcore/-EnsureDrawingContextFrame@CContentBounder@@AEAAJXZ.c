/*
 * XREFs of ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180058890
 * Callers:
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058794 (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180024E70 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800258CC (-Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800259C4 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x18002ADF8 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x180059100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CContentBounder::EnsureDrawingContextFrame(CContentBounder *this)
{
  struct CDrawingContext **v1; // rdi
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // ebx
  struct CComposition *v7; // rbp
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx

  v1 = (struct CDrawingContext **)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    goto LABEL_2;
  v7 = *(struct CComposition **)this;
  v8 = CSwRenderTargetGetBounds::Create(*(struct CComposition **)this, (struct CSwRenderTargetGetBounds **)this + 2);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6Fu, 0LL);
  }
  else
  {
    v10 = CDrawingContext::Create(v7, v1);
    v5 = v10;
    if ( v10 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x70u, 0LL);
  }
  ReleaseInterface<CDrawingContext>((__int64 *)v1);
  ReleaseInterface<CSwRenderTargetGetBounds>((CGdiSpriteBitmap **)this + 2);
LABEL_6:
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v5, 0x92u, 0LL);
    return (unsigned int)v5;
  }
LABEL_2:
  v3 = CDrawingContext::BeginFrame(*v1, 0LL, 0LL, 0, 0LL);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x9Eu, 0LL);
  return (unsigned int)v5;
}
