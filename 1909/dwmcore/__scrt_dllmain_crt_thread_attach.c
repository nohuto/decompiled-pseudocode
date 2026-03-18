/*
 * XREFs of __scrt_dllmain_crt_thread_attach @ 0x1800E80D8
 * Callers:
 *     dllmain_crt_dispatch @ 0x1800E8490 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ @ 0x1800DE330 (-ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ.c)
 */

char __fastcall _scrt_dllmain_crt_thread_attach(CMagnifierRenderTarget *a1)
{
  CMagnifierRenderTarget *v1; // rcx
  CMagnifierRenderTarget *v3; // rcx

  if ( !CMagnifierRenderTarget::ShouldClearRenderTarget(a1) )
    return 0;
  if ( !CMagnifierRenderTarget::ShouldClearRenderTarget(v1) )
  {
    CMagnifierRenderTarget::ShouldClearRenderTarget(v3);
    return 0;
  }
  return 1;
}
