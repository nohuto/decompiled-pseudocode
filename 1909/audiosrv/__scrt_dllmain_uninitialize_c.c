/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180064FC8
 * Callers:
 *     dllmain_crt_process_detach @ 0x180064998 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?IsEmergencyCallBackModeEnabled@CPolicyConfig@@UEAAHXZ @ 0x180049940 (-IsEmergencyCallBackModeEnabled@CPolicyConfig@@UEAAHXZ.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180065BBC (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x180065C72 (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  CPolicyConfig *v0; // rcx
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = CPolicyConfig::IsEmergencyCallBackModeEnabled(v0);
  if ( !result )
    return o__cexit_0();
  return result;
}
