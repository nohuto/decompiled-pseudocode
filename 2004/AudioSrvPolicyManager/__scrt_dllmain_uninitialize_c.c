/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180039AC8
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x1800394A4 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18003A66C (-__uncaught_exception@@YA_NXZ.c)
 *     _o__cexit @ 0x18003A6FE (_o__cexit.c)
 *     sub_18003ABE8 @ 0x18003ABE8 (sub_18003ABE8.c)
 */

__int64 _scrt_dllmain_uninitialize_c()
{
  int v0; // eax
  __int64 result; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
    return o__execute_onexit_table(&qword_18004FBE0);
  result = sub_18003ABE8();
  if ( !(_DWORD)result )
    return o__cexit();
  return result;
}
