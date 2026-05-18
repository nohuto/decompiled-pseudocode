/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x180125CEC
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180126330 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     DllMain @ 0x18000D450 (DllMain.c)
 *     _o__configure_narrow_argv @ 0x180125B05 (_o__configure_narrow_argv.c)
 *     _o__initialize_narrow_environment @ 0x180125B1D (_o__initialize_narrow_environment.c)
 *     __isa_available_init @ 0x180126C20 (__isa_available_init.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x180126DDC (-__uncaught_exception@@YA_NXZ.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  int v0; // eax
  DWORD v1; // edx
  HINSTANCE v2; // rcx
  void *v3; // r8

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
  {
    _isa_available_init();
  }
  else
  {
    DllMain(v2, v1, v3);
    if ( (unsigned int)o__configure_narrow_argv() )
      return 0;
    o__initialize_narrow_environment();
  }
  return 1;
}
