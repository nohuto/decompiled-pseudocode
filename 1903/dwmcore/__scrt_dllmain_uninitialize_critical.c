/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x1800E7314
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800E7758 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ @ 0x1800DD6C0 (-ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ.c)
 */

char _scrt_dllmain_uninitialize_critical()
{
  CMagnifierRenderTarget *v0; // rcx

  CMagnifierRenderTarget::ShouldClearRenderTarget(0LL);
  return CMagnifierRenderTarget::ShouldClearRenderTarget(v0);
}
