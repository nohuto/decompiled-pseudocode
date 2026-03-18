/*
 * XREFs of ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x1800DCD60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800DCDA0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 */

CHwndRenderTarget *__fastcall CHwndRenderTarget::`scalar deleting destructor'(CHwndRenderTarget *this, char a2)
{
  CHwndRenderTarget::~CHwndRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
