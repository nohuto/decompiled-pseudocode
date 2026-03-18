/*
 * XREFs of ??_GCHDRConversionRenderTarget@@MEAAPEAXI@Z @ 0x18015FA10
 * Callers:
 *     ??_ECHDRConversionRenderTarget@@OGA@EAAPEAXI@Z @ 0x1800EC720 (--_ECHDRConversionRenderTarget@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x18015F970 (--1CHDRConversionRenderTarget@@MEAA@XZ.c)
 */

CHDRConversionRenderTarget *__fastcall CHDRConversionRenderTarget::`scalar deleting destructor'(
        CHDRConversionRenderTarget *this,
        char a2)
{
  CHDRConversionRenderTarget::~CHDRConversionRenderTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
