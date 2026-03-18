/*
 * XREFs of ??_GCHDRConversionRenderTarget@@MEAAPEAXI@Z @ 0x18015E320
 * Callers:
 *     ??_ECHDRConversionRenderTarget@@OGA@EAAPEAXI@Z @ 0x1800F03E0 (--_ECHDRConversionRenderTarget@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x18015E290 (--1CHDRConversionRenderTarget@@MEAA@XZ.c)
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
