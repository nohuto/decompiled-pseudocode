/*
 * XREFs of ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x1801749AC
 * Callers:
 *     ??_ECPrimitiveColor@@O7EAAPEAXI@Z @ 0x1800F02B0 (--_ECPrimitiveColor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CPrimitiveColor@@MEAA@XZ @ 0x1801AAD50 (--1CPrimitiveColor@@MEAA@XZ.c)
 */

CPrimitiveColor *__fastcall CPrimitiveColor::`scalar deleting destructor'(CPrimitiveColor *this, char a2)
{
  CPrimitiveColor::~CPrimitiveColor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
