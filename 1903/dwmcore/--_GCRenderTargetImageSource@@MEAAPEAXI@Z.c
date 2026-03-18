/*
 * XREFs of ??_GCRenderTargetImageSource@@MEAAPEAXI@Z @ 0x180047D24
 * Callers:
 *     ??_ECRenderTargetImageSource@@O7EAAPEAXI@Z @ 0x1800ED1A0 (--_ECRenderTargetImageSource@@O7EAAPEAXI@Z.c)
 *     ??_ECRenderTargetImageSource@@OGA@EAAPEAXI@Z @ 0x1800ED1B0 (--_ECRenderTargetImageSource@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x180047D60 (--1CRenderTargetImageSource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CRenderTargetImageSource *__fastcall CRenderTargetImageSource::`scalar deleting destructor'(
        CRenderTargetImageSource *this,
        char a2)
{
  CRenderTargetImageSource::~CRenderTargetImageSource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xC8uLL);
  return this;
}
