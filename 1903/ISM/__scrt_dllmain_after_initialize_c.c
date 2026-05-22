/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x18002BC00
 * Callers:
 *     dllmain_crt_process_attach @ 0x18002B758 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?GetNumPosesRequired@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAA?B_KXZ @ 0x18000E480 (-GetNumPosesRequired@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAA-B_KX.c)
 *     __isa_available_init @ 0x18002C204 (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x18002C3C4 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x18002C47E (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x18002C4AE (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  Windows::Internal::Holographic::ConstantVelocityPosePredictionModel *v0; // rcx
  _crt_argv_mode NumPosesRequired; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    NumPosesRequired = (unsigned int)Windows::Internal::Holographic::ConstantVelocityPosePredictionModel::GetNumPosesRequired(v0);
    if ( o__configure_narrow_argv_0(NumPosesRequired) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
