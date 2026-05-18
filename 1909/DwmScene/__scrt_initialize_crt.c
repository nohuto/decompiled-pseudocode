/*
 * XREFs of __scrt_initialize_crt @ 0x180125E1C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180126330 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_180056A50 @ 0x180056A50 (sub_180056A50.c)
 *     __isa_available_init @ 0x180126C20 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_18026C411;
  if ( !a1 )
    v1 = 1;
  byte_18026C411 = v1;
  _isa_available_init();
  if ( !sub_180056A50() )
    return 0;
  if ( !sub_180056A50() )
  {
    sub_180056A50();
    return 0;
  }
  return 1;
}
