/*
 * XREFs of ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x1800BEF20
 * Callers:
 *     ??_ECRenderTargetBitmap@@OFI@EAAPEAXI@Z @ 0x1800F0E50 (--_ECRenderTargetBitmap@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1800BF234 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::`vector deleting destructor'(CRenderTargetBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
