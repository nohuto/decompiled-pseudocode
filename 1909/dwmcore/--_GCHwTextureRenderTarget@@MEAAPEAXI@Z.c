/*
 * XREFs of ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x1800D7DB0
 * Callers:
 *     ??_ECHwTextureRenderTarget@@OGA@EAAPEAXI@Z @ 0x1800F0760 (--_ECHwTextureRenderTarget@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x180049B88 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 */

CHwTextureRenderTarget *__fastcall CHwTextureRenderTarget::`scalar deleting destructor'(
        CHwTextureRenderTarget *this,
        char a2)
{
  CHwTextureRenderTarget::~CHwTextureRenderTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
