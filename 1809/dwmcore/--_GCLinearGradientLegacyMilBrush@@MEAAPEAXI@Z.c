/*
 * XREFs of ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x1801747B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1801C2B74 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 */

CLinearGradientLegacyMilBrush *__fastcall CLinearGradientLegacyMilBrush::`scalar deleting destructor'(
        CLinearGradientLegacyMilBrush *this,
        char a2)
{
  CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
