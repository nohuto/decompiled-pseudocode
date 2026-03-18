/*
 * XREFs of ??_GCHolographicInteropTexture@@MEAAPEAXI@Z @ 0x180245120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x180244DD0 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 */

CHolographicInteropTexture *__fastcall CHolographicInteropTexture::`scalar deleting destructor'(
        CHolographicInteropTexture *this,
        char a2)
{
  CHolographicInteropTexture::~CHolographicInteropTexture(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
