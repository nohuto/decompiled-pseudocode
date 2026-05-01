/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180087260
 * Callers:
 *     dllmain_crt_process_detach @ 0x180086958 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?OnVisibilityRevokedChanged@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180083F40 (-OnVisibilityRevokedChanged@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180087A9C (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x180087C7E (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  struct CSingleViewShellExperience *v0; // rdx
  CToastCenterExperienceManager *v1; // rcx
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = CToastCenterExperienceManager::OnVisibilityRevokedChanged(v1, v0);
  if ( !result )
    return o__cexit_0();
  return result;
}
