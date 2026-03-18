/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z @ 0x1800CFCA0
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@OGA@EAAPEAXI@Z @ 0x1800F0A90 (--_ECScratchRenderTargetBitmap@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x1800CFCDC (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::`scalar deleting destructor'(
        CScratchRenderTargetBitmap *this,
        char a2)
{
  CScratchRenderTargetBitmap::~CScratchRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
