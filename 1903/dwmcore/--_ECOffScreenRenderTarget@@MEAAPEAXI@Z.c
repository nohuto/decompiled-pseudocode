/*
 * XREFs of ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x18019A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18019A800 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::`vector deleting destructor'(
        COffScreenRenderTarget *this,
        char a2)
{
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
