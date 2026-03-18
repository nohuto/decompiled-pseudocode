/*
 * XREFs of ??_ECLocalAppRenderTarget@@MEAAPEAXI@Z @ 0x180250150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CLocalAppRenderTarget@@MEAA@XZ @ 0x1802500E4 (--1CLocalAppRenderTarget@@MEAA@XZ.c)
 */

CLocalAppRenderTarget *__fastcall CLocalAppRenderTarget::`vector deleting destructor'(
        CLocalAppRenderTarget *this,
        char a2)
{
  CLocalAppRenderTarget::~CLocalAppRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
