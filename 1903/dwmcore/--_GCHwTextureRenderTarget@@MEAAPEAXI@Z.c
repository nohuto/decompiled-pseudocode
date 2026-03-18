/*
 * XREFs of ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x1800B2280
 * Callers:
 *     ??_ECHwTextureRenderTarget@@OGA@EAAPEAXI@Z @ 0x1800ECAA0 (--_ECHwTextureRenderTarget@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800B42E4 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CHwTextureRenderTarget *__fastcall CHwTextureRenderTarget::`scalar deleting destructor'(
        CHwTextureRenderTarget *this,
        char a2)
{
  CHwTextureRenderTarget::~CHwTextureRenderTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xD0uLL);
  return this;
}
