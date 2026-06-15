/*
 * XREFs of __scrt_initialize_crt @ 0x14001C080
 * Callers:
 *     __scrt_common_main_seh @ 0x14001BA90 (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize @ 0x14001B230 (__scrt_stub_for_acrt_uninitialize.c)
 *     __isa_available_init @ 0x14001C7E4 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_140088CF1;
  if ( !a1 )
    v1 = 1;
  byte_140088CF1 = v1;
  _isa_available_init();
  if ( !_scrt_stub_for_acrt_uninitialize() )
    return 0;
  if ( !_scrt_stub_for_acrt_uninitialize() )
  {
    _scrt_stub_for_acrt_uninitialize();
    return 0;
  }
  return 1;
}
