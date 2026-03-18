/*
 * XREFs of __scrt_dllmain_crt_thread_detach @ 0x1800E7258
 * Callers:
 *     dllmain_crt_dispatch @ 0x1800E75E0 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ @ 0x1800DD6C0 (-ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ.c)
 */

char __fastcall _scrt_dllmain_crt_thread_detach(CMagnifierRenderTarget *a1)
{
  CMagnifierRenderTarget *v1; // rcx

  CMagnifierRenderTarget::ShouldClearRenderTarget(a1);
  CMagnifierRenderTarget::ShouldClearRenderTarget(v1);
  return 1;
}
