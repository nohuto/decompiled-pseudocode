/*
 * XREFs of ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x18024DCFC
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024DA3C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_NI@Z @ 0x18024DD70 (-Present@CCaptureRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x18024E330 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct IDXGIResource *__fastcall CCaptureRenderTarget::GetCurrentFrameBuffer(CCaptureRenderTarget *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 112);
  if ( v1 == -1 )
    return 0LL;
  else
    return *(struct IDXGIResource **)(*((_QWORD *)this + 64) + 8LL * v1);
}
