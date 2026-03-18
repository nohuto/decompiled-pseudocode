/*
 * XREFs of ?GetCurrentFrameBuffer@CCaptureRenderTarget@@AEAAPEAUIDXGIResource@@XZ @ 0x180158500
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180157F88 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_NI@Z @ 0x1801585C0 (-Present@CCaptureRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180158C70 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct IDXGIResource *__fastcall CCaptureRenderTarget::GetCurrentFrameBuffer(CCaptureRenderTarget *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 114);
  if ( v1 == -1 )
    return 0LL;
  else
    return *(struct IDXGIResource **)(*((_QWORD *)this + 64) + 8LL * v1);
}
