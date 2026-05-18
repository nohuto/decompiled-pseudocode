/*
 * XREFs of __scrt_initialize_crt @ 0x180125D0C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180126220 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_180056940 @ 0x180056940 (sub_180056940.c)
 *     __isa_available_init @ 0x180126B10 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_18026B411;
  if ( !a1 )
    v1 = 1;
  byte_18026B411 = v1;
  _isa_available_init();
  if ( !sub_180056940() )
    return 0;
  if ( !sub_180056940() )
  {
    sub_180056940();
    return 0;
  }
  return 1;
}
