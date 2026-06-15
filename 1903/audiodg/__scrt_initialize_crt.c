/*
 * XREFs of __scrt_initialize_crt @ 0x140015EC0
 * Callers:
 *     __scrt_common_main_seh @ 0x1400158D0 (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize @ 0x140014CA0 (__scrt_stub_for_acrt_uninitialize.c)
 *     __isa_available_init @ 0x140016624 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_140086CE1;
  if ( !a1 )
    v1 = 1;
  byte_140086CE1 = v1;
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
