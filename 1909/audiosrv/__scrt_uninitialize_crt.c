/*
 * XREFs of __scrt_uninitialize_crt @ 0x180065218
 * Callers:
 *     dllmain_crt_process_detach @ 0x180064998 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ @ 0x1800499E0 (-IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ.c)
 */

char __fastcall _scrt_uninitialize_crt(CSpatialAudioDtsxHeadphones *a1, char a2)
{
  char v2; // bl
  CSpatialAudioDtsxHeadphones *v3; // rcx

  v2 = (char)a1;
  if ( !byte_1801B6FE1 || !a2 )
  {
    CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(a1);
    LOBYTE(v3) = v2;
    CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(v3);
  }
  return 1;
}
