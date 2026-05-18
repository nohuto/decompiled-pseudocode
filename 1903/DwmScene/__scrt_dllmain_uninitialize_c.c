/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180125CC8
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18012633C (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_18000F540 @ 0x18000F540 (sub_18000F540.c)
 *     _o__cexit @ 0x1801259EF (_o__cexit.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x180126CCC (-__uncaught_exception@@YA_NXZ.c)
 */

__int64 _scrt_dllmain_uninitialize_c()
{
  int v0; // eax
  __int64 result; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
    return o__execute_onexit_table();
  result = sub_18000F540();
  if ( !(_DWORD)result )
    return o__cexit();
  return result;
}
