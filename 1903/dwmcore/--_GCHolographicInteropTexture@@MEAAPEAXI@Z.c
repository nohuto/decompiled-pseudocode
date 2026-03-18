/*
 * XREFs of ??_GCHolographicInteropTexture@@MEAAPEAXI@Z @ 0x180246830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802464E0 (--1CHolographicInteropTexture@@MEAA@XZ.c)
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
