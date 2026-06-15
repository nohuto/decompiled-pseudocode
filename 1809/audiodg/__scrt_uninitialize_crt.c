/*
 * XREFs of __scrt_uninitialize_crt @ 0x14001C27C
 * Callers:
 *     __scrt_common_main_seh @ 0x14001BA90 (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize @ 0x14001B230 (__scrt_stub_for_acrt_uninitialize.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  if ( !byte_140088CF1 || !a2 )
  {
    _scrt_stub_for_acrt_uninitialize();
    _scrt_stub_for_acrt_uninitialize();
  }
  return 1;
}
