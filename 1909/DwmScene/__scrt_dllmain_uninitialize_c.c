/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180125DD8
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18012644C (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_18000F590 @ 0x18000F590 (sub_18000F590.c)
 *     _o__cexit @ 0x180125AFF (_o__cexit.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x180126DDC (-__uncaught_exception@@YA_NXZ.c)
 */

__int64 _scrt_dllmain_uninitialize_c()
{
  int v0; // eax
  __int64 result; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
    return o__execute_onexit_table();
  result = sub_18000F590();
  if ( !(_DWORD)result )
    return o__cexit();
  return result;
}
