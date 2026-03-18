/*
 * XREFs of ??_GCTextBrush@@MEAAPEAXI@Z @ 0x1801B4F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CTextBrush@@MEAA@XZ @ 0x1801B4EF0 (--1CTextBrush@@MEAA@XZ.c)
 */

CTextBrush *__fastcall CTextBrush::`scalar deleting destructor'(CTextBrush *this, char a2)
{
  CTextBrush::~CTextBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
