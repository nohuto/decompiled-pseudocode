/*
 * XREFs of ??_GCSectionBitmapSubRectRealization@@UEAAPEAXI@Z @ 0x180226B10
 * Callers:
 *     ??_ECSectionBitmapSubRectRealization@@WFI@EAAPEAXI@Z @ 0x1800F13C0 (--_ECSectionBitmapSubRectRealization@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800918B0 (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CSectionBitmapSubRectRealization *__fastcall CSectionBitmapSubRectRealization::`scalar deleting destructor'(
        CSectionBitmapSubRectRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
