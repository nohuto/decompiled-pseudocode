/*
 * XREFs of ??1DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@XZ @ 0x18019E1B0
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024F14C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair::~DXGIResourceRenderTargetBitmapPair(
        CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *this)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 1);
}
