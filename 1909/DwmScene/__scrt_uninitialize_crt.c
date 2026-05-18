/*
 * XREFs of __scrt_uninitialize_crt @ 0x180126000
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18012644C (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_180056A50 @ 0x180056A50 (sub_180056A50.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  if ( !byte_18026C411 || !a2 )
  {
    sub_180056A50();
    sub_180056A50();
  }
  return 1;
}
