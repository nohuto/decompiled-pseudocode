/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AE4D4
 * Callers:
 *     ?InitializeFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801CB520 (-InitializeFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CBDC0 (-PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AD134 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z.c)
 */

__int64 __fastcall CProjectedShadowCaster::UpdateShadowIntermediates(
        CProjectedShadowCaster *this,
        struct IRenderTarget **a2,
        struct D2D_SIZE_F *a3,
        char a4)
{
  unsigned int v4; // ebx
  int MaskIntermediate; // eax
  __int64 v6; // rcx

  v4 = 0;
  if ( !*((_QWORD *)this + 16) )
  {
    MaskIntermediate = CProjectedShadowCaster::GenerateMaskIntermediate(this, a2, a3, a4);
    v4 = MaskIntermediate;
    if ( MaskIntermediate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, MaskIntermediate, 0x302u);
  }
  return v4;
}
