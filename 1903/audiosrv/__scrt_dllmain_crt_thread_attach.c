/*
 * XREFs of __scrt_dllmain_crt_thread_attach @ 0x180063F24
 * Callers:
 *     dllmain_crt_dispatch @ 0x180063830 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ @ 0x180048E10 (-IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ.c)
 */

char __fastcall _scrt_dllmain_crt_thread_attach(CSpatialAudioDtsxHeadphones *a1)
{
  CSpatialAudioDtsxHeadphones *v1; // rcx
  CSpatialAudioDtsxHeadphones *v3; // rcx

  if ( !CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(a1) )
    return 0;
  if ( !CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(v1) )
  {
    CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(v3);
    return 0;
  }
  return 1;
}
