/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x180087154
 * Callers:
 *     dllmain_crt_process_attach @ 0x180086838 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?IsHintSupported@CActionCenterExperienceManager@@UEAAHXZ @ 0x1800848F0 (-IsHintSupported@CActionCenterExperienceManager@@UEAAHXZ.c)
 *     __isa_available_init @ 0x1800878DC (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180087A9C (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x180087C8A (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x180087CAE (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  void *v0; // rcx
  _crt_argv_mode IsHintSupported; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    IsHintSupported = (unsigned int)CActionCenterExperienceManager::IsHintSupported(v0);
    if ( o__configure_narrow_argv_0(IsHintSupported) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
