/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180060998
 * Callers:
 *     dllmain_crt_process_detach @ 0x180060374 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?GetName@CPolicyConfig@@UEAAPEBGXZ @ 0x180042F20 (-GetName@CPolicyConfig@@UEAAPEBGXZ.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x18006155C (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x180061612 (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  CPolicyConfig *v0; // rcx
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = (unsigned int)CPolicyConfig::GetName(v0);
  if ( !result )
    return o__cexit_0();
  return result;
}
