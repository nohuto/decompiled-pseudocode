/*
 * XREFs of ?IsValid@CRenderTargetImageSource@@QEBA_NXZ @ 0x18000E0E0
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000DEB4 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1801CA650 (-UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CA894 (-UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ @ 0x1801F0688 (-EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F2338 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x1801F270C (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 * Callees:
 *     ?Validate@CRenderTargetBitmap@@IEBAJXZ @ 0x1800B2EEC (-Validate@CRenderTargetBitmap@@IEBAJXZ.c)
 */

bool __fastcall CRenderTargetImageSource::IsValid(CRenderTargetImageSource *this)
{
  return (int)CRenderTargetBitmap::Validate((CRenderTargetImageSource *)((char *)this + 8)) >= 0;
}
