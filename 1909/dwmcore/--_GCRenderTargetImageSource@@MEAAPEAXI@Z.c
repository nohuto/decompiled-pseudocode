/*
 * XREFs of ??_GCRenderTargetImageSource@@MEAAPEAXI@Z @ 0x1800BF104
 * Callers:
 *     ??_ECRenderTargetImageSource@@O7EAAPEAXI@Z @ 0x1800F0E60 (--_ECRenderTargetImageSource@@O7EAAPEAXI@Z.c)
 *     ??_ECRenderTargetImageSource@@OGA@EAAPEAXI@Z @ 0x1800F0E70 (--_ECRenderTargetImageSource@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x1800BF140 (--1CRenderTargetImageSource@@MEAA@XZ.c)
 */

CRenderTargetImageSource *__fastcall CRenderTargetImageSource::`scalar deleting destructor'(
        CRenderTargetImageSource *this,
        char a2)
{
  CRenderTargetImageSource::~CRenderTargetImageSource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
