/*
 * XREFs of __scrt_dllmain_crt_thread_detach @ 0x180063F54
 * Callers:
 *     dllmain_crt_dispatch @ 0x180063830 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ @ 0x180048E10 (-IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ.c)
 */

char __fastcall _scrt_dllmain_crt_thread_detach(CSpatialAudioDtsxHeadphones *a1)
{
  CSpatialAudioDtsxHeadphones *v1; // rcx

  CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(a1);
  CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(v1);
  return 1;
}
