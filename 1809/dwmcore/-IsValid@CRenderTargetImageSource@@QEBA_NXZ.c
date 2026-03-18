/*
 * XREFs of ?IsValid@CRenderTargetImageSource@@QEBA_NXZ @ 0x18000E72C
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000E500 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1801948AC (-UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180194AE0 (-UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?Validate@CRenderTargetBitmap@@IEBAJXZ @ 0x180094F30 (-Validate@CRenderTargetBitmap@@IEBAJXZ.c)
 */

bool __fastcall CRenderTargetImageSource::IsValid(CRenderTargetImageSource *this)
{
  return (int)CRenderTargetBitmap::Validate((CRenderTargetImageSource *)((char *)this + 8)) >= 0;
}
