/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x1800346BC
 * Callers:
 *     dllmain_crt_process_attach @ 0x180034078 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?AddRef@CStreamPolicyVolumeClient@@UEAAKXZ @ 0x180008100 (-AddRef@CStreamPolicyVolumeClient@@UEAAKXZ.c)
 *     __isa_available_init @ 0x180034EA0 (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180035060 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x180035106 (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x180035136 (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  CStreamPolicyVolumeClient *v0; // rcx
  _crt_argv_mode v1; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    v1 = (unsigned int)CStreamPolicyVolumeClient::AddRef(v0);
    if ( o__configure_narrow_argv_0(v1) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
