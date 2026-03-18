/*
 * XREFs of ??_GCLinearTransferEffect@@UEAAPEAXI@Z @ 0x180217440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18019E0C0 (--1CFilterEffect@@MEAA@XZ.c)
 */

CLinearTransferEffect *__fastcall CLinearTransferEffect::`scalar deleting destructor'(
        CLinearTransferEffect *this,
        char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
