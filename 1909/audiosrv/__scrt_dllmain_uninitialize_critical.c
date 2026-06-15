/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x180065000
 * Callers:
 *     dllmain_crt_process_detach @ 0x180064998 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ @ 0x1800499E0 (-IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ.c)
 */

char _scrt_dllmain_uninitialize_critical()
{
  CSpatialAudioDtsxHeadphones *v0; // rcx

  CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(0LL);
  return CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(v0);
}
