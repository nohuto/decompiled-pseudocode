/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x1800EBA90
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800ED398 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?GetFinalValueOvershootBehavior@CGravityBounceAccelerator@@UEBA?AW4FinalValueOvershootBehavior@@XZ @ 0x1800E5F70 (-GetFinalValueOvershootBehavior@CGravityBounceAccelerator@@UEBA-AW4FinalValueOvershootBehavior@@.c)
 *     __isa_available_init @ 0x1800EC340 (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800EC500 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x1800EC55E (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x1800EC582 (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  _crt_argv_mode FinalValueOvershootBehavior; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    FinalValueOvershootBehavior = (unsigned int)CGravityBounceAccelerator::GetFinalValueOvershootBehavior();
    if ( o__configure_narrow_argv_0(FinalValueOvershootBehavior) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
