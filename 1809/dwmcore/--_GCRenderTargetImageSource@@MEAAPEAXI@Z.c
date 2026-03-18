/*
 * XREFs of ??_GCRenderTargetImageSource@@MEAAPEAXI@Z @ 0x18004DE28
 * Callers:
 *     ??_ECRenderTargetImageSource@@O7EAAPEAXI@Z @ 0x1800F0590 (--_ECRenderTargetImageSource@@O7EAAPEAXI@Z.c)
 *     ??_ECRenderTargetImageSource@@OGA@EAAPEAXI@Z @ 0x1800F05A0 (--_ECRenderTargetImageSource@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x18004DE78 (--1CRenderTargetImageSource@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CRenderTargetImageSource *__fastcall CRenderTargetImageSource::`scalar deleting destructor'(
        CRenderTargetImageSource *this,
        char a2)
{
  CRenderTargetImageSource::~CRenderTargetImageSource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    }
    else if ( this )
    {
      HeapFree(WPF::g_processHeap, 0, this);
    }
  }
  return this;
}
