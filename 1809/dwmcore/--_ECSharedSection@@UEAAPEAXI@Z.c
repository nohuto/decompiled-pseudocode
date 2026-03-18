/*
 * XREFs of ??_ECSharedSection@@UEAAPEAXI@Z @ 0x180073540
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSharedSection@@UEAA@XZ @ 0x180073580 (--1CSharedSection@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CSharedSection *__fastcall CSharedSection::`vector deleting destructor'(CSharedSection *this, char a2)
{
  CSharedSection::~CSharedSection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
