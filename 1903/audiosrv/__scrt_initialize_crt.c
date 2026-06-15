/*
 * XREFs of __scrt_initialize_crt @ 0x18006402C
 * Callers:
 *     dllmain_crt_process_attach @ 0x180063888 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ @ 0x180048E10 (-IsTechnologyForTrayMenu@CSpatialAudioDtsxHeadphones@@UEBA_NXZ.c)
 *     __isa_available_init @ 0x180064A0C (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al
  CSpatialAudioDtsxHeadphones *v2; // rcx
  CSpatialAudioDtsxHeadphones *v3; // rcx

  v1 = byte_1801B7FE1;
  if ( !a1 )
    v1 = 1;
  byte_1801B7FE1 = v1;
  _isa_available_init();
  if ( !CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(v2) )
    return 0;
  if ( !CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(v3) )
  {
    CSpatialAudioDtsxHeadphones::IsTechnologyForTrayMenu(0LL);
    return 0;
  }
  return 1;
}
