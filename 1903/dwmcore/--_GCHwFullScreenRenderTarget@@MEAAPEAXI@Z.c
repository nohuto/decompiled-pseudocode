/*
 * XREFs of ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1800B59C0
 * Callers:
 *     ??_ECHwFullScreenRenderTarget@@OGA@EAAPEAXI@Z @ 0x1800EC730 (--_ECHwFullScreenRenderTarget@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800B5930 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CHwFullScreenRenderTarget *__fastcall CHwFullScreenRenderTarget::`scalar deleting destructor'(
        CHwFullScreenRenderTarget *this,
        char a2)
{
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x208uLL);
  return this;
}
