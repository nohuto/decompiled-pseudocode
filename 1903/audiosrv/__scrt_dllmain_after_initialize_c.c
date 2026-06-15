/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x180063ECC
 * Callers:
 *     dllmain_crt_process_attach @ 0x180063888 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?Release@AudioEffectsWatcher@@UEAAKXZ @ 0x180048D80 (-Release@AudioEffectsWatcher@@UEAAKXZ.c)
 *     __isa_available_init @ 0x180064A0C (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180064BCC (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x180064C8E (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x180064CB2 (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  AudioEffectsWatcher *v0; // rcx
  _crt_argv_mode v1; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    v1 = (unsigned int)AudioEffectsWatcher::Release(v0);
    if ( o__configure_narrow_argv_0(v1) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
