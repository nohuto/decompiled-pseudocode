/*
 * XREFs of ?UpdateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CC640
 * Callers:
 *     ?PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CBDC0 (-PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GenerateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C949C (-GenerateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::UpdateBlurIntermediate(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  int BlurIntermediate; // eax
  __int64 v5; // rcx

  v3 = 0;
  if ( !*((_QWORD *)this + 48) )
  {
    BlurIntermediate = CProjectedShadow::GenerateBlurIntermediate(this, a2, a3);
    v3 = BlurIntermediate;
    if ( BlurIntermediate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, BlurIntermediate, 0x328u);
  }
  return v3;
}
