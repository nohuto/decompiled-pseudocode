/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x1800EBBD4
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800ED4B4 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ @ 0x1800EB290 (-ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ.c)
 */

char _scrt_dllmain_uninitialize_critical()
{
  CMagnifierRenderTarget *v0; // rcx

  CMagnifierRenderTarget::ShouldClearRenderTarget(0LL);
  return CMagnifierRenderTarget::ShouldClearRenderTarget(v0);
}
