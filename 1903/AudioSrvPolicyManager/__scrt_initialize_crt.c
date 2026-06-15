/*
 * XREFs of __scrt_initialize_crt @ 0x18003481C
 * Callers:
 *     dllmain_crt_process_attach @ 0x180034078 (dllmain_crt_process_attach.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x1800314E0 (__scrt_stub_for_acrt_uninitialize_critical.c)
 *     __isa_available_init @ 0x180034EA0 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_18004D911;
  if ( !a1 )
    v1 = 1;
  byte_18004D911 = v1;
  _isa_available_init();
  if ( !_scrt_stub_for_acrt_uninitialize_critical() )
    return 0;
  if ( !_scrt_stub_for_acrt_uninitialize_critical() )
  {
    _scrt_stub_for_acrt_uninitialize_critical();
    return 0;
  }
  return 1;
}
