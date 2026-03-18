/*
 * XREFs of ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x180022830
 * Callers:
 *     ??_ECDecodeBitmap@@WFI@EAAPEAXI@Z @ 0x1800EDA80 (--_ECDecodeBitmap@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x180047E54 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::`scalar deleting destructor'(CDecodeBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xD0uLL);
  return this;
}
