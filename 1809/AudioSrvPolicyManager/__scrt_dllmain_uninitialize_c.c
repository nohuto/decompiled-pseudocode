/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180036DD8
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800367B4 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?OnStreamCreate@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000AF40 (-OnStreamCreate@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180037670 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x18003770A (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  struct IAudioSessionInfo *v0; // rdx
  CPlaybackManager *v1; // rcx
  struct IAudioStreamInfo *v2; // r8
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = CPlaybackManager::OnStreamCreate(v1, v0, v2);
  if ( !result )
    return o__cexit_0();
  return result;
}
