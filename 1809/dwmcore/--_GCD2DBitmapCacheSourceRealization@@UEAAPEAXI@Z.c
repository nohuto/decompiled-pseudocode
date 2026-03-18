/*
 * XREFs of ??_GCD2DBitmapCacheSourceRealization@@UEAAPEAXI@Z @ 0x18009E210
 * Callers:
 *     ??_ECD2DBitmapCacheSourceRealization@@WFI@EAAPEAXI@Z @ 0x1800F14C0 (--_ECD2DBitmapCacheSourceRealization@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x18009B59C (--1CBitmapRealization@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CD2DBitmapCacheSourceRealization *__fastcall CD2DBitmapCacheSourceRealization::`scalar deleting destructor'(
        CD2DBitmapCacheSourceRealization *this,
        char a2)
{
  CBitmapRealization::~CBitmapRealization(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
