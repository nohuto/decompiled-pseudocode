/*
 * XREFs of __scrt_initialize_crt @ 0x1800872B4
 * Callers:
 *     dllmain_crt_process_attach @ 0x180086838 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x180084510 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     __isa_available_init @ 0x1800878DC (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al
  WindowWrapper *v2; // rcx
  WindowWrapper *v3; // rcx

  v1 = byte_180598F11;
  if ( !a1 )
    v1 = 1;
  byte_180598F11 = v1;
  _isa_available_init();
  if ( !WindowWrapper::v_SupportsBack(v2) )
    return 0;
  if ( !WindowWrapper::v_SupportsBack(v3) )
  {
    WindowWrapper::v_SupportsBack(0LL);
    return 0;
  }
  return 1;
}
