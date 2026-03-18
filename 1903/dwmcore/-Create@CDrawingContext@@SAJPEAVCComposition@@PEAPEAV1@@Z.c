/*
 * XREFs of ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18004675C
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004322C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180048610 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180048830 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800B4C0C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800B58BC (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018C69C (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABDAC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@CDrawingContext@@EEAAJXZ @ 0x1800467F0 (-Initialize@CDrawingContext@@EEAAJXZ.c)
 *     ??0CDrawingContext@@AEAA@PEAVCComposition@@@Z @ 0x180046878 (--0CDrawingContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::Create(struct CComposition *a1, struct CDrawingContext **a2)
{
  CDrawingContext *v4; // rax
  __int64 v5; // r8
  CDrawingContext *v6; // rax
  unsigned int v7; // ecx
  struct CDrawingContext *v8; // rsi
  CDrawingContext *v9; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CDrawingContext *)DefaultHeap::AllocClear(0x18E0uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v5);
  v6 = CDrawingContext::CDrawingContext(v4, a1);
  v8 = v6;
  if ( v6 )
  {
    v9 = (CDrawingContext *)((char *)v6 + 16);
    CMILCOMBase::InternalAddRef((CDrawingContext *)((char *)v6 + 16));
    v10 = CDrawingContext::Initialize(v9);
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x254u, 0LL);
    else
      *a2 = v8;
    if ( v12 < 0 )
      CGdiSpriteBitmap::Release(v9);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x250u, 0LL);
  }
  return (unsigned int)v12;
}
