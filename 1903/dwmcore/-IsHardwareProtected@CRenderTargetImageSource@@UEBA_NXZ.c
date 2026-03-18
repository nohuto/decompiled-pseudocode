/*
 * XREFs of ?IsHardwareProtected@CRenderTargetImageSource@@UEBA_NXZ @ 0x1801AC670
 * Callers:
 *     ?IsHardwareProtected@CRenderTargetImageSource@@WJI@EBA_NXZ @ 0x1800ED220 (-IsHardwareProtected@CRenderTargetImageSource@@WJI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CRenderTargetImageSource::IsHardwareProtected(CRenderTargetImageSource *this)
{
  return CRenderTargetBitmap::IsHardwareProtected((CRenderTargetImageSource *)((char *)this + 152));
}
