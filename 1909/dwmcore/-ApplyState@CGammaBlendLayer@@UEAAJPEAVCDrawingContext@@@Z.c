/*
 * XREFs of ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D730
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180014450 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18003F558 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x18017D844 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 */

__int64 __fastcall CGammaBlendLayer::ApplyState(CGammaBlendLayer *this, struct CDrawingContext *a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rbp
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  _DWORD v13[6]; // [rsp+30h] [rbp-18h] BYREF

  v13[0] = 0;
  v13[1] = 0;
  v13[2] = *((_DWORD *)this + 6);
  v13[3] = *((_DWORD *)this + 7);
  v4 = CDrawingContext::FlushD2D(a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x49u, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)a2 + 44);
    v8 = CExternalLayer::ApplyState(this, a2);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4Eu, 0LL);
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(CGammaBlendLayer *, struct CDrawingContext *, __int64, char *, _DWORD *, int))CGammaBlendLayer::CopyAndTransform)(
              this,
              a2,
              v7,
              (char *)this + 16,
              v13,
              2);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x50u, 0LL);
    }
  }
  return v6;
}
