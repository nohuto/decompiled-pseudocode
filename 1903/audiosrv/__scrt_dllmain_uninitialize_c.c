/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180063FD8
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800639A8 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?IsEmergencyCallBackModeEnabled@CPolicyConfig@@UEAAHXZ @ 0x180048D90 (-IsEmergencyCallBackModeEnabled@CPolicyConfig@@UEAAHXZ.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180064BCC (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x180064C82 (_o__cexit_0.c)
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
