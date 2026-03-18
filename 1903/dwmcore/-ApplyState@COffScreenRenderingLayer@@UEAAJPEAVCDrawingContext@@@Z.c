/*
 * XREFs of ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800CC620
 * Callers:
 *     <none>
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x180012424 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x1800742B0 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18007ADCC (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18007AF80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall COffScreenRenderingLayer::ApplyState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  char v4; // bp
  signed int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx

  v4 = 0;
  v5 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 0);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x4Au, 0LL);
  }
  else
  {
    v4 = 1;
    v8 = CExternalLayer::ApplyRenderTarget(this, a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x50u, 0LL);
    }
    else
    {
      *((_BYTE *)this + 36) = *((_BYTE *)a2 + 6347);
      *((_BYTE *)a2 + 6347) = 0;
      *((_BYTE *)this + 35) = 1;
    }
  }
  if ( v7 < 0 )
  {
    CExternalLayer::RestoreState(this, a2);
    if ( v4 )
      CDrawingContext::PopAlpha(a2, 0);
  }
  return (unsigned int)v7;
}
