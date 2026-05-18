/*
 * XREFs of __scrt_uninitialize_crt @ 0x180125EF0
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18012633C (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_180056940 @ 0x180056940 (sub_180056940.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  if ( !byte_18026B411 || !a2 )
  {
    sub_180056940();
    sub_180056940();
  }
  return 1;
}
