/*
 * XREFs of ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1800DA400
 * Callers:
 *     ??_ECHwFullScreenRenderTarget@@OGA@EAAPEAXI@Z @ 0x1800F03F0 (--_ECHwFullScreenRenderTarget@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800DA43C (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 */

CHwFullScreenRenderTarget *__fastcall CHwFullScreenRenderTarget::`scalar deleting destructor'(
        CHwFullScreenRenderTarget *this,
        char a2)
{
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
