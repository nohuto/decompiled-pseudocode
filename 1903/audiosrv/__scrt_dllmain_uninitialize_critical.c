/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x180064010
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800639A8 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ @ 0x180048E10 (-IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ.c)
 */

char _scrt_dllmain_uninitialize_critical()
{
  CSpatialAudioDtsxHeadphones *v0; // rcx

  CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(0LL);
  return CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(v0);
}
