/*
 * XREFs of ?ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ @ 0x1800DD6C0
 * Callers:
 *     __scrt_dllmain_crt_thread_attach @ 0x1800E7228 (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x1800E7258 (__scrt_dllmain_crt_thread_detach.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x1800E7314 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_initialize_crt @ 0x1800E7330 (__scrt_initialize_crt.c)
 *     __scrt_uninitialize_crt @ 0x1800E752C (__scrt_uninitialize_crt.c)
 *     ?IsValid@CDesktopRenderTarget@@WGI@EBA_NXZ @ 0x1800ED150 (-IsValid@CDesktopRenderTarget@@WGI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMagnifierRenderTarget::ShouldClearRenderTarget(CMagnifierRenderTarget *this)
{
  return 1;
}
