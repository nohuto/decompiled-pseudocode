/*
 * XREFs of ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18005F8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18000F480 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C3B8 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005F950 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008E470 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COffScreenRenderingLayer::ApplyState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  char v4; // bp
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  float v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = FLOAT_1_0;
  v4 = 0;
  v5 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)a2 + 816, &v11);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1833u);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v7, 0x4Au);
  }
  else
  {
    v4 = 1;
    v8 = CExternalLayer::ApplyRenderTarget(this, a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x50u);
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
