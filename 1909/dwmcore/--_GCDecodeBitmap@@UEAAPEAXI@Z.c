/*
 * XREFs of ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x180020C60
 * Callers:
 *     ??_ECDecodeBitmap@@WFI@EAAPEAXI@Z @ 0x1800F1740 (--_ECDecodeBitmap@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1800BF234 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::`scalar deleting destructor'(CDecodeBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xD0uLL);
  return this;
}
