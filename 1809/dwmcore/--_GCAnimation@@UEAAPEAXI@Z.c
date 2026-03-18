/*
 * XREFs of ??_GCAnimation@@UEAAPEAXI@Z @ 0x180068A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAnimation@@UEAA@XZ @ 0x180068AA0 (--1CAnimation@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CAnimation *__fastcall CAnimation::`scalar deleting destructor'(CAnimation *this, char a2)
{
  CAnimation::~CAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
