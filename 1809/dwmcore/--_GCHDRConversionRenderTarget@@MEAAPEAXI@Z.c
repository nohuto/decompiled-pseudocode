/*
 * XREFs of ??_GCHDRConversionRenderTarget@@MEAAPEAXI@Z @ 0x180203770
 * Callers:
 *     ??_ECHDRConversionRenderTarget@@OKA@EAAPEAXI@Z @ 0x1800F1080 (--_ECHDRConversionRenderTarget@@OKA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x180203704 (--1CHDRConversionRenderTarget@@MEAA@XZ.c)
 */

CHDRConversionRenderTarget *__fastcall CHDRConversionRenderTarget::`scalar deleting destructor'(
        CHDRConversionRenderTarget *this,
        char a2)
{
  CHDRConversionRenderTarget::~CHDRConversionRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
