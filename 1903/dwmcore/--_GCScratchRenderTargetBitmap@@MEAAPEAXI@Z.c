/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z @ 0x1800B41D0
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@OGA@EAAPEAXI@Z @ 0x1800ECDD0 (--_ECScratchRenderTargetBitmap@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x1800B420C (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::`scalar deleting destructor'(
        CScratchRenderTargetBitmap *this,
        char a2)
{
  CScratchRenderTargetBitmap::~CScratchRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xE0uLL);
  return this;
}
