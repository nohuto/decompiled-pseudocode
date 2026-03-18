/*
 * XREFs of ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x180229880
 * Callers:
 *     ??_ECDecodeBitmap@@WFI@EAAPEAXI@Z @ 0x1800F14B0 (--_ECDecodeBitmap@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18004E094 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::`scalar deleting destructor'(CDecodeBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
