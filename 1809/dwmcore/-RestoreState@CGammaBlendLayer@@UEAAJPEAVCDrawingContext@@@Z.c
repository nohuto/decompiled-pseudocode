/*
 * XREFs of ?RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D880
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008E470 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x18017D344 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 */

__int64 __fastcall CGammaBlendLayer::RestoreState(CGammaBlendLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v10[6]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 0;
  v10[1] = 0;
  v10[2] = *((_DWORD *)this + 6);
  v10[3] = *((_DWORD *)this + 7);
  v4 = CExternalLayer::RestoreState(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x60u);
  }
  else
  {
    v7 = CGammaBlendLayer::CopyAndTransform(
           (__int64)this,
           (__int64)a2,
           *((__int64 **)this + 1),
           v10,
           (__int64)this + 16,
           3u);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x62u);
  }
  return v6;
}
