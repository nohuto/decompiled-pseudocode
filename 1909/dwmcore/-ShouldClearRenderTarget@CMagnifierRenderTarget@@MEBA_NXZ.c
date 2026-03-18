/*
 * XREFs of ?ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ @ 0x1800DE330
 * Callers:
 *     __scrt_dllmain_crt_thread_attach @ 0x1800E80D8 (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x1800E8108 (__scrt_dllmain_crt_thread_detach.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x1800E81C4 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_initialize_crt @ 0x1800E81E0 (__scrt_initialize_crt.c)
 *     __scrt_uninitialize_crt @ 0x1800E83DC (__scrt_uninitialize_crt.c)
 *     ?IsValid@CDesktopRenderTarget@@WGI@EBA_NXZ @ 0x1800F0E10 (-IsValid@CDesktopRenderTarget@@WGI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMagnifierRenderTarget::ShouldClearRenderTarget(CMagnifierRenderTarget *this)
{
  return 1;
}
