/*
 * XREFs of ??_ECLocalAppRenderTarget@@MEAAPEAXI@Z @ 0x18024E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CLocalAppRenderTarget@@MEAA@XZ @ 0x18024E974 (--1CLocalAppRenderTarget@@MEAA@XZ.c)
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
