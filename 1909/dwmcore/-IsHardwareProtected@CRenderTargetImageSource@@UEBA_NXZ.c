/*
 * XREFs of ?IsHardwareProtected@CRenderTargetImageSource@@UEBA_NXZ @ 0x1801AADB0
 * Callers:
 *     ?IsHardwareProtected@CRenderTargetImageSource@@WJI@EBA_NXZ @ 0x1800F0EE0 (-IsHardwareProtected@CRenderTargetImageSource@@WJI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CRenderTargetImageSource::IsHardwareProtected(CRenderTargetImageSource *this)
{
  return CRenderTargetBitmap::IsHardwareProtected((CRenderTargetImageSource *)((char *)this + 152));
}
